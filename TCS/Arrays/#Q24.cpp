/*

// Write a program to calculate the pairs count in the given array such that the sum of the pairs is divisible by 2.

/"

Input: A[] = (2,2,1, 7, 5, 3), (check 2 s divisible hai ya nii)

Output: 7

pair -> (2,2), (1,7), (1,5), (1,3), (7,5), (7,3),(5,3)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={2,2,1,7,5,3};
    int cnt=0;
    
  
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            int first=arr[i];
            int second=arr[j];
            
            int sum=first+second;
            
            if(sum%2==0)
            {
                cnt++;
            }
        }
    }
    
    cout<<cnt;
    
    
    
    
    return 0;
}
