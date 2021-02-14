#	include<iostream.h>
#	include<conio.h>
#	include<stdio.h>
#	include<process.h>
	void create(void);
	void remove(void);
	void display(void);

 struct node
 {
    int roll;
    node *nxt;
 }*front,*rear;

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
		cout<<"\ndisplay stack  : press(3)";
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

			case 6:
			       exit(1);
			       break;
		}

	}while(1);
}


void create()
{
	node *temp;
	temp=new node;
	cout<<"enter roll number";
	cin>>temp->roll;
	temp->nxt=NULL;
	if(rear==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{

	rear->nxt=temp;
	rear = temp;
	}
}


void remove()
{
	node *t,*temp;
	int m;
	clrscr();

	if(front!=NULL)
	{
		temp = front;
		front = front->nxt;
		delete temp;
	}

}


void display()
{
	node *t;
	clrscr();
	t=front;
	while(t!=NULL)
	{
		cout<<t->roll<<endl;
		t=t->nxt;
	}
	getch();
}