#include<iostream>
using namespace std;

int main(){
    string str1;
    cout << "Enter a string 1: ";
    cin >> str1;

    string str2;
    cout << "Enter a string 2: ";
    cin >> str2;

    bool isomorphic = true;

    if(str1.length() != str2.length()){
        isomorphic = false;
    } 
    else{
        string mapped1 = "";
        string mapped2 = "";

        for(int i = 0; i < str1.length(); i++){
            char ch1 = str1[i];
            char ch2 = str2[i];

            int pos1 = mapped1.find(ch1);
            int pos2 = mapped2.find(ch2);

            if(pos1 == string::npos && pos2 == string::npos){
                mapped1 += ch1;
                mapped2 += ch2;
            } else if(pos1 != string::npos &&
                    pos2 != string::npos &&
                    pos1 == pos2){
                continue;
            } else{
                isomorphic = false;
                break;
            }
        }
    }
    if(isomorphic){
        cout << "Strings are isomorphic" << endl;
    } else {
        cout << "Strings are not isomorphic" << endl;
    }
    
    return 0;
}

// pseudo code
// 1. Take 2 string as an input
// 2. Now compare the length of both the string if it is of same length the Isomorphic True or else False
// 3. Take 2 string named a s mapped1 and mapped2
// 4. Now traverse through each char of a string1 or string2 and store each char of string1 and sting2 in ch1 and ch2
// 5. After that check whether the ch1 or ch2 is present in the mapped1 and mapped2
//    If not then it will written no position and then add those char to the mapped1 and mapped2 strings
// 6. Second condition checks that if the char is presnet then the position of both char must be equal or not and if it is equal the Isomorphic is True else False
// 7. Last condition is that Isomorphic is False break the loop
// 8. Prints down whether the string is isomorphic or not