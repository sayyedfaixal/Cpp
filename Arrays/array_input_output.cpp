#include <bits/stdc++.h>
using namespace std;
int a[10][10];
int row, col;
void provide_options()
{
    cout << " -------------------------OPERTIONS-------------------------" << endl;
    cout << "1. Find the Sum of All the elements in the Array." << endl;
    cout << "2. Find the Multiplication of All the elements in the Array." << endl;
    cout << "3. Find the Transpose of the Array." << endl;
    cout << "0. EXIT." << endl;
    cout << " ------------------------------------------------------------" << endl;
}
void do_sum()
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
    }
    cout << "The sum of all the elements of the Array is - " << sum << endl;
}
void do_multiplication()
{
    int mul = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul *= a[i][j];
        }
    }
    cout << "The Multiplicaiton of all the elements of the Array is - " << mul << endl;
}
void do_transpose()
{
    cout << " The transpose of the give Array is - " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}
void take_option_input()
{
    int c;
    cout << "Enter the number to perform the given Operation - " << endl;
    cin >> c;
    switch (c)
    {

    case 0:
        exit(0);
        break;
    case 1:
        do_sum();
        take_option_input();
        break;
    case 2:
        do_multiplication();
        take_option_input();
        break;
    case 3:
        do_transpose();
        take_option_input();
        break;
    default:
        cout << "You have entered and Invalid option! Please try again..." << endl;
        take_option_input();
        break;
    }
}
int main()
{
    cout << "Enter number of Rows : ";
    cin >> row;
    cout << "Enter number of Columns : ";
    cin >> col;
    cout << "Now Enter the elements of the Array\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The Array is -\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    provide_options();
    take_option_input();
    return 0;
}