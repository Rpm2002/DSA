#include<bits/stdc++.h>
using namespace std;

/*

Given array, move zeros to end

*/

int main()
{
    // int arr[2]={1,3};
    // int arr2[2];
    // copy(arr,arr+2,arr2);
    
    // for (int i = 0; i < 2; i++)
    //     cout << arr2[i] << " ";
    
    
    int arr[8]={4,5,0,1,9,0,5,0};
    
    int cnt=0;
    
    for(int i=0;i<8;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[cnt++]);
        }
    }
    
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}