/*

Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

Example 1:

Input:
N = 5
A[] = {5,5,4,6,4}
Output: 4 4 5 5 6
Explanation: The highest frequency here is
2. Both 5 and 4 have that frequency. Now
since the frequencies are same then 
smallerelement comes first. So 4 4 comes 
firstthen comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.

*/

// ******************************************** CODE *********************************************

/*

static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second==b.second) return a.first<b.first;
        
        return a.second>b.second;
    }
    
    vector<int> sortByFreq(int arr[],int n)
    {
        map<int,int>mp;
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        
        // Declaring vector of pairs
        
        vector<pair<int,int>>temp;
        
        for(int i=0;i<n;i++) temp.push_back({arr[i],mp[arr[i]]});
        
        sort(temp.begin(),temp.end(),cmp);
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(temp[i].first);
        }
        
        return ans;
    }

    // https://youtu.be/AB_8N0GB3Uo?feature=shared
    // https://youtu.be/3pvZhwp0U9w?feature=shared

*/