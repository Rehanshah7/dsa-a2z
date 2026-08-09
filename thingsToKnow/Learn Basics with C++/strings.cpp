#include<iostream>
using namespace std;


//String Length class to demonstrate string length functionality
class StringLength{
    public:
        void getLengthOfString(string str){
            cout << "The length of the string is: " << str.length() << endl;
        }
};

//String Accessing class to demonstrate string accessing functionality
class StringAccessing{
    public:
        void accessStringCharacter(string str){
            for(int i=0; i < str.length(); i++){
                cout << "Character at index " << i << ": " << str[i] << endl;
            }
        }
};

//String Modification class to demonstrate string modification functionality
class StringModification{
    public:
        void modifyString(string str){
            string newStr = str;

            newStr[0] = 'h'; // Modifying the first character
            cout << "Modified string: " << newStr << endl;
        }
};

//String Comparison class to demonstrate string comparison functionality
class StringComparison{
    public:
        void compareStrings(string str1, string str2){
            if(str1 == str2){
                cout << "The strings are equal." << endl;
            } else {
                cout << "The strings are not equal." << endl;
            }
        }
};

int main(){
    string mystring = "Hello, World!";
    StringLength sl;
    sl.getLengthOfString(mystring);
    StringAccessing sa;
    sa.accessStringCharacter(mystring);
    StringModification sm;
    sm.modifyString(mystring);
    StringComparison sc;
    sc.compareStrings(mystring, "Hello, World!");
    return 0;
}