#include <iostream>
using namespace std;
int main()
{
    int i, j, row, col;
    cout << "Enter the number of Rows : ";
    cin >> row;
    cout << "Enter the number of Cols : ";
    cin >> col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}