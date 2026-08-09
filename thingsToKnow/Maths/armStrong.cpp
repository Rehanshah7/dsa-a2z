#include<bits/stdc++.h>
using namespace std;

class Armstrong{
    public:
        static bool isArmstrong(int n){
            int originalNum = n;
            int sum = 0;
            int numDigits = to_string(n).length();

            while(originalNum > 0){
                int lastDigit = originalNum % 10;
                sum += round(pow(lastDigit, numDigits));
                originalNum /= 10;
            }

            return sum == n;
        }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(Armstrong::isArmstrong(n)){
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}