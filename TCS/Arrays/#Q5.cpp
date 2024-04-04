// https://youtu.be/2btLsdw3ih4?feature=shared
// https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int target=29;
    bool found=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int col=n-1;
    int row=0;
    
    while(col>=0 and row<n)
    {
        if(arr[row][col]==target)
        {
            cout<<"Found at : "<<row<<" "<<col<<endl;
            found=1;
            break;
        }
        
        else if(arr[row][col]>target)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    
    if(!found)
    {
        cout<<"Not found";
    }
    
    return 0;
}