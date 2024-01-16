/*

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Input:
N = 5
a[] = {3,1,2,4,5}
Output: 12
Explanation: 5 and 3 are distance 4 apart.
So the size of the base = 4. Height of container = min(5, 3) = 3. So total area = 4 * 3 = 12. 

*/

// ********************************** CODE ************************************

/*

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        // Brute Force
        // Time complexity : O(N*N)
        // Space Complexity : O(N)

        
        Elements in a set are stored in sorted order. So the minimum element of the set will reside in    the first element and the maximum element in the last element. Therefore, this first and last element can be fetched with the help of set.rend() and set.rbegin() methods respectively. 
        
        
        int n=height.size();
        set<int>st;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int ans=(j-i)*min(height[i],height[j]);
                st.insert(ans);
            }
        }

        int max_element; 
        if (!st.empty()) 
            max_element = *st.rbegin(); 

        return max_element;                
                                                           
// *******************************************************************************************

        //  Better approach
        // Time Complexity : O(N)

        int n=height.size();
        int local_max=INT_MIN;
        int left=0,right=n-1;

        for(int i=0;i<n;i++)
        {
            while(left<right)
            {
                int ans=(right-left)*min(height[left],height[right]);
                local_max=max(ans,local_max);

                if(height[left]<height[right])
                {
                    left++;
                }

                else if(height[left]>height[right])
                {
                    right--;
                }

                else
                {
                    left++;
                }
            }
            
        }

        return local_max;

    }
};

// Youtube : https://youtu.be/UuiTKBwPgAo?feature=shared

*/