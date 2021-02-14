#	include<iostream.h>
#	include<conio.h>
#	include<stdio.h>
#       include<process.h>
	void create(void);
	void search(void);
	void remove(void);
	void display(void);
	void sort(void);

 struct node
 {
    int roll;
    node *nxt;
 }*head;

void main()
{
	int ch,p,m;
	clrscr();
	do
	{
		clrscr();
		cout<<"\tMenu:";
		cout<<"\ninsert new node: press(1)";
		cout<<"\ndelete node    : press(2)";
		cout<<"\ndisplay list   : press(3)";
		cout<<"\nsearch         : press(4)";
		cout<<"\nsort the list  : press(5)";
		cout<<"\nQuit           : press(6)";
		cin>>ch;
		switch(ch)
		{
			case 1:

				create();
				break;

			case 2:
				remove();
				break;

			case 3:
				display();
				break;

			case 4:
				search();
				break;

			case 5:
				sort();
				break;

			case 6:
			       exit(1);
			       break;
		}

	}while(1);
}


void create()
{
	node *temp,*t;
	int m,p;
	temp=new node;
	cout<<"enter roll number";
	cin>>temp->roll;
	temp->nxt=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		cout<<"enter zero for beginning or the number after which you";
		cout<<" wish to enter the current entry.\n";
		cin>>p;
		if(p==0)
		{
			temp->nxt=head;
			head=temp;
		}

		else
		{
			t=head;
			while(t->roll!=p && t!=NULL)
			t=t->nxt;
			if(t!=NULL)
			{
				temp->nxt=t->nxt;
				t->nxt=temp;
			}

		}
	}
}


void search()
{
	node *t;
	int m;
	clrscr();
	t=head;
	cout<<"enter number to search";
	cin>>m;
	while(t!=NULL&&t->roll!=m)
	t=t->nxt;
	if(t!=NULL)
		cout<<"number found";

	else
		cout<<"number not found";
	getch();
}


void remove()
{
	node *t,*temp;
	int m;
	clrscr();
	cout<<"enter number";
	cin>>m;
	t=head;
	if(head->roll==m)
	{
		temp=head;
		head=head->nxt;
		delete temp;
	}
	else
	{
		while(t->nxt->roll!=m &&t!=NULL)
		t=t->nxt;

		if(t!=NULL)
		{
			temp=t->nxt;
			t->nxt=temp->nxt;
			delete temp;
		}
	}
}


void display()
{
	node *t;
	clrscr();
	t=head;
	while(t!=NULL)
	{
		cout<<t->roll<<endl;
		t=t->nxt;
	}
	getch();
}


void sort()
{
	node *i,*j;
	 int temp;
	i=head;
	while(i!=NULL)
	{

	  j=head;
	  while(j!=NULL)
	  {
		  if(i->roll<j->roll)
		  {
		    temp = i->roll;
		    i->roll = j->roll;
		    j->roll = temp;
		 }
		 j = j->nxt;
	  }
	  i=i->nxt;

	}
}
