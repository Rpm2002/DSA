#include<bits/stdc++.h>
using namespace std;
// https://www.youtube.com/live/y1vfUrUDImc?feature=shared
long long int factorial(int n)
{
    if (n==0 or n==1)
    {
        return 1;
    }
    
    return n*factorial(n-1);
}


int main()
{
   int n;
   cout<<"n : ";
   cin>>n;
   int original=n;
   long long int sum=0;
   
   
   while(n)
   {
       int ld=n%10;
       sum+=factorial(ld);
       n=n/10;
   }
   
   if(original==sum)
   {
       cout<<"Blood Reltive number";
   }
   
   else
   {
       cout<<"Not a blood relative number";
   }
    

    return 0;
}
