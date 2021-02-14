#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
	clrscr();
	int a[4]={1,5,7,9},b[6]={3,6,8,11,15,19},c[10],i,j,k,m,n;
	m=4;n=6;
	i=0;j=0;k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}

		k++;
	}
	if(i==m)
	{
		for(;j<=n;j++,k++)
		{
			c[k]=b[j];
		}
	}

	else if(j==n)
	{
		for(;i<=m;i++,k++)
		{
			c[k]=a[i];
		}
	}

	for(k=0;k<10;k++)
	{
		cout<<c[k]<<endl;
	}
	getch();
}