# include <iostream.h>
# include <process.h>
# include <string.h>
# include <stdio.h>
# include <conio.h>
# include <fstream.h>

void main()
{
	clrscr();
	int mid,low=0,high=4,i;
	char a[5]={11,22,33,44,55};
	cout<<"enter the number to be searched for:";
	cin>>i;
	while(low<high)
	{
		mid=(low+high)/2;
		if(i==a[mid])
		{
			cout<<"Number found";
			getche();
			exit(1);
		}
		else if(i<a[mid])
		{
			high=mid-1;
		}
		else if(i>a[mid])
		{
			low=mid+1;
		}
	}
	  cout<<"not in list";
	getch();
}


