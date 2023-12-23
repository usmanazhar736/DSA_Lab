#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
		Node *prev;
	public:
		Node *head;
		Node(){
			head=NULL;
		}
		
		void insert_beg(int n){
			if(head==NULL){
				head=new Node();
				head->data=n;
				head->next=NULL;
				head->prev=NULL;
			}
			else{
				Node *ptr;
				ptr=new Node();
				ptr->data=n;
				ptr->next=head;
				ptr->prev=NULL;
				head=ptr;
			}
		}
		
		void insert_specific(int pos, int n){
			if(head==NULL){
				head=new Node();
				head->data=n;
				head->next=NULL;
				head->prev=NULL;
			}
			else{
				Node *ptr,*p;
				ptr=head;
				while(ptr->data!=pos){
					ptr=ptr->next;
				}
				p=new Node();
				p->next=ptr->next;
				ptr->next=p;
				p->prev=ptr;
				p->data=n;
			}
		}
		
		void insert_end(int n){
			if(head==NULL){
				head=new Node();
				head->data=n;
				head->next=NULL;
				head->prev=NULL;
			}
			else{
				Node *ptr,*p;
				ptr=head;
				while(ptr->next!=NULL){
					ptr=ptr->next;
				}
				p=new Node();
				p->data=n;
				p->next=NULL;
				p->prev=ptr;
				ptr->next=p;
			}
		}
		void del_beg(){
			if(head==NULL){
				cout<<"there is no element"<<endl;
			}
			else{
				Node *ptr;
				ptr=head;
				head=head->next;
				head->prev=NULL;
				delete(ptr);
				ptr = NULL;
				
			}
		}
		void del_end(){
			if(head==NULL){
				cout<<"there is no element"<<endl;
			}
			else{
				Node *ptr;
				Node *ptr1;
				ptr=head;
				while(ptr->next!=NULL){
					ptr1=ptr;
					ptr=ptr->next;
				}
				ptr1->next=NULL;
				delete(ptr);
				ptr=NULL;
				
			}
			
		}
		void del_specific(int pos){
			if(head==NULL){
				cout<<"there is no element"<<endl;
			}
			else{
				Node *ptr;
				Node *ptr1;
				ptr=head;
				while(ptr->data!=pos){
					ptr1=ptr;
					ptr=ptr->next;
				}
				ptr1->next=ptr->next;
				ptr->next->prev=ptr1;
				delete(ptr);
				ptr=NULL;
			}
		}
		
		void display(){
			if(head==NULL){
				cout<<"there is no list"<<endl;
			}
			else{
				Node *ptr;
				ptr=head;
				cout<<"the link list is: "<<endl;
				while(ptr!=NULL){
					cout<<ptr->data<<" ";
					ptr=ptr->next;
				}
				cout<<endl;
			}
		}
};
int main(){
	Node n;
	n.insert_beg(1);
	n.insert_beg(2);
	n.insert_beg(3);
	n.insert_beg(4);
	n.insert_specific(2,5);
	n.insert_end(6);
	n.display();
	n.del_specific(3);
	n.display();
	n.del_beg();
	n.del_beg();
	n.del_end();
	n.display();
	return 0;
}
