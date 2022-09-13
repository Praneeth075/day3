#include<iostream>
using namespace std;
class student
{
public:
string name,regno;
void getdet()
{
cout<<"\nenter your name : ";
cin>>name;
cout<<"\nenter your reg no : ";
cin>>regno;
}
void displaya()
{
cout<<"\nname : "<<name;
cout<<"\nreg no : "<<regno;
}
};
class exam
{
public:
string sub1,sub2,sub3;
float max=100,min=50,m1,m2,m3;
void getmark()
{
cout<<"\nenter the subject 1 : ";
cin>>sub1;
cout<<"\nenter the marks obtained in subject 1: ";
cin>>m1;
cout<<"\nenter the subject 2 : ";
cin>>sub2;
cout<<"\nenter the marks obtained in subject 2 : ";
cin>>m2;
cout<<"\nenter the subject 3 : ";
cin>>sub3;
cout<<"\nenter the marks obtained in subject 3 : ";
cin>>m3;
}
};
class result:public student,public exam
{
public:
void displayb()
{
cout<<"\n\n\n"<<sub1<<" : ";
cout<<"\nminimum marks : "<<min;
cout<<"\nmaximum marks : "<<max;
cout<<"\nmarks obtained in "<<sub1<<" : "<<m1;
cout<<"\n\n\n"<<sub2<<" : ";
cout<<"\nminimum marks : "<<min;
cout<<"\nmaximum marks : "<<max;
cout<<"\nmarks obtained in "<<sub2<<" : "<<m2;
cout<<"\n\n\n"<<sub3<<" : ";
cout<<"\nminimum marks : "<<min;
cout<<"\nmaximum marks : "<<max;
cout<<"\nmarks obtained in "<<sub3<<" : "<<m3;
}
};
int main()
{
result r;
r.getdet();
r.getmark();
r.displaya();
r.displayb();
return 0;
}
