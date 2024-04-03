// https://leetcode.com/problems/harshad-number/description/

#include<bits/stdc++.h>
using namespace std;

bool isHarshad(int x)
{
    int sum=0;
    int original=x;
    while(x!=0)
    {
        int ld=x%10;
        sum+=ld;
        x=x/10;
    }
    
    if(original%sum==0) return true;
    
    return false;
}

int main()
{
    int n;
    cout<<"n : ";
    cin>>n;
    int sum=0;
    int original=n;
    
    if(isHarshad(n))
    {
        while(n!=0)
        {
            int ld=n%10;
            sum+=ld;
            n=n/10;
        }
        
        cout<<"sum of digits of "<<original<<" is "<<sum<<endl;
    }
    
    else
    {
        cout<<-1;
    }
    
    return 0;
}