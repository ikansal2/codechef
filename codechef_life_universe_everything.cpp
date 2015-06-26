/*
Codechef Problem- Answer to life, universe and everything.
Read input and output till 42 appears as input.

eg 
Input-11,12,88,42
Output- 11,12,88

@author-ishaankansal
*/

#include<iostream>

using namespace std;

int main()
{
		int i=0;
		while(i!=42)
		{
			cin>>i;
			if(i!=42) cout<<i<<endl;
			else break;
		}
		return 0;
	
}