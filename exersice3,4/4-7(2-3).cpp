#include <iostream>
using namespace std;
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

  
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    
    int* arr = new int[n];

    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    sortArray(arr, n);

    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  
    }
    cout << endl;

    
    delete[] arr;

    return 0;
}
