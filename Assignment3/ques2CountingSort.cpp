#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    int maxVal = *max_element(arr1.begin(), arr1.end());

    // Frequency array for counting sort
    vector<int> freq(maxVal + 1, 0);
    for (int num : arr1) {
        freq[num]++;
    }

    int idx = 0;
    // Place elements of arr2 in order by frequency
    for (int num : arr2) {
        while (freq[num] > 0) {
            arr1[idx++] = num;
            freq[num]--;
        }
    }

    // Place remaining elements in ascending order
    for (int num = 0; num <= maxVal; num++) {
        while (freq[num] > 0) {
            arr1[idx++] = num;
            freq[num]--;
        }
    }

    return arr1;
}

int main() {
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    vector<int> sortedArr = relativeSortArray(arr1, arr2);

    cout << "Sorted Array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}
