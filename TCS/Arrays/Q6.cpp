// https://youtu.be/F6Xhe-okc0c?feature=shared

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s1,s2;
    cout<<"n : ";
    bool flag=false;
    cin>>n;
    cin>>s1>>s2;
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<"No"<<endl;
            flag=true;
            break;
        }
    }
    
    if(!flag)
    {
        cout<<"Yes";
    }
    
    
    return 0;
}