#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter a size of a string array: ";
    cin >> size;

    string str[size];
    for(int i = 0; i < size; i++){
        cout << "Enter a string " << i + 1 << ": ";
        cin >> str[i];
    }
    cout << endl;

    string prefix = str[0];
    for(int i = 1; i < size; i++){
        int position = 0;

        while(position < prefix.length() && position < str[i].length() && prefix[position] == str[i][position]){
            position++;
        }

        prefix = prefix.substr(0, position);

        if(prefix.empty()){
            break;
        }
    }
    
    cout << "The longest common prefix is: " << prefix << endl;
    
    return 0;
}

// pseudo code
// 1. Take the size of an array and construct string array and each index should have a particular string
// 2. Assume the first string as a prefix
// 3. Loop through the rest of the remaining string
//    Take a variable position and initialize it to 0
//    Check whether the position of prefix and current string position is same or not and if it is same then position++
//    If the position reaches the prefix or if it reaches the current string then ends the while loop
//    After getting the position the prefix would be substring from 0 to the position index
//    Repeat the code until we get the final prefix and for loop end to travers
// 4. If the prefix becomes empty then break the loop and prints the longest common prefix