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

            if(pos1 == -1 && pos2 == -1){
                mapped1 += ch1;
                mapped2 += ch2;
            } else if(pos1 != -1 && pos2 != -1 && mapped1[pos1] != ch2 && mapped2[pos2] != ch1){
                isomorphic = true;
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