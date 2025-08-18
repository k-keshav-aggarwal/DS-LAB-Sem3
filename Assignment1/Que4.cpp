#include<iostream>
using namespace std;

void Reverse()
{
    int a[50] , n ;
    cout<<"Please Enter the Number of elements you want in the new array ";
    cin>>n;

    for(int i = 0; i < n ; i++)
    {
        cout<<"\nElement "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"Array Created Successfully \n";

    for (int i = 0; i < n/2; i++)
    {
        int t = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = t;
    }

    cout<<"The Currently stored Array is:\n";
    for(int i = 0; i < n;i++)
        cout<<a[i]<<"\n";
    cout<<"End of Array \n";
}

void MultiplyMat()
{
    int a[5][5];
    for(int i = 0; i < 5 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<"\nElement "<<i+1<<","<<j+1<<" : ";
            cin>>a[i][j];
        }
    }
}

void Transpose()
{
    int n1 , n2;
    cout<<"Please Enter the No of Rows ";
    cin>>n1;
    cout<<"Please Enter the No of columns ";
    cin>>n2;
    int a[50][50];

    for(int i = 0; i < n1 ; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout<<"\nElement "<<i+1<<","<<j+1<<" : ";
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < n1; i++)
    {
        for (int j = i+1; j < n2; j++)
        {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }

    for(int i = 0; i < n1 ; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout<<"\nElement "<<i+1<<","<<j+1<<" : ";
            cout<<a[i][j];
        }
    }
}

int main()
{
    Reverse();
    MultiplyMat();
    Transpose();
}