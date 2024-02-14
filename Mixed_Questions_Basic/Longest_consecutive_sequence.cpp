/*

You are given an unsorted array/list 'ARR' of 'N' integers. Your task is to return the length of the longest consecutive sequence.
The consecutive sequence is in the form ['NUM', 'NUM' + 1, 'NUM' + 2, ..., 'NUM' + L] where 'NUM' is the starting integer of the sequence and 'L' + 1 is the length of the sequence.

Note:

If there are any duplicates in the given array we will count only one of them in the consecutive sequence.
For example-
For the given 'ARR' [9,5,4,9,10,10,6].

Output = 3
The longest consecutive sequence is [4,5,6].

*/

// ***************************************** CODE **************************************

/*

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) 
{
    int count=0,lastsmaller=INT_MIN;
    int longest=1;
    sort(arr.begin(),arr.end());

    if(arr.size()==1) return 1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]-1==lastsmaller)
        {
            count++;
            lastsmaller=arr[i];
        }

        else if(lastsmaller!=arr[i])
        {
            count=1;
            lastsmaller=arr[i];
        }

        longest=max(count,longest);
    }

    return longest;
}

// https://youtu.be/oO5uLE7EUlM?feature=shared

*/