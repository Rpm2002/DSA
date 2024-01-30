/*

You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.

Sample Input 1 :
1 2 2 2 3 4
2 2 3 3

Sample Output 1 :
2 2 3

*/

// ***************************** CODE *******************************

/*

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Brute Force, TC: O(n*m), SC: O(m)

    // int visited[m]={0};
    // vector<int>ans;

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(arr1[i]==arr2[j] and visited[j]==0)
    //         {
    //             ans.push_back(arr1[i]);
    //             visited[j]=1;
    //             break;
    //         }

    //         if(arr2[j]>arr1[i]) break;
    //     }
    // }

    // return ans;

    // Better solution - 2 pointer approach
    // TC: O(n1+n2) SC: O(1)

    // int i=0,j=0;
    // vector<int>ans;


    // while(i<n and j<m)
    // {
    //     if(arr1[i]<arr2[j]) i++;

    //     else if(arr1[i]>arr2[j]) j++;

    //     else
    //     {
    //         ans.push_back(arr1[i]);
    //         i++;
    //         j++;
    //     }
    // }

    // return ans;

    // Third approach using map

    vector<int>ans;
    map<int,int>mp1;

    for(int i=0;i<n;i++)
    {
        mp1[arr1[i]]++; // first array
    }

    for(int i=0;i<m;i++)
    {
        auto it=mp1.find(arr2[i]);

        if(it!=mp1.end() and it->second>0)
        {
            ans.push_back(arr2[i]);
            it->second--;
        }
    }

    return ans;


        
}

// https://youtu.be/wvcQg43_V8U?feature=shared
// https://youtu.be/XZ6ZL1Qg6og?feature=shared

*/