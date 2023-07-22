#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int max_profit = 0;
    // for (int i = 0; i < 6; i++)
    // {
    //     int current_day_price = arr[i];
    //     for (int j = i + 1; j < 6; j++)
    //     {
    //         if (arr[j] - current_day_price > max_profit)
    //             max_profit = arr[j] - current_day_price;
    //     }
    // }
    int start = 0, end = 5;
    while (start < end)
    {
        if (arr[end] - arr[start] > max_profit)
        {
            max_profit = arr[end] - arr[start];
        }
        start++;
        end--;
    }
    cout << " Max Profit : " << max_profit;
    return 0;
}