/*

Problem statement
You are given an array/list 'ARR' of integers of length ‘N’. You are supposed to find all the elements that occur strictly more than floor(N/3) times in the given array/list.

Sample Input 1 :
3 2 2 1 5 2 3

Sample Output 1:
2

*/

// ******************************************* CODE ************************************

/*

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int floor_size=floor(arr.size()/3);
    vector<int>ans;
    // map<int,int>mp;

    // for(int i=0;i<arr.size();i++)
    // {
    //     mp[arr[i]]++;
    // }

    // for(auto &it:mp)
    // {
    //     if(it.second>floor_size)
    //     {
    //         ans.push_back(it.first);
    //     }
    // }

    // return ans;

    // Improvised approacch of Moore's voting algorithm

    int element1=INT_MIN,element2=INT_MIN,count1=0,count2=0;
    int n=arr.size();

	for(int i=0;i<n;i++)
	{
		if(count1==0 and element2!=arr[i])
		{
			element1=arr[i];
			count1=1;
		}

		else if(count2==0 and element1!=arr[i])
		{
			element2=arr[i];
			count2=1;
		}

        else if(arr[i]==element1) count1++;
        else if(arr[i]==element2) count2++;

		else
		{
			count1--;
            count2--;
		}
	}

	count1=0,count2=0;

    for(int i=0;i<n;i++)
    {
        if(element1==arr[i]) count1++;
        if(element2==arr[i]) count2++;
    }

    if(count1>floor_size) ans.push_back(element1);
    if(count2>floor_size) ans.push_back(element2);

    return ans;

}

// https://youtu.be/vwZj1K0e9U8?feature=shared

*/