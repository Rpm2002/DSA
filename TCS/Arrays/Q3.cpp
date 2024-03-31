// https://youtu.be/Ct2FAzRSWBo?feature=shared
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"n : ";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // First Approach using 2 pointers
    // int p=0,q=0;
    
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==0)
    //     {
    //         p++;
    //     }
    //     else
    //     {
    //         swap(arr[p++],arr[q++]);
    //     }
    // }
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // Second by using extra vector array
    vector<int>ans;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            ans.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            ans.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    
    return 0;
}