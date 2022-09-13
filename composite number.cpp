#include<iostream>
using namespace std;
int main()
{
int start,end,i,j;
cout<<"\nENTER THE STARTING => ";
cin>>start;
cout<<"\nENTER THE ENDING => ";
cin>>end;
for(i=start+1;i<end;i++)
{
int count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==2)
continue;
else
{
cout<<i<<"\n";
}
}
}

