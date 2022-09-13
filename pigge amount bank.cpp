#include<iostream>
using namespace std;
int sav=0;
class addamount
{
public:
int amount=500;
addamount()
{
}
addamount(int a)
{
sav=a;
sav+=amount;
}
void display()
{
cout<<"\nyour savings in a piggy bank : "<<sav;
}
};
int main()
{
int amt;
cout<<"\nenter the amount to add in a piggy bank : ";
cin>>amt;
addamount s,d(amt);
s.display();
return 0;
}
