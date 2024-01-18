/*

Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.

Example 1:
Input:
a = amazon
b = azonam
Output: 
1
Explanation: amazon can be rotated anti-clockwise by two places, which will make it as azonam.

Example 2:
Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 
0
Explanation: If we rotate geeksforgeeks by two place in any direction, we won't get geeksgeeksfor.

*/

// ************************************** CODE ***********************************

/*

class Solution
{
    public:
    bool isRotated(string str1, string str2)
    {
        // Brute force
        // First we will generate the CW and ACW strings by 2 positiion rotations and 
        // then compare it with str1 string
        
        string s1="";
        string s2="";
        int n=str2.length();
        
        if(str1.length()!=str2.length())
        {
            return false;
        }
        
        if(str1.length()<=2 or str2.length()<=2)
        {
            return false;
        }
        
        
        s1+=str2.substr(2)+str2.substr(0,2); // lefshift
        s2+=str2.substr(n-2)+str2.substr(0,n-2); // rightshift
        
        
        if(s1==str1 or s2==str1)
        {
            return true;
        }
        
        return false;
        
    }
    
    // Article help : https://www.geeksforgeeks.org/substring-in-cpp/
    //  Help : https://www.tutorialspoint.com/check-if-left-and-right-shift-of-any-string-results-into-given-string

};

*/