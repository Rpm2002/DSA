/*
Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e 
first element should be max value, second should be min value, third should be second max, fourth should be 
second min and so on.
Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.

n = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1,second max = 5, second min = 2, and so on... Modified array is : 6 1 5 2 4 3.

*/

// ***************************** Code *********************************

// Important concept of storing 2 elements at same place or position
//  Divident=Quotient * DIVISOR + Remainder
//  Divident/DIVISOR = Quotient => Quotient se new values mil jayegi
//  Divident%DIVISOR = Remainder => Aur Remainer se old values 
//  Divisor ham array ka max element + 1 lenge

/*

class Solution{
    public:

    void rearrange(long long *arr, int n) 
    { 
        int max_ind=n-1;
        int min_ind=0;
        int maxi=arr[n-1]+1;
        
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                arr[i]= (arr[max_ind]%maxi)*maxi+arr[i];
                max_ind--;
            }
            
            else
            {
                arr[i]= (arr[min_ind]%maxi)*maxi+arr[i];
                min_ind++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i]/=maxi;
        }
         
    }
};

*/

// Youtube : https://youtu.be/oK0FKG5kigo?feature=shared
