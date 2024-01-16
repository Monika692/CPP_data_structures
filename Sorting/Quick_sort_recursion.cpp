#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int key = arr[low];
    int p = low + 1;
    int q = high;
    int temp;

    while (p <= q) {
        while (arr[p] < key)
            p++;

        while (arr[q] > key)
            q--;

        if (p < q) {
            temp = arr[q];
            arr[q] = arr[p];
            arr[p] = temp;
        }
    }

    temp = arr[q];
    arr[q] = arr[low];
    arr[low] = temp;

    return q;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int key = partition(arr, low, high);

        quicksort(arr, low, key - 1);
        quicksort(arr, key + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
