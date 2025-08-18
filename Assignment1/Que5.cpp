#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum, colSum;
    cout<<"\n";

    cout<<"Original array:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";

    for (int i = 0; i < 3; i++)
    {
        rowSum = 0;
        for (int j = 0; j < 3; j++)
            rowSum += a[i][j];
        cout<<"Sum of row "<<i+1<<" is "<<rowSum<<"\n";
    }
    cout<<"\n";

    for (int j = 0; j < 3; j++)
    {
        colSum = 0;
        for (int i = 0; i < 3; i++)
            colSum += a[i][j];
        cout<<"Sum of column "<<j+1<<" is "<<colSum<<"\n";
    }

    return 0;
}
