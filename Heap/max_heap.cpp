#include <iostream>
using namespace std;

int isMaxHeap(int arr[], int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    int c=1;
    if (left < n && arr[i] < arr[left] )
    {
        c=0;
    }

    if (right < n && arr[i] < arr[right])
    {
        c=0;
    }

    return c;
}

void heapify(int arr[], int n, int i)
{
    int max = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[max])
        max = left;

    if (right < n && arr[right] > arr[max])
        max = right;

    if (i != max)
    {
        swap(arr[i], arr[max]);
        heapify(arr, n, max);
    }
}

void buildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i>= 0; i--)
    {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
{
    buildMaxHeap(arr, n);

    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

   int arr[n];
    cout << "Enter the elements in an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    buildMaxHeap(arr, n);

    cout << "Heapified array :";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int k = isMaxHeap(arr, n, 0);
    if (k == 1)
        cout << "The array is a max heap." << endl;
    else
        cout << "The array is not a max heap." << endl;

    heapSort(arr, n);

    cout << "Sorted array :";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

