#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
	clrscr();
	int b[6]={11,3,163,14,56,96},temp,min,j,i,n=6,pass;
	for(i=0;i<n;i++)
	{
		min=b[i];
		pass = i;
		for(j=i+1;j<n;j++)
		{
			if(b[j]<min)
			{
				min=b[j];
				pass =j;
			}
		}
		temp = b[i];
		b[i] = b[pass];
		b[pass] = temp;
	}
	for(j=0;j<6;j++)
	{
		cout<<b[j];
		cout<<endl;
	}
	getch();
}