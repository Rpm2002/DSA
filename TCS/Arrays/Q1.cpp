//  https://youtu.be/0MCJwDYN8Go?feature=shared

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==2 or n==3 or n==5 or n==7 or n==11 or n==13 or n==17 or n==19 or n==23 or n==29 or n==31
    or n==37) return true;
    
    return false;
}

bool isPerfectSquare(int n)
{
    if(n==1 or n==4 or n==9 or n==16 or n==25 or n==36) return true;
    
    return false;
}


int main()
{
    int n;
    cout<<"n : ";
    cin>>n;
    
    int ans[n];
    int powtwo=0;
    int powthree=0;
    
    for(int i=0;i<n;i++)
    {
        if(isPrime(i+1))
        {
            ans[i]=pow(2,powtwo++);
        }
        
        else if(isPerfectSquare(i+1))
        {
            ans[i]=pow(3,powthree++);
        }
        
        else
        {
            ans[i]=ans[i-1]+ans[i-2];
        }
    }
    
    cout<<ans[n-1];

    return 0;
}
