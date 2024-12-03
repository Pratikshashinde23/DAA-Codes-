#include <iostream>
using namespace std;

int firstzeroindex(int arr[], int n) {
    // Function to find the index of the first zero
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Declare the array with size n

    cout << "Enter the elements (0 or 1) of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x = firstzeroindex(arr, n);
    if (x == -1) {
        cout << "Count of zero is 0" << endl;
    } else {
        cout << "Count of zero is " << n - x << endl;
    }

    return 0;
}
