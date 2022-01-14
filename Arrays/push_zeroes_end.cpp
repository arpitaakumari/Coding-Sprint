#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> arr)
{
    int count = 0;
    vector<int> v;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] == 0)
            count++;
        else
            v.push_back(arr[i]);
    }
    while(count--)
        v.push_back(0);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    int n, j;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cin>>j;
        arr.push_back(j);
    }
    solve(arr);
    return 0;
}