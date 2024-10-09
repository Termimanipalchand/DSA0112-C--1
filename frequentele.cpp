#include <iostream>
#include <unordered_map>  
using namespace std;

int mostFrequentElement(int arr[], int size) {
    unordered_map<int, int> frequencyMap;
    
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
    }
    
    int maxCount = 0, mostFrequent = -1;
    for (auto &element : frequencyMap) {
        if (element.second > maxCount) {
            maxCount = element.second;
            mostFrequent = element.first;
        }
    }
    
    return mostFrequent;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int result = mostFrequentElement(arr, size);
    cout << "The most frequent element is: " << result << endl;
    
    return 0;
}

