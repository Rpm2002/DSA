/*

Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are 
said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may 
be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Example 1:
Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be rearranged to {0,1,2,4,5}

Example 2:
Input:
N = 3
A[] = {1,2,5}
B[] = {2,4,15}
Output: 0
Explanation: A[] and B[] have only one common value.

*/

// ****************************************** CODE *******************************************

/*

//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) 
    {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        for(int i=0;i<N;i++)
        {
            if(A[i]!=B[i])
            {
                return false;
            }
        }
        
        return true;

        **************************** Another Approach **************************
        
        // map<int,int>mp;
        // vector<int>ans;
        
        // for(int i=0;i<N;i++)
        // {
        //     mp[A[i]]++;
        // }
        
        // for(int i=0;i<N;i++)
        // {
        //     mp[B[i]]++;
        // }
        
        // for(auto i:mp)
        // {
        //     ans.push_back(i.second);
        // }
        
        // for(int i=0;i<(2*N)-1;i++)
        // {
        //     if(ans[i]!=ans[i+1])
        //     {
        //         return false;
        //     }
        // }
        
        // return true;


        **************************** Another Approach **************************

        isme A array k elements ki frequency badhate jao ar B array ki kam karte jao to agar saare elements same
        hai to sabki frequency 0 ho jayegi , agar 0 k alawa kuch frequency hai matlab array same nhi ha dono

        
        map<int,int>mp;

        for(int i=0;i<N;i++)
        {
            mp[A[i]]++;
            mp[B[i]]--;
        }

        for(auto i:mp)
        {
            if(it.second>0)
            {
                return false;
            }
        }

        return true;

    }
};

*/