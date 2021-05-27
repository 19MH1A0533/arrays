#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,pos=0;
    cout<<"Enter no. of elements of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element to delete";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            pos=i;
            break;
        }

    }
    if(pos==0)
    {
        cout<<"Element is not found";
    }
    else
    {
        for(int i=pos;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    n--;
    cout<<"After deleting the elements";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}