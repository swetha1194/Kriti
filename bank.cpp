#include "bank.h"
#include <iostream>

bank::bank()
{
bank::balance=0;
std::cout<<"Hello! A zero-balance account has been created for you\n";
}

void bank::deposit(float amount)
{
bank::balance+=amount;
}

void bank::withdraw(float amount)
{
if(bank::balance-amount<0)
std::cout<<"Amount to withdraw greater than the balance! Withdraw lesser amount\n";
else
bank::balance-=amount;
}

void bank::check_balance()
{
std::cout<<"Balance in account is "<<bank::balance<<"\n\n";
}

int main()
{
bank b;
int i;
float amount;
do
{
std::cout<<"1. Deposit Amount\n2. Withdraw Amount\n3. Check balance\n4. Exit\n\nEnter your choice:  ";
std::cin>>i;
switch(i)
{
case 1: 
std::cout<<"Enter amount to be deposited\n";
std::cin>>amount;
b.deposit(amount);
break;
case 2:
std::cout<<"Enter amount to withdraw\n";
std::cin>>amount;
b.withdraw(amount);
break;
case 3:
b.check_balance();
break;
case 4:
std::cout<<"Thank you for using this system\n";
break;
default:
std::cout<<"Enter valid choice\n";
break;
}
}while(i!=4);
}

