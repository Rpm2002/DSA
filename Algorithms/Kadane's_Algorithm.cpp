/*

You are given an array 'arr' of length 'n', consisting of integers.
A subarray is a contiguous segment of an array. In other words, a subarray can be formed by removing 0 or more integers from the beginning and 0 or more integers from the end of an array.

Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.
The sum of an empty subarray is 0.

Example :
Input: 'arr' = [1, 2, 7, -4, 3, 2, -10, 9, 1]
Output: 11
Explanation: The subarray yielding the maximum sum is [1, 2, 7, -4, 3, 2].

*/

// *********************************** CODE ********************************

/*

long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxi_so_far=INT_MIN;
    long long sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        if(sum>maxi_so_far)
        {
            maxi_so_far=sum;
        }

        if(sum<0)
        {
            sum=0;
        }
    }

    if(maxi_so_far>0) return maxi_so_far;

    return 0;
}

// https://youtu.be/AHZpyENo7k4?feature=shared

*/