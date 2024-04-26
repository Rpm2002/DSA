#include<bits/stdc++.h>
using namespace std;

// given sorted array having repeated elements, task is to store unique elements

vector<int>removeD(int n,int arr[])
{
    vector<int>ans;
    if(n==0) return ans;
    
    ans.push_back(arr[0]);
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=ans.back())
        {
            ans.push_back(arr[i]);
        }
    }
    
    return ans;
}

int main()
{
    int n=8;
    int arr[n]={1,1,4,4,6,7,7,8};
    
    vector<int>result=removeD(n,arr);
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}