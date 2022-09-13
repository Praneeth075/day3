#include<iostream>
using namespace std;
void justdisplay(int*a,int*b)
{
cout<<"entered A => "<<*a;
cout<<"\nentered B => "<<*b;
}
int main()
{
int a,b;
cout<<"ENTER A => ";
cin>>a;
cout<<"ENTER B => ";
cin>>b;
justdisplay(&a,&b);
}
