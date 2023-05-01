#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,m,n;
    int A[10][10], B[10][10], C[10][10];
    cout << "\nEnter the ROW of the first matrix : ";
    cin >> p;
    cout << "\nEnter the COLUMN of the first matrix : ";
    cin >> q;
    cout << "\nEnter the ROW of the second matrix : ";
    cin >> m;
    cout << "\nEnter the COLUMN of the second matrix : ";
    cin >> n;

    if(q!=m)
        cout << "\nOpps! Matrix Multiplication not possible..."<<endl;
    else
    {
        cout << "\nEnter the elements for the matrix A : "<<endl;
        for(int i=0; i < p ; i++)
        {
            for(int j=0; j < q; j++)
            {
               cin >>  A[i][j];
            }
        }
        cout << "\nEnter the elements for the matrix B : "<<endl;
        for(int i=0; i < m ; i++)
        {
            for(int j=0; j < n; j++)
            {
               cin >>  B[i][j];
            }
        }

        for(int i=0; i < p ; i++)
        {
            for(int j=0; j < n; j++)
            {
                C[i][j] = A[i][j]*B[i][j];
            }
        }
        cout << "\n The Result of the Matrix Multiplication is :\n "<<endl;
        for(int i=0; i < p ; i++)
        {
            for(int j=0; j< n; j++)
            {
                cout << " " << C[i][j];
            }
            cout << "\n";
        }
    }

        return 0;
}