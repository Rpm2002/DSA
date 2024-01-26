/*

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted. 

*/

// *************************************** CODE *************************************

/*

void selectionSort(vector<int>& arr, int n)
{   

    for(int i=0;i<n-1;i++)
    {
       int miniInd=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[miniInd])
            {
                miniInd=j;
            }
        }
        swap(arr[i],arr[miniInd]);
    }
    
}

// Article : https://www.geeksforgeeks.org/selection-sort/

*/