// https://youtu.be/JTFNPVhc2q4?feature=shared

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout<<"n : ";
    cin>>n;
    
    cout<<"k : ";
    cin>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int i=0,j=0,cnt=0,sum=0,max_cnt=0;
    
    while(j<n)
    {
        if(arr[j]>=k)
        {
            j++;
            i=j;
            cnt=0;
        }
        
        else if(sum+arr[j]>=k)
        {
            sum-=arr[i];
            i++;
            cnt--;
        }
        
        else
        {
            sum+=arr[i];
            j++;
            cnt++;  
        }
        
        max_cnt=max(max_cnt,cnt);
    }
    
    cout<<max_cnt;
    
    
    return 0;
}