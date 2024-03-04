#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int>& arr) {
    int i,j,key, n = arr.size();
    
    for ( i = 1; i < n; i++) {
         key = arr[i];
         j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    cout << "Enter the number of elements: ";
    int n,i;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements:\n";
    for ( i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr);

    cout << "Sorted array:\n";
    for ( i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

