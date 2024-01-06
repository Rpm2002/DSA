/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the 
missing element.

Example 1:
Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9

*/

// ******************************** CODE ********************************************

// class Solution{
//   public:
//     int missingNumber(vector<int>& array, int n) 
// {
        //  Time complexity - O(N*LogN) beacuse of sorting
        /*
        
        sort(array.begin(),array.end());
        
        for(int i=0;i<n-1;i++)
        {
            if(array[i+1]-array[i]!=1)
            {
                return i+2;
            }
        }
       
    //    Next APPROACH
    // sum of N elements from 1 to N ki formula pata hai , to total sum mese minus kardo jo bachega wo missing tha

        sort(array.begin(),array.end());
         long int sum=(n*(n+1))/2;
         
         for(int i=0;i<n-1;i++)
         {
             sum=sum-array[i];
         }
         
         return sum;
        
        */
        
        // Better approach by using XOR Operation, Time Compelexity - O(N)
        // XOR khudka khudse karne se 0 aata hai uss tarah sochna

    /*    int XOR_sum=0;
        
        for(int i=1;i<=n;i++)
        {
            XOR_sum^=i;
        }
        
        for(int i=0;i<n-1;i++)
        {
            XOR_sum^=array[i];
        }
        
        return XOR_sum;
    }
  
};

*/