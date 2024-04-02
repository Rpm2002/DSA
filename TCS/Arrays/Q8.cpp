// https://youtu.be/SJWmanOOUEk?feature=shared

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A,B,C="";
    cin>>A>>B;
    
    map<char,bool>mp;
    
    for(int i=0;i<B.size();i++)
    {
        mp[B[i]]=true;
    }
    
    for(int i=0;i<A.size();i++)
    {
        if(!mp.count(A[i]))
        {
            C+=A[i];
        }
    }
    
    cout<<C;
    
    
    
    
    
    return 0;
}