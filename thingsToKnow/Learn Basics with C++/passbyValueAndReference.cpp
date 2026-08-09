#include<iostream>
using namespace std;

class PassByValueAndReference{
    public:
        void passByValue(int x){
            x = x + 5;
            cout << "Inside passByValue function: " << x << endl;
        }

        void passByReference(int &x){
            x = x + 5;
            cout << "Inside passByReference function: " << x << endl;
        }
};

int main(){
    PassByValueAndReference obj;
    int num1 = 10;
    int num2 = 10;

    cout << "Before passByValue function: " << num1 << endl;
    obj.passByValue(num1);
    cout << "After passByValue function: " << num1 << endl;

    cout << "Before passByReference function: " << num2 << endl;
    obj.passByReference(num2);
    cout << "After passByReference function: " << num2 << endl;
    return 0;
}