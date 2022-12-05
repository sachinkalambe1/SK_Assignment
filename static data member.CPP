#include<iostream.h>
#include<conio.h>
class one
{
public:
static int b;
void set()
{
b++;
}
void dis()
{
cout<<b<<endl;
}}; int one::b;// type and scope resolution use
void main()
{
clrscr();
one ob1,ob2,ob3;
ob1.dis();
ob2.dis();
ob3.dis();
ob3.set();
ob1.dis();
ob2.dis();
ob3.dis();
getch();
}