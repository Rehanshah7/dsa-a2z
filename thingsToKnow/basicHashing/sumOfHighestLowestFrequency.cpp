#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]] += 1; // Increment the count for the corresponding number
    }

    int sum = 0;
    int max_freq = 0;
    int min_freq = n;

    int max_element;
    int min_element;

    for(auto it : mpp){
        int element = it.first;
        int frequency = it.second;

        if(frequency > max_freq){
            max_freq = frequency;
            max_element = element;
        }

        if(frequency < min_freq){
            min_freq = frequency;
            min_element = element;
        }
    }

    cout << "The sum of highest and lowest frequency elements is: " << max_freq + min_freq << endl;

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the number to check its frequency: ";
        cin >> number;
        cout << "The Frequency of " << number << " is: " << mpp[number] << endl;
    }
}