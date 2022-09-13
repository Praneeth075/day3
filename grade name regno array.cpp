#include<iostream>
using namespace std;
class name
{
public:
string name;
void getname()
{
cout<<"\nenter the name : ";
cin>>name;
}
void displaya()
{
cout<<"\nname : "<<name;
}
};
class roll
{
public:
string r;
void getrn()
{
cout<<"\nenter the roll no : ";
cin>>r;
}
void displayb()
{
cout<<"\nroll no : "<<r;
}
};
class grade:public name,public roll
{
public:
char g;
void getgra()
{
cout<<"\nenter the grade : ";
cin>>g;
}
void displayc()
{
cout<<"\ngrade : "<<g;
}
};
int main()
{
int n,i;
grade d[10];
cout<<"\nenter the no of students : ";
cin>>n;
for(i=0;i<n;i++){
d[i].getname();
d[i].getrn();
d[i].getgra();
}
for(i=0;i<n;i++){
d[i].displaya();
d[i].displayb();
d[i].displayc();
}
return 0;
}
