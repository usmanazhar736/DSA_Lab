#include <iostream>
using namespace std;

//*****--------------DOUBLY------------*****
class Node2
{
private:	
	int data;
	Node2 *next;
	Node2 *prv;
		
public:
	Node2 *head;
	
	Node2()
	{
		head=NULL;
	}
//INsertion*******************************	
	void insert_beg(int n){
		if(head==NULL){
		 head=new Node2();
		 head->data=n;
		 head->next=NULL;
		 head->prv=NULL;		
		}
		else{	
		  Node2 *p;
		  p=new Node2();
		  p->data=n;
		  p->next= head;
		  p->prv= NULL;
		  head=p;	
		}		
	}
	
	// Display*************************************************
	void disp()
	{
		Node2 *temp;
		temp = head;
		if (temp == NULL)
		{
			cout << " \nNo data is in the list..\n\n\n" << endl;
			return;
		}
		else
		{
			cout << " \nThe items present in the list are :";
			while (temp != NULL)
			{
				cout << " " << temp->data;
				temp = temp->next;
			}
			cout <<"\n\n\n"<<endl;
		}
	}
};


int main()
{
	Node2 obj;
	int v;
			
	cout << " To add Node at Begining" << endl;
	cout << "\nEnter the value to insert: ";
	cin >> v;
	obj.insert_beg(v);
	cin >> v;
	obj.insert_beg(v);
	cin >> v;
	obj.insert_beg(v);
	obj.disp();
	return 0;}
	
