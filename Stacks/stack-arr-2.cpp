#include<iostream>
using namespace std;

int stack[100],n,top,x,i;

void push()
{
	if(top>=n-1)
	{
		cout<<"\n Stack overflow....\n";
	}
	else
	{
		cout<<"Enter the value to be pushed : ";
		cin>>x;
		top=top+1;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		cout<<"\n Stack underflow \n";
	}
	else
	{
		cout<<"\n Element to be popped is : "<<stack[top];
		top=top-1;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"Elements in stack : \n";
		for(i=top;i>=0;i--)
		{
			cout<<"\n"<<stack[i]<<endl;
		}
	}
	else
	{
		cout<<"\n stack is empty..\n";
	}
}

int main()
{
	int ch;
	top=-1;
	cout<<"Enter no of array elements : \n";
	cin>>n;

	cout<<"   MENU   ";
	cout<<"\n 1.push";
	cout<<"\n 2.pop";
	cout<<"\n 3.display";
	cout<<"\n 4.exit\n";
	do{
		cout<<"\n Enter your choice : ";
		cin>>ch;

		switch(ch)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			break;
		}
	}while(ch!=4);

	return 0;
}