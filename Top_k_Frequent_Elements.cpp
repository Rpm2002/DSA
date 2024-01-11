/*

Given an integer array nums and an integer k, return the k most frequent elements. You may return 
the answer in any order.

Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:
Input: nums = [1], k = 1
Output: [1]

*/

// ************************************ CODE *************************************

/*

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<vector<int>>bucket(n+1);

        map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++) 
        {
            bucket[it->second].push_back(it->first);
        }

        vector<int>result;

        for (int i = n; i >= 0; i--) 
        {
            if (result.size() >= k) 
            {
                break;
            }
            if (!bucket[i].empty()) 
            {
                result.insert(result.end(), bucket[i].begin(), bucket[i].end());
            }
        }

         
        // vector_name.insert(position, iterator1, iterator2)
        // The function accepts three parameters specified below:
 
        // position – It specifies the position at which insertion is to be done in the vector.
        // iterator1 – It specifies the starting position from which the elements are to be inserted
        // iterator2 – It specifies the ending position till which elements are to be inserted

        
        
        return result;

        // Youtube : https://youtu.be/YPTqKIgVk-k?feature=shared

    }
};

*/