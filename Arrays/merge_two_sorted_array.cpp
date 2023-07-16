#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {1, 2, 3};
    int arr3[7];
    int i = 0, j = 0, k = 0;
    while (i < 4 && j < 3)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < 4)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < 3)
    {
        arr3[k++] = arr2[j++];
    }
    for (auto i : arr3)
    {
        cout << i << endl;
    }
    return 0;
}