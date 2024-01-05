/*
Given an array of integers nums and an integer target, return indices of the two numbers such that 
they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/
// ****************************  Code ************************************

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
    // {
        /*
     Brute Force - O(n*n)

        int n=nums.size();
        vector<int>v;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    // break;
                }
            }
        }

        return v;
    }

    */

    //  Better approach by using hash map *******************************

    // map<int,int>m;
    // int n=nums.size();
    // for(int i=0;i<n;i++)
    // {
    //     int remaining=target-nums[i];

    //     if(m.find(remaining)!=m.end())
    //     {
    //         return {m[remaining],i};
    //     }
    //     m[nums[i]]=i;
    // }

    // return {-1,-1};
//  **************************************************
    // Slightly better 2 pointer approach

    // int n=nums.size();
    // int left=0;
    // int right=n-1;
    // vector<int>v;
    // while(left<right)
    // {
    //     if(nums[left]+nums[right]==target)
    //     {
    //         v.push_back(left);
    //         v.push_back(right);
    //         return v;
    //     }

    //     else if(nums[left]+nums[right]<target)
    //     {
    //         left++;
    //     }

    //     else
    //     {
    //         right--;
    //     }
    // }

    // }  
// };

// Youtube : https://youtu.be/UXDSeD9mN-k?feature=shared  