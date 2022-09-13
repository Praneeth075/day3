#include<iostream>
using namespace std;
int bal=0;
class account
{
public:
string name,acc,acty;
void getdet()
{
cout<<"\nenter your name : ";
cin>>name;
cout<<"\nenter your account number : ";
cin>>acc;
cout<<"\nenter your account type : ";
cin>>acty;
}
void displaya()
{
cout<<"\nname : "<<name;
cout<<"\naccount number : "<<acc;
cout<<"\naccount type : "<<acty;
}
};
class withdraw
{
public:
int amt;
void getwith()
{
cout<<"\nenter the withdrawl amount : ";
cin>>amt;
}
void displayb()
{
if(amt<=bal){
cout<<"\nbalance : "<<bal-amt;
cout<<"\nTake your cash !!!";
}
else
cout<<"\ninsufficient balance !!!";
}
};
class savings:public account,public withdraw
{
public:
int amt2;
void getdep()
{
cout<<"\nenter the deposit amount : ";
cin>>amt2;
}
void displayc()
{
if(amt2>0){
cout<<"\nbalance : "<<bal+amt2;
cout<<"\ndeposited successfully !!!!";
}
else
cout<<"\ninvalid amount !!!";
}
};
int main()
{
int n;
savings s;
s.getdet();
cout<<"\n1.withdraw \n2.deposit \nenter your choice : ";
cin>>n;

if(n==1){
s.getwith();

}
else if(n==2){
s.getdep();

s.displayc();
}
return 0;
}
