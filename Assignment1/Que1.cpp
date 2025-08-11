#include<iostream>
using namespace std;

void Create(int a[], int &n)
{
    cout<<"Please Enter the Number of elemnts you want in the new array ";
    cin>>n;
    for(int i = 0; i < n ; i++)
    {
        cout<<"\nElement "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"Array Created Successfully \n";
}

void Display(int a[], int &n)
{
    cout<<"THe Currently stored Array is:\n";
    for(int i = 0; i < n;i++)
        cout<<a[i]<<"\n";
    cout<<"End of Array \n";
}

void Insert(int a[], int &n)
{
    int i, pos;
    cout<<"Enter the position you want to add element in the array at ";
    cin>>pos;
    pos--;
    for (i = n; i > pos ; i--)
        a[i+1]=a[i];
    cout<<"Enter the No you want to add to index : "<<i<<" or Positon : "<<i+1 <<"\n";
    cin>>a[i];
    n++;
    cout<<"Inserted Successfully \n";
}

void Delete(int a[] , int &n)
{
    int pos;
    cout<<"Enter the element you want to from the array ";
    cin>>pos;
    for(int i = pos; i < n; i++)
        a[i]=a[i+1];
    n--;
    cout<<"Deletion Successful \n";
}

void LinSearch(int a[], int &n)
{
    int req , i;
    cout<<"Please enter the no you want to find ";
    cin>>req;
    for(i = 0; i < n && a[i]!=req; i++)
        continue;
    if(i == n)
    {
        cout<<"Number not found";
        return;
    }
    cout<<"Number found at Position "<<a[i]<<"\n";
}

void Exit(int &option)
{
    option = 0;
}

int main()
{
    int option = 1 , n;
    int arr[50];
    while(option != 0)
    {
        cout<<"Enter the option number you want to use"<<"\n"<<"1. Create"<<"\n"<<"2. Display"<<"\n"<<"3. Insert"<<"\n"<<"4. Delete"<<"\n"<<"5. Linear Search"<<"\n"<<"0. Exit"<<"\n"<<"Chosing Create Option Will Delete the Previous Array Completely\n";
        cin>>option;
        switch (option)
        {
        case 0:
            Exit(option);
            break;
        case 1:
            Create(arr , n);
            break;
        case 2:
            Display(arr , n);
            break;
        case 3:
            Insert(arr , n);
            break;
        case 4:
            Delete(arr , n);
            break;
        case 5:
            LinSearch(arr , n);
            break;
        default:
            cout<<"Invalid input please try again";
            break;
        }
    }
    return 0;
}