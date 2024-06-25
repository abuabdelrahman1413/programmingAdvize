#include <asm-generic/errno.h>
#include <iostream>
using namespace std;

enum enQuestionsLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };
short ReadHowManyQuestions() {
  short NumberOfQuestions;
  do {
    cout << "How Many Questions you want to answer ?";
    cin >> NumberOfQuestions;
  } while (NumberOfQuestions < 1 || NumberOfQuestions > 10);

  return NumberOfQuestions;
}
string GetQuestionLevelText(enQuestionsLevel QuestionsLevel) {
  string arrQuestionsLevelText[4] = {"Easy", "Med", "Hard", "Mix"};
  return arrQuestionsLevelText[QuestionsLevel - 1];
}
enQuestionsLevel ReadQuestionsLevel() {
  short QuestionLevel;
  do {
    cout << "Enter The question level [1]Easy, [2]Mid, [3]Hard, [4]Mix ?";
    cin >> QuestionLevel;
  } while (QuestionLevel < 1 || QuestionLevel > 4);
  return enQuestionsLevel(QuestionLevel);
}
string GetOpTypeSymbol(enOperationType OpType) {
  switch (OpType) {
  case enOperationType::Add:
    return "+";
  case enOperationType::Sub:
    return "-";
  case enOperationType::Mult:
    return "*";
  case enOperationType::Div:
    return "-";
  default:
    return "Mix";
  }
}
enOperationType ReadOpType() {
  short OpType;
  do {
    cout << "Enter OPType [1]Add, [2]Sub, [3]Mul, [4]Div, [5]Mix ? ";
  } while (OpType < 1 | OpType > 5);
  return enOperationType(OpType);
}
struct stQuestion {
  int Number1 = 0;
  int Number2 = 0;
  enOperationType OperationType;
  enQuestionsLevel QuestionsLevel;
  int CorrectAnswer = 0;
  int PlayerAnswer = 0;
  bool AnswerResult = false;
};
struct stQuizz {
  stQuestion QuestionList[100];
  short NumberOfQuestions;
  enQuestionsLevel QuestionsLevel;
  enOperationType OpType;
  short NumberOfWrongAnswers = 0;
  short NumberOfRightAnswers = 0;
  bool isPass = false;
};

int SimpleCalc(int Number1, int Number2, enOperationType OpType) {
  switch (OpType) {
  case enOperationType::Add:
    return Number1 + Number2;
  case enOperationType::Sub:
    return Number1 - Number2;
  case enOperationType::Mult:
    return Number1 * Number2;
  case enOperationType::Div:
    return Number1 / Number2;
  default:
    return Number1 + Number2;
  }
}
int RandomNumber(int From, int To) {
  int RandomNumber = rand() % (To - From + 1) + From;

  return RandomNumber;
}
enOperationType GetRandomOp() {
  int OpType = RandomNumber(1, 4);
  return (enOperationType)OpType;
}

stQuestion GenerateQuestion(enQuestionsLevel QuestionsLevel,
                            enOperationType OperationType) {
  stQuestion Question;
  if (QuestionsLevel == enQuestionsLevel::Mix) {
    QuestionsLevel = (enQuestionsLevel)RandomNumber(1, 3);
  }
  if (OperationType == enOperationType::MixOp) {
    OperationType = GetRandomOp();
  }
  Question.OperationType = OperationType;

  switch (QuestionsLevel) {
  case enQuestionsLevel::EasyLevel:
    Question.Number1 = RandomNumber(1, 10);
    Question.Number2 = RandomNumber(1, 10);

    Question.CorrectAnswer =
        SimpleCalc(Question.Number1, Question.Number2, Question.OperationType);
    Question.QuestionsLevel = QuestionsLevel;
    return Question;
  case enQuestionsLevel::MedLevel:
    Question.Number1 = RandomNumber(10, 50);
    Question.Number2 = RandomNumber(10, 50);

    Question.CorrectAnswer =
        SimpleCalc(Question.Number1, Question.Number2, Question.OperationType);
    Question.QuestionsLevel = QuestionsLevel;
    return Question;
  case enQuestionsLevel::HardLevel:
    Question.Number1 = RandomNumber(50, 100);
    Question.Number2 = RandomNumber(50, 100);

    Question.CorrectAnswer =
        SimpleCalc(Question.Number1, Question.Number2, Question.OperationType);
    Question.QuestionsLevel = QuestionsLevel;
    return Question;
  }

  return Question;
}
void GenerateQuizzQuestions(stQuizz &Quizz) {
  for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++) {
    Quizz.QuestionList[Question] =
        GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);
  }
}

