#include <iostream>
using namespace std;
void selectionSort(int arr[], int array_size)
{
    // 10 12 13 20 2 5 14
    int minimum_element_index = -1;
    for (int i = 0; i < array_size - 1; i++)
    {
        minimum_element_index = i;
        for (int j = i + 1; j < array_size; j++)
        {
            if (arr[j] <= arr[minimum_element_index])
            {
                minimum_element_index = j;
            }
        }
        swap(arr[i], arr[minimum_element_index]);
    }
    for (int i = 0; i < array_size; i++)
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
    selectionSort(arr, array_size);
    return 0;
}