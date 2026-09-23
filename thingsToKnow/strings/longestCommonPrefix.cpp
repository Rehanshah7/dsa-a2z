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