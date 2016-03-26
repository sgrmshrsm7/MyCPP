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

void encoded(char a[])
{
char s1[80]={"#"};
char s2[80]={"@"};
int l=strlen(a),i;
for(i=0;i<l;i++)
{
if(a[i]==' ')
a[i]='$';
else if(a[i]=='z')
a[i]='d';
else if(a[i]=='Z')
a[i]='D';
else if(a[i]=='y')
a[i]='c';
else if(a[i]=='Y')
a[i]='C';
else if(a[i]=='x')
a[i]='b';
else if(a[i]=='X')
a[i]='B';
else if(a[i]=='w')
a[i]='a';
else if(a[i]=='W')
a[i]='A';
else if((a[i]>='a'||a[i]>='A')&&(a[i]<='v'||a[i]<='V'))
a[i]+=4;
if(isupper(a[i])==0)
a[i]=tolower(a[i]);
if(islower(a[i])==0)
a[i]=tolower(a[i]);
}
strcat(s1,a);
strcat(s1,s2);
cout<<"\n  Encoded message is : "<<s1;
}

void main()
{
clrscr();
char message[80];
cout<<"\n\n  Enter the message  :  ";
gets(message);
encoded(message);
getch();
}