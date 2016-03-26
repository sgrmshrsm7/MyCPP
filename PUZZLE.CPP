#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>
void disp(char a[4][8],int b)
{
clrscr();

cout<<"\n";
cout<<"     R. Restart      X. Exit";
cout<<"\n\n\n";
cout<<"  No. of chance = "<<b<<endl<<"\n\n";
for(int i=0;i<4;i++)
{
cout<<"\t\t\t     _____________________"<<endl<<endl;
cout<<"\t\t\t    ";
cout<<" | ";
for(int j=0;j<8;j+=2)
{
cout<<a[i][j]<<a[i][j+1]<<" | ";
}
cout<<endl;
}
cout<<"\t\t\t     _____________________"<<endl<<endl;
cout<<"\t\t\t     Enter your turn  :  ";
}


void main()
{
yo:
clrscr();
randomize();
textbackground(0);
textcolor(5);
char a[4][8],turn;
int b[15],i,j,k,l,l1,m,n,win=1,chance=0;

for(i=0;i<4;i++)
{
for(j=0;j<8;j++)
a[i][j]=' ';
}
//storing data in 1-D
for(i=0;i<15;i++)
{
lal:
b[i]=1+random(15);
for(j=0;j<i;j++)
{
if(b[i]==b[j])
goto lal;
}
}
//storing data in 2-D

k=0;
for(i=0;i<4;i++)
{
for(j=1;j<8;j+=2)
{
if(b[k]<10)
{
a[i][j]=48+b[k++];
}
else
{
l=b[k]%10;
a[i][j-1]='1';
a[i][j]=48+l;
k++;
}
}
}
m=random(4);
n=random(8);
if(n%2==0)
{
a[3][6]=a[m][n];
a[3][7]=a[m][n+1];
a[m][n]=' ';
a[m][n+1]=' ';
}
else
{
a[3][6]=a[m][n-1];
a[3][7]=a[m][n];
a[m][n]=' ';
a[m][n-1]=' ';
}

disp(a,chance);

while(win)
{
start:

//

l=0;
k=1;
for(i=0;i<2;i++)
{
for(j=1;j<8;j+=2)
{
if(a[i][j]==k+48&&a[i][j-1]==' ')
{
l=1;
k++;
}
else
{
l=0;
break;
}
}
}
if(l)
{
for(;i<4;i++)
{
for(j=1;j<8;j+=2)
{
if(k==16)
break;
if(a[i][j]==48+k%10)
{
l1=1;
k++;
}
else
{
l1=0;
break;
}
}
}
}

if(l&&l1)
{
a[3][6]='1';
a[3][7]='6';
delay(1000);
disp(a,chance);
delay(2000);
clrscr();
cout<<"\n\n\n   You Win !! ";
win=0;
getch();
return;
}

disp(a,chance);
cin>>turn;
for(i=0;i<4;i++)
for(j=0;j<8;j++)
{
if(a[i][j]==' '&&a[i][j+1]==' ')
{
if((turn=='w'||turn=='W')&&i<3)
{
a[i][j]=a[i+1][j];
a[i][j+1]=a[i+1][j+1];
a[i+1][j]=' ';
a[i+1][j+1]=' ';
chance++;
goto start;
}
else if((turn=='s'||turn=='S')&&i>0)
{
a[i][j]=a[i-1][j];
a[i][j+1]=a[i-1][j+1];
a[i-1][j]=' ';
a[i-1][j+1]=' ';
chance++;
goto start;
}
else if((turn=='a'||turn=='A')&&j<6)
{
a[i][j]=a[i][j+2];
a[i][j+1]=a[i][j+3];
a[i][j+2]=' ';
a[i][j+3]=' ';
chance++;
goto start;
}
else if((turn=='d'||turn=='D')&&j>1)
{
a[i][j]=a[i][j-2];
a[i][j+1]=a[i][j-1];
a[i][j-2]=' ';
a[i][j-1]=' ';
chance++;
goto start;
}
else if(turn=='r'||turn=='R')
goto yo;
else if(turn=='x'||turn=='X')
exit(0);
}
}
//win=0;
}
getch();
}