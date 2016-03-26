#include<iostream.h>
#include<conio.h>

void bubble(int a[],int size)
{
int i,j,t;
for(i=0;i<size;i++)
for(j=0;j<size-1;j++)
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}

void main()
{
clrscr();
int a[5],i;
for(i=0;i<5;i++)
cin>>a[i];
bubble(a,5);
cout<<endl<<endl<<"  Sorted array is :"<<endl<<endl<<endl<<"   | ";
for(i=0;i<5;i++)
cout<<a[i]<<" | ";

getch();
}