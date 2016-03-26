#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void smallw(char a[])
{
int sl=0,l=strlen(a),i,j=0;
char temp[80],small[80];
for(i=0;a[i]!=' ';i++)
small[i]=a[i];
sl=strlen(small);
cout<<sl<<",";

for(i=0;i<l;i++)
{
if(a[i]==' ')
{
temp[j]='\0';
if(strlen(temp)<sl&&strlen(temp)>0)
{
sl=strlen(temp);
strcpy(small,temp);
}
strcpy(temp,"");
}
else if(a[i]!=' ')
{
temp[j]=a[i];
j++;
}


}
cout<<sl<<" "<<small;
}

void main()
{
clrscr();
char a[80];
cout<<"\n  Enter any string  :   ";
gets(a);
smallw(a);
getch();
}