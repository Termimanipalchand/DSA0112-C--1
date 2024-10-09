#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void removeDuplicatesAndSort(vector<int> &arr) {

    set<int> sortedSet(arr.begin(), arr.end());

    cout << "Sorted Array = {";
    for (auto it = sortedSet.begin(); it != sortedSet.end(); ++it) {
        if (it != sortedSet.begin()) {
            cout << ", ";
        }
        cout << *it;
    }
    cout << "}" << endl;
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    removeDuplicatesAndSort(arr);

    return 0;
}
