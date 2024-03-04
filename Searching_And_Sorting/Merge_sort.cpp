/*

Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.
Example 1:

Input:
N = 5
arr[] = {4 1 3 9 7}
Output:
1 3 4 7 9

*/

// **************************************** CODE **************************************

/*

void merge(int arr[], int l, int m, int r)
    {
         int len1=m-l+1;
         int len2=r-m;
         
         int *first=new int[len1];
         int *second=new int[len2];
         
        //  copy values 
        
        int mainArrInd=l;
        
        for(int i=0;i<len1;i++)
        {
            first[i]=arr[mainArrInd++];
        }
        
        mainArrInd=m+1;
        
        for(int i=0;i<len2;i++)
        {
            second[i]=arr[mainArrInd++];
        }
        
        
        // Merge 2 sorted arrays
        
        int ind1=0;
        int ind2=0;
        
        mainArrInd=l;
        
        while(ind1<len1 and ind2<len2)
        {
            if(first[ind1]<second[ind2])
            {
                arr[mainArrInd++]=first[ind1++];
            }
            
            else
            {
                arr[mainArrInd++]=second[ind2++];
            }
        }
        
        while(ind1<len1)
        {
            arr[mainArrInd++]=first[ind1++];
        }
        
        while(ind2<len2)
        {
            arr[mainArrInd++]=second[ind2++];
        }
        
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r) return;
        
        int mid=(l+r)/2;
        
        // Sort the left part
        mergeSort(arr,l,mid);
        
        // Sort the right part
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
    
    // https://youtu.be/cdHEpbBVjRM?feature=shared
    // https://youtu.be/MPvr-LmaZmA?feature=shared

*/