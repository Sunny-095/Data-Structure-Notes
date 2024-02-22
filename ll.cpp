#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;	
};
typedef struct Node Node;
// create
Node *create(Node *start)
{
	int x;
	Node *temp;
	char ch;
	do
	{
		Node *nn=(Node *)malloc(sizeof(Node *));
		cout<<"Enter element ";
		cin>>x;
		nn->data=x;
		nn->next=NULL;
		if(start==NULL)
			start=nn;
		else
			temp->next=nn;
		temp=nn;
		cout<<"do you want to create another Node Y/N"<<endl;
		cin>>ch;
	}while(ch=='Y'|| ch=='y');
	return start;
}

void print(Node *temp)
{
	if(temp==NULL)
	{
		cout<<"linked list is empty"<<endl;
		return;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<endl;
	return;
}




// insert

//insert at end
Node *insert_at_end(Node *start)
{
	int x;
	Node *nn=(Node *)malloc(sizeof(Node *));
	nn->next=NULL;
	cout<<"Enter element: ";
	cin>>x;
	nn->data=x;
	if(start==NULL)
		start=nn;
	else
	{
		Node *temp=start;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=nn;
	}
	return start;
}

//insert at begining
Node *insert_at_beg(Node *start)
{
	int x;
	Node *nn=(Node *)malloc(sizeof(Node *));
	//nn->next=NULL;
	cout<<"Enter element: ";
	cin>>x;
	nn->data=x;
	nn->next=start;
	start=nn;
	return start;
}
   int countNodes(Node*start)
   {
   	int count=0;
   	Node*temp = start;
   	while(temp!=NULL)
   	{
   		count ++;
   		temp=temp->next;
		    
	   }
   	return count ;
   	
   }


//insert at specified position
Node * insert_at_sp_pos(Node * start)
{
	int count = countNodes(start);
	int pos;
	cout<< "enter position";
	cin>>pos ;
	if((pos>count+1)||(pos<=0))
	{
		cout<< "invalid position"<<endl;
		return start ;		
	}
	Node *nn =(Node *)malloc(sizeof(Node *));
	int x;
	cout<<"Enter element"<<endl;
	cin>>x;
	nn->data=x;
	nn->next=NULL;
	if(pos==1)
	{
		nn->next=start;
		start=nn;
	}
	else 
	{
		Node *temp =start;
		
		for (int i=1;i<pos-1;i++)
		temp=temp->next ;
		nn-> next = temp-> next ;
		temp-> next = nn;
	}
	return start ;
	

}





//insert after spec pos
//insert before spec pos

//delete
//delete at end
//delete at begining
//delete at specified position
//delete after spec pos
//delete before spec pos


//print
//print reverse

int main()
{
	struct Node *start=NULL;
	start=create(start);
	int ch;
	cout<<"1 for insert at begining"<<endl;
	cout<<"2 for insert at end"<<endl;
	cout<<"3 for insert at specified position"<<endl;
	cout<<"4 for print"<<endl;
	cout<<"5 for delete"<<endl;
	cout<<"6 for exit"<<endl;
	do
	{
		cout<<"Enter Your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1://insert at begining
				start=insert_at_beg(start);
				break;
			case 2: start=insert_at_end(start);
				break;
			case 3: start=insert_at_sp_pos(start);
				break;
			
			case 4:// print
				print(start);
				break;
			case 5:// delete
				break;
			case 6://exit
				break;
			default: cout<<"Wrong choice"<<endl;
				break;
		}
		cout<<endl;
	}while(ch!=6);
	return 0;
}
