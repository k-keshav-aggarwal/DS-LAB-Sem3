#include<iostream>
using namespace std;

int main()
{
    int a[50],i,j,k,n;

    cout<<"Please Enter the Number of elemnts you want in the new array ";
    cin>>n;
    for(int i = 0; i < n ; i++)
    {
        cout<<"\nElement "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"Array Created Successfully";

    cout<<"THe Currently stored Array is:\n";
    for(int i = 0; i < n;i++)
        cout<<a[i]<<"\n";
    cout<<"End of Array \n";
    
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if(a[i]==a[j])
            {
                for(k = j; k < n-1; k++)
                    a[k] = a[k+1];
                n--;
                j--;
            }      
        }
    }
    
    cout<<"THe Currently stored Array is:\n";
    for(int i = 0; i < n;i++)
        cout<<a[i]<<"\n";
    cout<<"End of Array";
}