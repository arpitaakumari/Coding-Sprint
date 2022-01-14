#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> arr)
{
    int low = 0, high = arr.size()-1, mid = 0;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int j;
    for(int i=0; i<n; i++)
    {
        cin>>j;
        arr.push_back(j);
    }
    solve(arr);
    return 0;
}