int ReadQuestionAnswer() {
  int Answer = 0;
  cin >> Answer;
  return Answer;
}

void PrintTheQuestion(stQuizz &Quizz, short QuestionNumber) {
  cout << "\n";
  cout << "Question [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions
       << "] \n\n";
  cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
  cout << Quizz.QuestionList[QuestionNumber].Number2 << " ";
  cout << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType);
  cout << "\n_____________" << endl;
}
void CorrectTheQuestionAnswer(stQuizz Quizz, short QuestionNumber) {
  if (Quizz.QuestionList[QuestionNumber].PlayerAnswer !=
      Quizz.QuestionList[QuestionNumber].CorrectAnswer) {
    Quizz.QuestionList[QuestionNumber].AnswerResult = false;
    Quizz.NumberOfWrongAnswers++;

    cout << "Wrong Answer :-( \n";
    cout << "The right answer is: ";
    cout << Quizz.QuestionList[QuestionNumber].CorrectAnswer;
    cout << "\n";
  } else {
    Quizz.QuestionList[QuestionNumber].AnswerResult = true;
    Quizz.NumberOfRightAnswers++;

    cout << "Right Answer :-) \n";
  }
  cout << endl;

  /* SetScreenColor(Quizz.QuestionList[QuestionNumber].AnswerResult); */
}
void AskAndCorrectQuestionListAnswers(stQuizz &Quizz) {
  for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions;
       QuestionNumber++) {
    PrintTheQuestion(Quizz, QuestionNumber);
    Quizz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
    CorrectTheQuestionAnswer(Quizz, QuestionNumber);
  }

  Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
}
string GetFinalResultText(bool Pass) {
  if (Pass)
    return "PASS :-)";
  else
    return "Fail :-(";
}
void PrintQuizzResults(stQuizz Quizz) {
  cout << "\n";
  cout << "__________________________________________\n\n";
  cout << "Final Result is " << GetFinalResultText(Quizz.isPass);
  cout << "\n_________________________________________\n\n";

  cout << "Number of Questions: " << Quizz.NumberOfQuestions << endl;
  cout << "Questions Level    : " << GetQuestionLevelText(Quizz.QuestionsLevel)
       << endl;
  cout << "OpType             : " << GetOpTypeSymbol(Quizz.OpType) << endl;
  cout << "Number of Right Answers: " << Quizz.NumberOfRightAnswers << endl;
  cout << "Number of Wrong Answers: " << Quizz.NumberOfWrongAnswers << endl;
  cout << "\n_________________________________________\n\n";
}
void PlayMathGame() {
  stQuizz Quizz;
  Quizz.NumberOfQuestions = ReadHowManyQuestions();
  Quizz.QuestionsLevel = ReadQuestionsLevel();
  Quizz.OpType = ReadOpType();

  GenerateQuizzQuestions(Quizz);
  AskAndCorrectQuestionListAnswers(Quizz);
  PrintQuizzResults(Quizz);
}
void ResetScreen() { system("clear"); }
void StartGame() {
  char PlayAgain = 'Y';
  do {
    ResetScreen();
    PlayMathGame();

    cout << endl << "Do you want to play again? Y/N? ";
    cin >> PlayAgain;
  } while (PlayAgain == 'Y' || PlayAgain == 'y');
}
int main() {
  srand((unsigned)time(NULL));

  StartGame();

  return 0;
}
