/*
Problem statement
You have been given an integer array/list 'ARR' of size 'N'. Write a solution to check if it 
could become non-decreasing by modifying at most 1 element.

We define an array as non-decreasing, if ARR[i] <= ARR[i + 1] holds for every i (0-based) 
such that (0 <= i <= N - 2).

Example 1:

Input: nums = [4,2,3]
Output: true
Explanation: You could modify the first 4 to 1 to get a non-decreasing array

Input: nums = [10,10,0,10,3]
Output: false
Explanation: You cannot modify it in one change

***************** Code *********************

class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    {
        bool changed=false;

    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]<=nums[i+1])
        {
            continue;
        }
        else if(changed==true)
        {
            return false;
        }

        // Now we want to decrease the left element
        // matlab (i+1)>(i-1)

        if(i==0 or (nums[i+1]>=nums[i-1])) // agar element 0 index pe hai to uske pehle k index ka 
        // check hi karne ka  kyuki koi value hi nhi hogi vaha pe
        {
            nums[i]=nums[i+1];
        }

        else // i+1<i-1
        {
            nums[i+1]=nums[i];
        }
        changed=true;
    }

    return true;   
    }
};


Youtube link for explanation :
https://youtu.be/RegQckCegDk?feature=shared


*/