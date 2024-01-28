#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        // int min_element = arr[i];
        while (j >= 0 && arr[j] >= arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int array_size;
    cout << "Enter the size of the array : ";
    cin >> array_size;
    int arr[array_size];
    cout << "\nNow enter " << array_size << "number of elements :" << endl;
    for (int i = 0; i < array_size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting the array is : " << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nNow sorting the array : " << endl;
    insertionSort(arr, array_size);
    return 0;
}