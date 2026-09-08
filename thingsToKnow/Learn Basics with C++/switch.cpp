#include <iostream>
// string header file is included to use the string class
#include <string>
using namespace std;

// enum is used to create a custom data type
enum DayOfWeek{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, UNKNOWN
};


// this function takes a string as input and returns the corresponding enum value for the day of the week
DayOfWeek getDayEnum(const string& day){
    if (day == "Monday") return Monday;
    else if (day == "Tuesday") return Tuesday;
    else if (day == "Wednesday") return Wednesday;
    else if (day == "Thursday") return Thursday;
    else if (day == "Friday") return Friday;
    else if (day == "Saturday") return Saturday;
    else if (day == "Sunday") return Sunday;
    else throw invalid_argument("Invalid day of the week");

    return UNKNOWN; // This line will never be reached, but it's here to avoid compiler warnings
};

int main(){
    string day;
    cout << "Enter a day of the week: ";
    cin >> day;

    // The switch statement is used to execute different code blocks based on the value of the day enum
    // case cannot have the string literal, so we use the enum values instead

   try{
     switch (getDayEnum(day)) {
        case Monday:
            cout << "It's the start of the week!" << endl;
            break;
        case Tuesday:
            cout << "It's the second day of the week!" << endl;
            break;
        case Wednesday:
            cout << "It's the third day of the week!" << endl;
            break;
        case Thursday:
            cout << "It's the fourth day of the week!" << endl;
            break;
        case Friday:
            cout << "It's the fifth day of the week!" << endl;
            break;
        case Saturday:
            cout << "It's the sixth day of the week!" << endl;
            break;
        case Sunday:
            cout << "It's the last day of the week!" << endl;
            break;
        default:
            cout << "That's not a day of the week." << endl;
    }
   } catch (const invalid_argument& e) {
        cout << e.what() << ", Please enter a valid day of the week with first letter to be capitalized." << endl;
    }
    return 0;   
}