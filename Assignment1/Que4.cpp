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

    int b[5][5], result[5][5];
    cout << "Enter elements for second 5x5 matrix:\n";
    for(int i = 0; i < 5 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Element " << i+1 << "," << j+1 << " : ";
            cin >> b[i][j];
        }
    }
    
    cout << "First 5x5 matrix:\n";
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 0; j < 5; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Second 5x5 matrix:\n";
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 0; j < 5; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            result[i][j] = 0;
            for(int k = 0; k < 5; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "Resultant Matrix after multiplication:\n";
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            cout << result[i][j] << " ";
        cout << endl;
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