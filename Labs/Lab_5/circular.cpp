#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
	public:
		Node *head;
		Node(){
			head=NULL;
		}
		void insert_beg(int n){
			if(head==NULL){
				head=new Node();
				head->data=n;
				head->next=head;
			}
			else{
				Node *ptr, *p;
				ptr=head;
				while(ptr->next!=head){
					ptr=ptr->next;
				}
				p=new Node();
				p->next=head;
				p->data=n;
				ptr->next=p;
			}
		}
		
		void insert_specific(int pos,int n){
			if(head==NULL){
				cout<<"there is no such position"<<endl;
			}
			else{
				Node *p1,*p2;
				p1=head;
				while(p1->data!=pos){
					p1=p1->next;
				}
				p2=new Node();
				p2->next=p1->next;
				p2->data=n;
				p1->next=p2;
			}
		}
		
		void insert_end(int n){
			if(head==NULL){
				head=new Node();
				head->data=n;
				head->next=head;
			}
			else{
				Node *ptr,*p;
				ptr=head;
				while(ptr->next!=head){
					ptr=ptr->next;
				}
				p=new Node();
				ptr->next=p;
				p->data=n;
				p->next=head;
			}
		}
		
		void del_beg(){
			if(head==NULL){
				cout<<"there is no list"<<endl;
			}
			else{
				Node *ptr,*p;
				ptr=head;
				p=head;
				while(ptr->next!=head){
					ptr=ptr->next;
				}
				head=head->next;
				ptr->next=head;
				delete p;
				p=NULL;
			}
		}
		
		void del_specific(int pos){
			if(head==NULL){
				cout<<"there is no list"<<endl;
			}
			else{
				Node *ptr, *p;
				ptr=head;
				while(ptr->data!=pos){
					p=ptr;
					ptr=ptr->next;
				}
				p->next=ptr->next;
				delete ptr;
				ptr=NULL;
			}
		}
		
		void del_end(){
			if(head==NULL){
				cout<<"there is no list"<<endl;
			}
			else{
				Node *p1,*p2;
				p1=head;
				while(p1->next!=head){
					p2=p1;
					p1=p1->next;
				}
				p2->next=head;
				delete p1;
				p1=NULL;
			}
		}
		
		
		
		void display(){
			if(head==NULL){
				cout<<"there is no list"<<endl;
			}
			else{
				Node *ptr;
				ptr=head;
				cout<<"the circular link list is: "<<endl;
				while(ptr->next!=head){
					cout<<ptr->data<<" ";
					ptr=ptr->next;
				}
				cout<<ptr->data;
			}
		}
};
int main(){
	Node n;
	n.display();
	n.insert_beg(1);
	n.insert_beg(2);
	n.insert_beg(3);
	n.insert_beg(4);
	n.insert_end(6);
	n.del_end();
	n.del_specific(2);
	n.del_beg();
	n.insert_specific(3,5);
	n.del_beg();
	n.display();
	return 0;
}
