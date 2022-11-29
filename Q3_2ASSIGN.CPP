#include<iostream.h>
#include<conio.h>
void  main()
{
clrscr();
float a,b,c,perimeter;
cout<<"Enter three floating values :";
cin>>a>>b>>c;
if(a+b>c && b+c>a && c+a>b)
{
cout<<"valid triangle";
perimeter=a+b+c;
cout<<"\n perimeter ="<<perimeter;
}
else
{
cout<<"Not valid triangle";
}
getch();
}
