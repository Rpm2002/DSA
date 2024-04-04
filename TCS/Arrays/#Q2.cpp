// https://youtu.be/soxsw31v2aw?feature=shared

#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cout<<"str : ";
  cin>>str;

  int key;
  cout<<"key :";
  cin>>key;

  for(int i=0;i<str.length();i++)
  {
    if(str[i]>=97 and str[i]<=122)
    {
      int index=str[i]-'a';
      index=(index+key)%26;
      str[i]=index+'a';
    }

    else if(str[i]>=65 and str[i]<=90)
    {
      int index=str[i]-'A';
      index=(index+key)%26;
      str[i]=index+'A';
    }

    else
    {
      int index=str[i]-'0';
      index=(index+key)%10;
      str[i]=index+'0';
    }
  }

  cout<<str;

  return 0;
}