/*

You are given an array ‘ARR’ of size ‘N,’ and you have to tell the minimum number of elements that need to be removed such that the array contains all distinct elements. More formally, there should not be any ‘I’ and ‘J’ such that ‘I’ != ‘J’ and ‘ARR’[‘I’] = ‘ARR’[‘J’].

For example:
Given ‘N’ = 4, 
'ARR' = { 1, 2, 1, 2} 
Then the answer is 2 because 1 and 2 are repeated once therefore we need to remove 2 elements.

*/

// *********************************** CODE ********************************

/*

#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// First Approach
	    // int count =0 ;
    	// sort(arr.begin(),arr.end());

    	// for(int i=0 ; i<arr.size();i++)
		// {
    	//  	if(arr[i]==arr[i+1])
		//  	{
    	//  	    count++;
    	//  	}
    	// }

    	// return count ;

		// Second Approach

		unordered_map<int,int>mp;
		int cnt=0;
		
		for(int i=0;i<arr.size();i++)
		{
			mp[arr[i]]++;
		}

		for(auto it:mp)
    	{
    	    if(it.second>1)
    	    {
    	        while(it.second>1)
    	        {
    	            cnt++;
    	            it.second--;
    	        }
    	    }
    	}

   		return cnt;
}

*/