#include<iostream>
using namespace std;
class salary
{
public:
int bs,net,hra,oa,alla,gp;
salary()
{
cout<<"Enter basic salary : ";
cin>>bs;
cout<<"Enter HRA : ";
cin>>hra;
cout<<"Enter other allowence : ";
cin>>oa;
cout<<"Enter all allowance for net salary : ";
cin>>alla;
net=bs+hra+oa+alla;
cout<<"Your net salary is "<<net<<"\n";
gp=bs+hra+oa;
cout<<"Your gross pay is "<<gp<<"\n";
}
};
class deduction
{
public:
void deduction1()
{
	cout<<"\n"<<"Income tax calculation Enter your details below"<<"\n";
}
};
class incometax : public salary
{
public:
incometax()
{
if(net>200000 and net<500000)
{
cout<<"Your income tax is "<<net*0.5;
}
else if(net>500000 and net<700000)
{
cout<<"Your income tax is "<<(net*0.10)+12500;
}
else if(net>700000 and net<1000000)
{
cout<<"Your income tax is "<<(net*0.15)+37500;
}
else if(net>1000000)
{
cout<<"Your income tax is "<<(net*0.20)+75000;
}
else
{
cout<<"No income tax";
}
}
};
int main()
{
salary p1;
deduction p2;
p2.deduction1();
incometax p3;
}
