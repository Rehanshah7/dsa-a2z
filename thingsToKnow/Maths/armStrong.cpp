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

// pseudo code
// 1. Store the original number and initialise the sum with 0
// 2. Get the number of digits in the number
// 3. Loop through the digits of the number
// 4. Get the last digit of the number by modulus 10
// 5. Raise the last digit to the power of number of digits and add it to the sum and make sure you round off
// 6. Remove the last digit from the original number by dividing it by 10
// 7. Check if the sum is equal to the original number, if yes then it is an Armstrong number otherwise not