#include<iostream.h>
#include<conio.h>
void  main()
{
clrscr();
int num;
cout<<"Enter month number from 1 to 12 :";
cin>>num;
switch(num)
{
case 1:
cout<<"January";
break;
case 2:
cout<<"February";
break;
case 3:
cout<<"March";
break;
case 4:
cout<<"april";
break;
case 5:
cout<<"May";
break;
case 6:
cout<<"June";
break;
case 7:
cout<<"July";
break;
case 8:
cout<<"August";
break;
case 9:
cout<<"September";
break;
case 10:
cout<<"Octomber";
break;
case 11:
cout<<"November";
break;
case 12:
cout<<"December";
break;
default:
cout<<"Not valid";
break;
}
getch();
}
