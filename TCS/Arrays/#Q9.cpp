// https://youtu.be/SJWmanOOUEk?feature=shared
// https://youtu.be/Kw5xGvM9DeQ?feature=shared

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt=0;
    
    for(int i=0;i<str.length();i++)
    {
        for(int j=1;j<=str.length()-i;j++)
        {
            string subs=str.substr(i,j);
            
            int len=subs.length();
            int sum=0;
            
            for(int k=0;k<subs.length();k++)
            {
                sum+=subs[k]-'0';
            }
            
            if(sum!=len) cnt++;
        }
    }
    
    cout<<cnt;
    
    
    
    
    return 0;
}