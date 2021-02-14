#include<iostream.h>
#include<conio.h>
#include<stdio.h>



	struct node
	{
		int info;
		node *next;
	}*ptr,*top,*newptr,*save;

	node* newnode(int);
	void push(node*);
	void pop();
	void display(node*);



void main()
{
	top=NULL;
	int inf,choice;

	do
	{
		clrscr();
		cout<<"\tMenu:";
		cout<<"\ninsert new node: press(1)";
		cout<<"\ndelete node    : press(2)";
		cout<<"\ndisplay stack  : press(3)";
		cout<<"\nQuit           : press(4)";
		cin>>choice;
		switch(choice)
		{
			case 1:

				cout<<"enter data for the new node";
				cin>>inf;
				newptr = newnode(inf);
				push(newptr);
				break;

			case 2:
				cout<<"do you want to delete the node?";
					char ch;
				cin>>ch;
				if(ch=='n'||ch=='N')
					break;

				else
					pop();
				break;

			case 3:
				display(top);
				break;
		}

	}
	while(choice!=4);
	getch();
}



node* newnode(int n)
{
	ptr= new node;
	ptr->info = n;
	ptr->next = NULL;
	return ptr;
}


void push(node* np)
{
	save = top;
	top = np;
	top->next = save;
}


void pop()
{
	ptr = top;
	top = top->next;
	delete ptr;
}


void display(node *np)
{
	cout<<"the stack is:\n";
	while(np!=NULL)
	{
		cout<<np->info<<endl;
		cout<<"|"<<endl<<"v"<<endl;
		np=np->next;
	}
	getch();
}