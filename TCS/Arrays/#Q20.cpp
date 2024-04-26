#include<bits/stdc++.h>
using namespace std;

/*

check if string s2 is a substring of string s1

*/

int main()
{
   string s1="developer";
   string s2="lope";
   
   bool flag=false;
     
   int start=0;
   int end=s2.size()-1;
    
   if(s2.size()>s1.size())
   {
       flag=false;
   }
   
   while(end<s1.size())
   {
       string temp="";
       
       for(int i=start;i<=end;i++)
       {
           temp+=s1[i];
       }
       
       if(temp==s2)
       {
           flag=true;
           break;
       }
       
       start++;
       end++;
   }
   
    if(flag) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}