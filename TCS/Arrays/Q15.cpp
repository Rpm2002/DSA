#include<bits/stdc++.h>
using namespace std;

// https://www.youtube.com/live/y1vfUrUDImc?feature=shared

int main()
{
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
   string ans="";
   
   set<char>st1;
   set<char>st2;
   
//   for(int i=0;i<s1.size();i++)
//   {
//       st1.insert(s1[i]);
//   }
   
//   for(int i=0;i<s2.size();i++)
//   {
//       st2.insert(s2[i]);
//   }

    for(auto i:s1)
    {
        st1.insert(i);
    }
    
    for(auto i:s2)
    {
        st2.insert(i);
    }
   
   
   for(auto it:st1)
   {
       if(st2.find(it)!=st2.end())
       {
           ans+=it;
       }
   }
   
   cout<<ans;
   
   return 0;
}
