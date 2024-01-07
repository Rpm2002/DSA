/*
Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, 
compute how much water can be trapped between the blocks during the rainy season. 
Example 1:

Input:
N = 4
arr[] = {7,4,0,9}
Output:
10
Explanation:
Water trapped by above 
block of height 4 is 3 units and above block of height 0 is 7 units. So, the total unit of water trapped 
is 10 units.

*/

// ****************************** CODE ********************************

/*
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
        // long long int leftmax[n];leftmax[0]=arr[0];
        
        // for(int i=1;i<n;i++)
        // {
        //     leftmax[i]=max(leftmax[i-1],arr[i]);;
        // }
        
        
        // long long int rightmax[n];rightmax[n-1]=arr[n-1];
        
        // for(int i=n-2;i>=0;i--)
        // {
        //     rightmax[i]=max(rightmax[i+1],arr[i]);;
        // }
        
        // long long int water=0;
        
        // for(int i=1;i<n-1;i++)
        // {
        //     water+=(min(rightmax[i],leftmax[i])-arr[i]);
        // }
        
        // return water;
        
        int left=0,right=n-1;
        
        int leftmax=arr[0],rightmax=arr[n-1];
        
       long long int trappedwater=0;
        
        while(left<=right)
        {
            // which block is the deciding or limiting block that we will take
            if(leftmax<rightmax)
            {
                 if(arr[left]>leftmax)
                 {
                    leftmax=arr[left];
                 }
                 
                 
                 else  // it will store water
                 {
                     trappedwater+=leftmax-arr[left];
                     left++;
                 }
               
            }
            
            else
            {
                 if(arr[right]>rightmax)
                {
                    rightmax=arr[right];
                }
                
                else
                {
                    trappedwater+=rightmax-arr[right];
                    right--;
                }
            }
        }
        
        return trappedwater;
        
    }
};

*/