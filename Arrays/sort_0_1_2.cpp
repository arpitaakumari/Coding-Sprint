#include<bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int a=0, b=0, c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            a++;
        else if(arr[i]==1)
            b++;
        else
            c++;
    }
    int i=0;
    while(a--)
        arr[i++] = 0;
    while(b--)
        arr[i++] = 1;
    while(c--)
        arr[i++] = 2;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    solve(arr, n);
    return 0;
}