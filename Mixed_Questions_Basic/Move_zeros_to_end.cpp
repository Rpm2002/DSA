/*

Given an unsorted array of integers, you have to move the array elements in a way such that all the zeroes are transferred to the end, and all the non-zero elements are moved to the front. The non-zero elements must be ordered in their order of appearance.

For example, if the input array is: [0, 1, -2, 3, 4, 0, 5, -27, 9, 0], then the output array must be:

[1, -2, 3, 4, 5, -27, 9, 0, 0, 0].

Expected Complexity: Try doing it in O(n) time complexity and O(1) space complexity. Here, ‘n’ is the size of the array.

Sample Input 1:
2
7
2 0 4 1 3 0 28
5
0 0 0 0 1
Sample Output 1:
2 4 1 3 28 0 0
1 0 0 0 0

*/

// ************************************** CODE ******************************************

/*

void pushZerosAtEnd(vector<int> &arr) 
{
	vector<int>v1;
	vector<int>v2;

	int n=arr.size();

	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			v1.push_back(arr[i]);
		}

		else v2.push_back(arr[i]);
	}

	int n1=v1.size();
	int n2=v2.size();

	arr.clear();

	for(int i:v1)
    {
        arr.push_back(i);
    }

    for(int i:v2)
    {
        arr.push_back(0);
    }

	v1.clear();
	v2.clear();

	// int i=0;

    // for(int j=0; j<arr.size(); j++)
	// {

    //     if(arr[j]!=0)
	// 	{

    //         swap(arr[i],arr[j]);

    //         i++;

    //     }

    // }
}

*/