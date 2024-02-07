/*

You are given two big numbers ‘A’ and ‘B’ as strings. Your task is to find the product of both the numbers.

Note:

There are no leading zeros in both the strings, except the number 0 itself.
Do not use any built-in Big Integer Library.
For Example:
If, A = 123, and B = 456.
So the product of both numbers will be 56088.

*/

// **************************** CODE ***************************

/*

#include<bits/stdc++.h>
string multiplyStrings(string num1 , string num2 )
{
      //  int product =0;
      //  stringstream s1(a);
      //  stringstream s2(b);

      //  int num1=0, num2=0;
      //  s1 >> num1;
      //  s2 >> num2;

      //  product = num1*num2;
      //  return to_string(product);

    
     int m = num1.size();
     int n = num2.size();
        
        string result(m + n, '0');
        
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int sum = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0');
                result[i + j + 1] = sum % 10 + '0';
                result[i + j] += sum / 10;
            }
        }
        
        for (int i = 0; i < m + n; i++) {
            if (result[i] != '0') {
                return result.substr(i);
            }
        }
        return "0";

}

*/

// https://youtu.be/Z6fmPXYBi80?feature=shared
// https://youtu.be/5NdhK3tZViQ?feature=shared