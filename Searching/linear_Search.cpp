#include<bits/stdc++.h>

using namespace std;

int solve(int arr[], int n)
{
    int key;
    cin>>key;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
           return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pos = solve(arr, n);
    cout<<pos<<endl;
    return 0;
}