#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
	clrscr();
	int b[8]={11,3,163,184,96,56,243,12},temp,j,i;
	for(i=0;i<8;i++)
	{
		for(j=0;j<7-i;j++)//condition j<7 orj<7-i have no difference.
		{                 //j>7-i saves time (less number of checks).
			if(b[j]>b[j+1])
			{
				temp=b[j+1];
				b[j+1]=b[j];
				b[j]=temp;
			}
		}
	}
	for(j=0;j<8;j++)
	{
		cout<<b[j];
		cout<<endl;
	}
	getch();
}