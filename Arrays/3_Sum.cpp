/*

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

*/

// ************************** CODE **********************************

/*

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        // Brute Force Approach 
        // Time Complexity : O(N^3)
        // Space Complexity : 2* O(Number of triplets)

    
        int n=nums.size();
        set<vector<int>>triplet; // because set stores unique elements

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;j<n;j++)
                {
                    if((nums[i] + nums[j] + nums[k] == 0))
                    {
                       vector<int>temp={nums[i],nums[j],nums[k]};
                       sort(temp.begin(),temp.end()); 
                       triplet.insert(temp);
                    }
                }
            }
        }

        vector<vector<int>>ans(triplet.begin(),triplet.end());

        return ans;

    // *****************************************************************************************

    // Better Approach using 2 loops only
    // Time Complexity : O(N^2)
    // Space Complexity : O(N) + 2* O(Number of triplets)


        int n=nums.size();
        set<vector<int>>triplet;

        for(int i=0;i<n;i++)
        {
            set<int>hashset;
            for(int j=i+1;j<n;j++)
            {
                int third= -(nums[i]+nums[j]);
                if(hashset.find(third)!=hashset.end())
                {
                    vector<int>temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    triplet.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>>ans(triplet.begin(),triplet.end());

        return ans;
 
     // *****************************************************************************************

    //   Most optimal approach by using 2 pointers
    // Time Complexity : O(N*log(N)) + O(N*N)
    // Space Complexity : O(Number of triplets)

   
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;

    for(int i=0;i<n;i++)
    {
        if(i>0 and nums[i]==nums[i-1]) continue;

        int j=i+1;
        int k=n-1;

        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];

            if(sum>0)
            {
                k--;
            }

            else if(sum<0)
            {
                j++;
            }

            else // we found the triplet
            {
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j<k and nums[j]==nums[j-1]) j++;
                while(j<k and nums[k]==nums[k+1]) k--;

            }
        }
    }

    return ans;

    }
};

//  Youtube : https://youtu.be/DhFh8Kw7ymk?feature=shared

*/