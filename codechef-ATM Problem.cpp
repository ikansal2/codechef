/*
Codechef Problem- ATM, withdrawal from ATM account with 0.5 fixed charge on every transaction. Each wothdrawal has to be a multiple of 5

eg 
Input-11,12,88,42
Output- 11,12,88

@author-ishaankansal
Category-easy
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
int withdrawal;
double balance;
 
cin >> withdrawal >> balance;
 
cout<<setprecision(2)<<fixed;
 
if ((withdrawal%5!=0)||((double)withdrawal+0.50>balance)) cout << balance;
else cout << balance-(double)withdrawal-0.50;
 
return 0;
}
