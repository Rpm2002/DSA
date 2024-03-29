/*

Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. 

Example 1:

Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.

Example 2:

Input:
n = 4
arr[] = {1, 2, 3, 4}
Output: -1
Explanation: 
All elements appear only once so 
answer is -1.

*/

// ********************************************* CODE ******************************************

/*

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) 
    {
        
        // Brute force 
        // The idea is to run a nested loops, the outer loop picks an element one by one, and the inner loop 
        // checks whether the element is repeated or not by iterating over the array
        
        int firstRepeated(int arr[], int n) {
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    return i+1;
                }
            }
        }
        return -1;
    }
        
        // optimised solution
        
       map<int,int>mp;
       
      for(int i=0;i<n;i++)
      {
          mp[arr[i]]++;
      }
       
      for(int i=0;i<n;i++)
      {
          if(mp[arr[i]]>1)
          {
              return i+1;
          }
      }
    
       
       return -1;
    }
};

*/