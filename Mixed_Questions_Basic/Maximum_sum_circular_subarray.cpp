/*

You have been given a circular array/list ‘ARR’ containing ‘N’ integers. You have to find out the maximum possible sum of a non-empty subarray of ‘ARR’.
A circular array is an array/list in which the end of the array connects to the beginning of the array.
A subarray may only include each element of the fixed buffer of ‘ARR’ at most once. (Formally, for a subarray ‘ARR[i]’, ‘ARR[i+1]’, ..., ‘ARR[j]’, there does not exist ‘i’ <= ‘k1’, ‘k2’ <= ‘j’ with ‘k1’ % ‘N’ = k2 % ‘N’.)
For Example:

The ‘ARR’ = [1, 2, -3, -4, 5], the subarray [5, 1, 2] has the maximum possible sum which is 8. This is possible as 5 is connected to 1 because ‘ARR’ is a circular array.

Sample Input 2:
2
4
3 1 -2 9
1
10 
Sample Output 2:
13
10

*/

// *************************************** CODE ******************************************

/*

int maxSubarraySum(vector<int> &arr, int n) 
{
	int max_so_far=0,global_max=arr[0],min_so_far=0,global_min=arr[0],total=0;

	for(int i=0;i<n;i++)
    {
		max_so_far=max(max_so_far+arr[i],arr[i]);
		min_so_far=min(min_so_far+arr[i],arr[i]);
		total+=arr[i];

		global_max=max(global_max,max_so_far);
		global_min=min(global_min,min_so_far);
        
    }

	if(global_max>0) return max(global_max,total-global_min);

	return global_max;

}

// Youtube : https://youtu.be/fxT9KjakYPM?feature=shared

*/