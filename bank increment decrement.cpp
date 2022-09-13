#include<iostream>
using namespace std;
class counter
{
public:
int count;
counter()
{
count=0;
}
void operator++()
{
count++;
}
void operator--()
{
count--;
}
int display()
{
return count;
}
};
int main()
{
counter c1;
cout<<"\ninitial number of people => "<<c1.display();
++c1;
++c1;
++c1;
++c1;
cout<<"\npresent number => "<<c1.display();
--c1;
cout<<"\nsome of them leave => "<<c1.display();
}
