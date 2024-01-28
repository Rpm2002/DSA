/*

You have been given an array/list 'ARR' consisting of 'N' integers. Your task is to find the majority element in the array. If there is no majority element present, print -1.
Note:
A majority element is an element that occurs more than floor('N' / 2) times in the array.

Sample Input 1:
2 3 9 2 2
Sample Output 1:
2
Explanation of Sample Output 1:
In test case 1, frequencies of occurrences of different elements are:

2 → 3 times
3 → 1 time
9 → 1 time

As 2 occurs more than floor(5/2) (i.e. floor(2.5) = 2) times, it is the majority element.

*/

// ****************************************** CODE **************************************

/*

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) 
{
	// Brute force is to count each elements occurence - 2 for loops

	// Better solution using map
	// TC : O(N*LogN) + O(N)      SC: O(N)

	// int floor_size=floor(n/2);
	// map<int,int>mp;

	// for(int i=0;i<n;i++)
	// {
	// 	mp[arr[i]]++;
	// }

	// for(auto &it:mp)
	// {
	// 	if(it.second>floor_size)
	// 	{
	// 		return it.first;
	// 	}
	// }

	// return -1;

	// Optimal approach - MOORE'S Voting Algorithm
	// TC:O(N)+O(N)  SC: O(1)

	int element,count=0;

	for(int i=0;i<n;i++)
	{
		if(count==0)
		{
			element=arr[i];
			count=1;
		}

		else if(arr[i]==element)
		{
			count++;
		}

		else
		{
			count--;
		}
	}

	int count1=0;
	int floor_size=floor(n/2);;

	for(int i=0;i<n;i++)
	{
		if(element==arr[i]) count1++;
	}

	if(count1>floor_size) return element;

	return -1;

}

// https://youtu.be/nP_ns3uSh80?feature=shared

*/