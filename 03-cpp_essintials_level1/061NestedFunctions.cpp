#include <iostream>
using namespace std;
 //من فوائد تقسيم الكود لدوال إنك كل مرة حتفكر في مهمة محددة

enum enWeekDays { sun=1, mon=2, tue=3, wed=4, thr=5, fri=6, sat=7 };
void ShowMenu()
{
    cout << "*******************************" << endl;
    cout << "            Week Days          " <<endl;
    cout << "*******************************" << endl;
    cout << "[1] Sunday" << endl;
    cout << "[2] Monday" << endl;
    cout << "[3] Tuesday" << endl;
    cout << "[4] Wednesday" << endl;
    cout << "[5] Thursday" << endl;
    cout << "[6] Friday" << endl;
    cout << "[7] Saturday" << endl;
    cout << "*******************************" << endl;
    cout << "Please Enter your choise: " ;
}
enWeekDays ReadWeekDay ()
{
    enWeekDays weekday;
    int wd;
    cin >> wd;
    return (enWeekDays)wd;  // The idea is compare number user inputed with enum
    //The benfite of enum to make code more readable
}
string GetWeekDayName(enWeekDays weekday)
{
    switch (weekday)
    {
        case enWeekDays::fri:
            return "fri";
            break;
        case enWeekDays::sat:
            return("sat");
            break;
        case enWeekDays::sun:
            return  ("sun\n");
            break;
        case enWeekDays::mon:
            return ("Mon\n");
            break;
        case enWeekDays::tue:
            return ("Tue\n");
            break;
        case enWeekDays::wed:
            return("Wed\n");
            break;
        case enWeekDays::thr:
            return("Thr\n");
            break;
        default:
            return ("Invalid Day\n");
    }
}
int main()
{
    ShowMenu();

    cout << "today is " << GetWeekDayName(ReadWeekDay()) << endl;/*  هنا البارميتر عبارة عن دالة الدالة دي حترجع اينوم */ 
    return 0;
}