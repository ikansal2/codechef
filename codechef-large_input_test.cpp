/*
Input test for large number of inputs
*/

#include<iostream>
#include<stdio.h>
using namespace std;
 
int main()
{
    long int n,k,d;
    int count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&d);
        if(d%k==0) count++;
    }
    cout<<count<<endl;
}