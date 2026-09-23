#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    cout << "Enter a number1: ";
    cin >> n1;

    int n2;
    cout << "Enter a number2: ";
    cin >> n2;

    int lcm = 0;

    for(int i = max(n1, n2); ; i++){
        if((i % n1 == 0) && (i % n2 == 0)){
            lcm = i;
            break;
        }
    }

    cout << "The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
    return 0;
}