/*

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

*/

// *********************************** CODE ********************************

/*

class Solution {
public:

    bool isValid(char ch)
    {
        if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z') or (ch>='0' and ch<='9'))
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    char toLowercase(char ch)
    {
        if((ch>='a' and ch<='z') or (ch>='0' and ch<='9'))
        {
            return ch;
        }

        else
        {
            return (ch-'A'+'a');
        }
    }

    bool isPalindrome(string s) 
    {
        int start=0;
        int end=s.length()-1;

        while(start<=end)
        {
            if(!isValid(s[start]))
            {
                start++;
            }
            
            else if(!isValid(s[end]))
            {
                end--;
            }

            else
            {
                if(toLowercase(s[start])!=toLowercase(s[end]))
                {
                    return false;
                }

                else
                {
                    start++;
                    end--;
                }
            }
        }

        return true;
    }
};

// Youtube : https://youtu.be/Wdjr6uoZ0e0?feature=shared  54:45
// Youtube : https://youtu.be/jJXJ16kPFWg?feature=shared

*/