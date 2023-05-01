#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of Rows  : ";
    cin >> row;
    cout << "Enter the number of Cols  : ";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}