/*
Given an integer array nums, return true if any value appears at least twice in the array, and return 
false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false


*/

//  **********************************  Code ***********************************

/*

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        // ****************  Brute Force - Time Complexity O(n*n) ********************

        int n=nums.size();
    //     int j=n-1;
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=i+1;j<n;j++)
    //         {
    //             if(nums[i]==nums[j])
    //             {
    //                 return true;
    //             }
    //         }
    //     }

    //     return false;

    //  ek aur approachhai sort kardo to similar elements paas me aa jayenge fir ho jayega

    // ********************  Optimised Map approach ********************

    unordered_map<int,int>m;

    for(auto i:nums)
    {
        m[i]++;
    }

    for(auto i:m)
    {
        if(i.second>1)
        {
            return true;
        }
    }

    return false;

    }
};

*/