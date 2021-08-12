#include <iostream>
using namespace std;
int main()
{
int x,a,b,c;
int add();
int sub();
int division();
int multiplication();

cout<<"enter 1 for add"<<endl;
cout<<"enter 2 for sub"<<endl;
cout<<"enter 3 for division"<<endl;
cout<<"enter 4 for multiplication"<<endl;
cin>>x;
if (x==1)
{
add();
}
else if (x==2)
{
sub();
}
else if (x==3)
{
division();
}
else if (x==4)
{
multiplication();
}
else 
{
cout<<"please enter 1 upto 4"<<endl;
}
int add();
{
a=10;
b=5;
c=a+b;
cout<<"the sum is"<<c<<endl;
}
int sub();
{
a=10;
b=5;
c=a-b;
cout<<"the sub is"<<c<<endl;
}
int division();
{
a=10;
b=5;
c=a/b;
cout<<"the division is"<<c<<endl;
}
int multiiplication();
{
a=10;
b=5;
c=a*b;
cout<<"the multiplication is"<<c<<endl;
}
}
