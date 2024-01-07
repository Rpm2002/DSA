/*
Given two arrays of integers A[] and B[] of size N and M, the task is to check if a pair of values 
(one value from each array) exists such that swapping the elements of the pair will make the sum of 
two arrays equal.

Example 1:

Input: N = 6, M = 4
A[] = {4, 1, 2, 1, 1, 2}
B[] = (3, 6, 3, 3)
Output: 1
Explanation: Sum of elements in A[] = 11
Sum of elements in B[] = 15, To get same sum from both arrays, we can swap following values:
1 from A[] and 3 from B[]

*/

// ************************** CODE ************************************

/*

class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
	    int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=A[i];
        }
        
        for(int i=0;i<m;i++)
        {
            sum2+=B[i];
        }
        
        sort(A,A+n);
        sort(B,B+m);
        
        int i=0,j=0;
        
        while(i<n and j<m)
        {
               long int v1=sum1-A[i]+B[j];
               long int v2=sum2-B[j]+A[i];
                
                if(v1==v2)
                {
                    return 1;
                }
                
                else if(v1>v2)
                {
                    i++;
                }
                
                else // v1<v2
                {
                    j++;
                }
        }
            
        return -1;
       
        
	}
 
};

Youtube : https://youtu.be/u2KXZDphl9I?feature=shared

*/

