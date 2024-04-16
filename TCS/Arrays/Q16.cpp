#include<bits/stdc++.h>
#include<string>
using namespace std;
// https://www.youtube.com/live/00xE50OMYiQ?feature=shared

int main()
{
   string s1;
   getline(cin,s1);
   int n=s1.size(),sum=0;
   
   for(int i=n-1;i>=0;i--)
   {
       sum+=(s1[i]-'0');
   }
   
   if(sum%3==0)
   {
       cout<<"Yes";
   }
   
   else cout<<"No";
   return 0;
}
