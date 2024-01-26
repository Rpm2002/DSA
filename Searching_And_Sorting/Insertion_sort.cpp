/*

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

*/

// ************************************* CODE *****************************

/*

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j;

        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>current) 
            {
                // agar current element chota hai to positioin shift karke
                // sorted matlab age wale part me daal do
                arr[j+1]=arr[j];
            }
            else
            {
                break;  //ruk jao
            }
        }

        arr[j+1]=current;
    }
}

*/

// https://youtu.be/7kIVfVY6Axk?feature=shared