/*
Given an array A of positive integers. Your task is to find the leaders in the array. An element of 
array is a leader if it is greater than or equal to all the elements to its right side. 
The rightmost element is always a leader. 

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 as it is greater than all the elementsto its right. Similarly, the next 
leader is 5. The right most element is always a leader so it is also included.

*/

// ************************** Code ********************************

/*
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        //  Brute Force -  Run 2 for loops
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            int j;
            for(j=i+1;j<n;j++)
            {
                if(a[i]>=a[j])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            
            if(j==n)
            {
                ans.push_back(a[i]);
            }
        }
        
        return ans;
        
    }
};

********************************** Optimized approach **********************

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int>v1;
        int maxi=INT_MIN;
        
        for(int i=n-1;i>=0;i--)
        {
            maxi=max(maxi,a[i]);
            if(maxi==a[i])
            {
                v1.push_back(a[i]);
            }
        }
        
        reverse(v1.begin(),v1.end());
        return v1;
    }
};

*/