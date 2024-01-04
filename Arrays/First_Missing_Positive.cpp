/*
You are given an array 'ARR' of integers of length N. Your task is to find the first missing positive 
integer in linear time and constant space. In other words, find the lowest positive integer that 
does not exist in the array. The array can have negative numbers as well.

For example, the input [3, 4, -1, 1] should give output 2 because it is the smallest positive number 
that is missing in the input array.

******************************** Code *****************************

#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
       if(arr[i]<=0)
       {
           arr[i]=n+1;
       } 
    }

    for(int i=0;i<n;i++)
    {
        int index=abs(arr[i])-1;
        if(index<n)
        {
            arr[index]*=-1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            return i+1;
        }
    }

    return n+1;

    // Approach to solve this problem - Hashing

    // https://youtu.be/LLdHZI-qC08?feature=shared  Youtube
}

*/