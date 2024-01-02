/*
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, 
where 'k' is non-negative.

Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.

Sample Input 1:
8
7 5 2 11 2 43 1 1
2
Sample Output 1:
2 11 2 43 1 1 7 5

*/

// ***************************  Code *****************************

/*

vector<int> rotateArray(vector<int>arr, int k) 
{
    vector<int>ans;
    int n=arr.size();

    for(int i=k;i<n;i++)
    {
        ans.push_back(arr[i]);
    }

    for(int i=0;i<k;i++)
    {
        ans.push_back(arr[i]);
    }

    return ans;

    // Alternate method by using reverse

    /*

    int n = arr.size();

    // Check if the vector is not empty and rotation is needed
    if (n > 0 && k > 0) {
        k %= n;
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());

    }

    return arr;    
    
     

}

*/