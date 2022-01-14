#include<bits/stdc++.h>

using namespace std;

void solve(int arr[], int n)
{
    int key;
    cin>>key;
    int flag = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"YES "<<i;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout<<"NO";
    cout<<endl;
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
    solve(arr, n);
    return 0;
}