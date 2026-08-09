#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]] += 1; // Increment the count for the corresponding number
    }

    for(auto it: mpp){
        cout << it.first << "-->" << it.second << endl;
    }

    int max_freq = 0;
    int min_freq = n;

    int maxElement;
    int minElement;

    for(auto it : mpp){
        int element = it.first;
        int frequency = it.second;

        if(frequency > max_freq){
            max_freq = frequency;
            maxElement = element;
        }
        if(frequency < min_freq){
            min_freq = frequency;
            minElement = element;
        }

        cout << "Highest frequency element: " << maxElement << " (frequency = " << max_freq << ")" << endl; 
        cout << "Lowest frequency element: " << minElement << " (frequency = " << min_freq << ")" << endl;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the number to check its frequency: ";
        cin >> number;
        cout << "The Frequency of " << number << " is: " << mpp[number] << endl;
    }
}