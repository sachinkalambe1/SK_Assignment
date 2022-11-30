#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y;
cout<<"Enter the values of x and y\n :";
cin>>x>>y;
if(x>0 && y>0)
{
cout<<"point lies in first quadrant \n";
}
else if(x<0 && y>0)
{
cout<<"point lies in second quadrant \n";
}
else if(x<0 && y<0)
{
cout<<"point lies in third quadrant \n";
}
else if(x>0 && y<0)
{
cout<<"point lies in fourth quadrant \n";
}
else if(x==0 && y==0)
{
cout<<"point lies in origin \n ";
}
getch();
}