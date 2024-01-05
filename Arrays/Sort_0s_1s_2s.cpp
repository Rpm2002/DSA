/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

N = 5
arr[]= {0 2 1 2 0}
Output: 0 0 1 2 2

*/

//  *********************** Code *****************************

/*

 // Brute force Approach is to directly use sort function

class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int low=0;
    int mid=0;
    int high=n-1;
    
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        
        else if(a[mid]==1)
        {
            mid++;
        }
        
        else if(a[mid]==2)
        {
            swap(a[mid],a[high]);
            high--;     
        }   
    }
    }
    
};

*/