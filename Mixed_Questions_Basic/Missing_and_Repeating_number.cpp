/*

You are given an array of size ‘N’. The elements of the array are in the range from 1 to ‘N’.

Ideally, the array should contain elements from 1 to ‘N’. But due to some miscalculations, there is a number R in the range [1, N] which appears in the array twice and another number M in the range [1, N] which is missing from the array.

Your task is to find the missing number (M) and the repeating number (R).

For example:
Consider an array of size six. The elements of the array are { 6, 4, 3, 5, 5, 1 }. 
The array should contain elements from one to six. Here, 2 is not present and 5 is occurring twice. Thus, 2 is the missing number (M) and 5 is the repeating number (R). 

*/

// ********************************** CODE ***********************************

/*

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	sort(arr.begin(),arr.end());
	int duplicateNum;
	map<int,int>mp;

	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}

	for(auto &it:mp)
	{
		if(it.second==2)
		{
			duplicateNum=it.first; // duplicate number
			break;
		}
	}

	int originalSum=n*(n+1)/2;

	// now count sum of given array;

	int givenSum = accumulate(arr.begin(), arr.end(), 0);

	// missing number

	int missingNum=originalSum-(givenSum-duplicateNum);

	return make_pair(missingNum,duplicateNum);
	
}


*/