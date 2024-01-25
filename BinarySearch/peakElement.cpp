/*
#include <iostream>
using namespace std;
int peakElement(int arr[], int n)
{
    int start = 0, end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        if (arr[0] > arr[1])
            return arr[0];
        else
            return arr[1];
    }
    else if (n > 2)
    {
        while (start <= end)
        {
            if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
            {
                ans = mid;
                break;
            }
            else if (arr[mid] < arr[mid + 1])
            {
                start = mid;
            }
            else if (arr[mid] > arr[mid + 1])
            {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 20, 25, 30, 1};
    cout << "Peak element is : " << peakElement(arr, 7);
}
*/
#include <iostream>
using namespace std;
int findPeak(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
        else if (arr[mid] > arr[mid + 1])
            end = mid - 1;
        else if (arr[mid] > arr[mid - 1])
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 20, 25, 30, 24, 21, 18, 11, 10, 7, 2, 1};
    cout << "Peak element is at location : " << findPeak(arr, 14);
}