#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade: " << endl;
    cin >> grade;

    if(grade >= 90){
        cout << "You got an A!" << endl;
    } else if(grade >= 80){
        cout << "You got a B!" << endl;
    } else if(grade >= 70){
        cout << "You got a C!" << endl;
    } else if(grade >= 60){
        cout << "You got a D!" << endl;
    } else{
        cout << "You failed the course." << endl;
    }
    return 0;
}