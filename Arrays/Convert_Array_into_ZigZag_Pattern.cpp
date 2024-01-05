/*
Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a 
zig-zag fashion so that the converted array should be in the below form: 
arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

NOTE: If your transformation is correct, the output will be 1 else the output will be 0. 

Example 1:

Input:
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1

*/

//  ********************* Code ***************************

/*

// User function template for C++
class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n)
    {
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0 && arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
            
            else if(i%2==1 && arr[i]<arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        
        // Yaha pe ham dekh paa rhe hai ki EVEN index pe jo value hai wo left aur right values se choti hai
           aur ODD index pe jo value hai wo left aur right value se badi hai
    }
};

*/