#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int pass, x=10;
while(x!=0)
{
cout<<"Input password :";
cin>>pass;
if(pass==1234)
{
cout<<"correct password";
x=0;
}
else
{
cout<<"Wrong password";
}
cout<<"\n";
}
getch();
}
