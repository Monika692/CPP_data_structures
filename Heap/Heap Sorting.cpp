#include<iostream>
using namespace std;

int checkheap(int arr[], int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    int c = 0;

    if (left < n && arr[i] > arr[left])
    {
        c = 1;
    }

    if (right < n && arr[i] > arr[right])
    {
        c = 1;
    }
    return c;
}

void heapify(int arr[], int n, int i)
{
    int minn = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[minn])
        minn = left;

    if (right < n && arr[right] < arr[minn])
        minn = right;

    if (i != minn)
    {
        swap(arr[i], arr[minn]);
        heapify(arr, n, minn);
    }
}

int isHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        if (checkheap(arr, n, i))
            return 0;
    }
    return 1;
}

void heapSort(int arr[], int n)
{
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

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "Heapified array :";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int k = isHeap(arr, n);
    if (k == 1)
        cout << "The array is a heap." << endl;
    else
        cout << "The array is not a heap." << endl;

    heapSort(arr, n);

    cout << "Sorted array :";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
