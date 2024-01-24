/*

Ninja is now bored with numbers and is now playing with characters but hates when he gets repeated characters. Ninja is provided a string, and he wants to return the first unique character in the string.The string will contain characters only from the English alphabet set, i.e., ('A' - 'Z') and ('a' - 'z'). If there is no non-repeating character, print the first character of the string. If there is no non-repeating character, return the first character of the string.

Sample Input 1 :
2
aDcadhc
AabBcC
Sample Output 1:
 D
 A

*/

// ******************************** CODE *******************************

/*

#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) 
{
  
      unordered_map<char,int>mp;

      for(int i=0;i<str.length();i++)
      {
        mp[str[i]]++;
      }

      for(int i=0;i<str.length();i++)
      {
        if(mp[str[i]]<=1)
        {
          return str[i];
        }
      }

      return str[0];

}


*/