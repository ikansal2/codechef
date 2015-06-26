/*
Codechef Problem- ATM, withdrawal from ATM account with 0.5 fixed charge on every transaction. Each wothdrawal has to be a multiple of 5

Example - Successful Transaction
Input:-
30 120.00
Output:-
89.50

Example - Incorrect Withdrawal Amount (not multiple of 5)
Input:-
42 120.00
Output:-
120.00

Example - Insufficient Funds
Input:-
300 120.00
Output:-
120.00

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
