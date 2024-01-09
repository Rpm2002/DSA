/*

Given a string "pattern", which contains only two types of characters ‘(’, ‘)’.
Your task is to find the minimum number of parentheses either ‘(’, ‘)’ we must add the parentheses in string 
‘pattern’ and the resulted string is valid.
Condition for valid string-
Every opening parenthesis ‘(’ must have a correct closing parenthesis ‘)’.

Example - ‘(()(()))’, ‘()()()’, ‘((()))’ are valid string, and ‘(((’, ‘(()’, ‘)(())’ are invalid string.

*/

// ************************************ CODE ******************************************

/*

#include <bits/stdc++.h> 
int minimumParentheses(string pattern) 
{
    int n=pattern.length();
    int count=0;
    int required=0;

    for(int i=0;i<n;i++)
    {
        if(pattern[i]=='(')
        {
            count++;
        }

        else if(pattern[i]==')' and count>0)
        {
            count--;
        }

        else
        {
            required++;
        }
    }  

    return count+required;
}



=> If the current character is an opening parenthesis '(', the count is incremented 
to keep track of the open parentheses encountered.

=> If the current character is a closing parenthesis ')' and there is at least one 
open parenthesis (indicated by count > 0), then count is decremented to match 
the closing parenthesis with an open one.

=> If the current character is neither '(' nor ')', it means an additional closing 
parenthesis is required to make the string valid. Therefore, required 
is incremented.

*/
