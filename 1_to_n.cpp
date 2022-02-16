#include <iostream>
using namespace std;
int main()
{
    int i, j, row, col, count = 1;
    cout << "Enter the number of Rows : ";
    cin >> row;
    cout << "Enter the number of Cols : ";
    cin >> col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << count << "\t";
            count++;
        }
        cout << "\n";
    }
    return 0;
}