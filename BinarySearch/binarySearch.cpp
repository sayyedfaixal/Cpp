#include <iostream>
using namespace std;
int binarySearch(int arr[], int key, int size)
{
    int start = 0, end = size - 1;
    // int mid = start + (end - start) / 2; // because of int overflow we use this condition to find the mid
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 4, 6, 7, 10, 11, 14, 21, 34};
    int key;
    cout << "Enter the key you want to search for : ";
    cin >> key;
    cout << key << " found at location : " << binarySearch(arr, key, 9);
    return 0;
}
