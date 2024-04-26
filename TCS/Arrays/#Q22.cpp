// First and last occurence of character

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1="organization";
    char ch='o';
    vector<int>ans;
    
   for(int i=0;i<s1.size();i++)
   {
       if(s1[i]==ch)
       {
           ans.push_back(i);
       }
   }
   
   cout<<ans[0]<<" "<<ans[ans.size()-1];
    
    
    
    return 0;
}
