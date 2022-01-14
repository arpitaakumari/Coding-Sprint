#include<bits/stdc++.h>

using namespace std;

int solve(int arr[], int low, int high, int n)
{
    int key;
    cin>>key;
    sort(arr, arr+n);
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]<key)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int pos = solve(arr, 0, n, n);
    cout<<pos<<endl;
    return 0;
}