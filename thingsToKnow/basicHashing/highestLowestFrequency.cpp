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

// pseudo code
// 1. Take the number of elements in an array and construct an array of that size
// 2. Inititalize a unordered_map to store the frequency of each element in the array.
// 3. Loop through the array and increment the count of each element in the map using the element as a key.
// 4. Take the number of queries as an input and loop through the each queries and ask the user to input the query element and check the frequency of that element in the map.
// 5. Loop through the unordered_map to find the element with the highest and lowest frequency and print them.
// 6. Take 4 variables max_freq, min_freq, maxElement, minElement to store the highest and lowest frequency and their corresponding elements.
// 7. max_freq is initialized to 0 and min_freq is initialized to n (the size of the array) to ensure that any frequency found will be higher than max_freq and lower than min_freq initially.
// 8. For each element in the unordered_map take out the element = it.first and frequency = it.second, check if its 'frequency' is greater than max_freq or less than min_freq and update the corresponding variables accordingly.
// 9. Print the highest and lowest frequency elements.