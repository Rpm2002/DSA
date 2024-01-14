/*

You have been given a text message. You have to return the Run-length Encoding of the given message.
Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated 
successive characters as the character and a single count. For example, the string "aaaabbbccdaa" 
would be encoded as "a4b3c2d1a2".

*/

// ********************************** CODE **************************************

/*

#include <bits/stdc++.h> 
string encode(string &message)
{
    string ans="";
    int count=1;
    int n=message.length();

    for(int i=0;i<n;i++)
    {
        if(message[i]!=message[i+1])
        {
            ans+=message[i]+to_string(count);
            count=1;
            continue;
        }

        count++;
    }

    return ans;
}

*/

/*

The intuition behind solving the run-length encoding problem using the provided code is to iterate through the characters of the given string and count consecutive occurrences of each character. When a different character is encountered, append the current character and its count to the result string, and reset the count to 1. This process continues until the entire string is processed.

*/