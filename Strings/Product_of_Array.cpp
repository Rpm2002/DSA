/*

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the 
elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

*/

// ************************************ CODE ******************************************

/*

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(n);
        int prefix=1,postfix=1;

        // Prefix calculation and storing it in ans array
        for(int i=0;i<n;i++)
        {
            ans[i]=prefix;
            prefix*=nums[i];
        }

        // ans array me jo prefix hai uske saath hi direct multiply kar do

        for(int i=n-1;i>=0;i--)
        {
            ans[i]=postfix*ans[i];
            postfix*=nums[i];
        }

        return ans;

    }

    //  Youtube : https://youtu.be/bNvIQI2wAjk?feature=shared
};

*/