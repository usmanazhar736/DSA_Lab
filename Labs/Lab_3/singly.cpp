#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
	public:
		Node *head;
		
		Node(){
			head==NULL;
		}
		
		void insert_beg(int n){
			if(head==NULL){
				head=new Node();
				head->data=n;
				head->next=NULL;
			}
			else{
				Node *ptr;
				ptr=new Node();
				ptr->next=head;
				ptr->data=n;
				head=ptr;
			}
		}
		
		void insert_specific(int pos, int n){
			if(head==NULL){
				head = new Node();
				head->data=n;
				head->next=NULL;
			}
			else{
				Node *ptr;
				ptr=head;
				while(ptr->data!=pos){
					ptr=ptr->next;
				}
				Node *p;
				p=new Node();
				p->data=n;
				p->next=ptr->next;
				ptr->next=p;
			}
		}
		
		void insert_end(int n){
			if(head==NULL){
				head=new Node;
				head->data=n;
				head->next=NULL;
			}
			else{
				Node *ptr, *p;
				ptr=head;
				while(ptr->next!=NULL){
					ptr=ptr->next;
				}
				p= new Node();
				p->data=n;
				p->next=NULL;
				ptr->next=p;
			}
		}
		
		void del_beg(){
			if(head==NULL){
				cout<<"List is empty"<<endl;
			}
			else{
				Node *ptr;
				ptr=head;
				head=ptr->next;
				delete ptr;
				ptr=NULL;
				
			}
		}
		
		void del_specific(int pos){
			if(head==NULL){
				cout<<"Given data is not available"<<endl;
			}
			else{
				Node *p1,*p2;
				p1=head;
				while(p1->data!=pos){
					p2=p1;
					p1=p1->next;
				}
				p2->next=p1->next;
				delete p1;
				p1=NULL;
			}
		}
		
		void del_end(){
			if(head==NULL){
				cout<<"list is empty"<<endl;
			}
			else{
				Node *p1,*p2;
				p1=head;
				while(p1->next!=NULL){
					p2=p1;
					p1=p1->next;
				}
				p2->next=NULL;
				delete p1;
				p1=NULL;
			}
		}
		
		void display(){
			if(head==NULL){
				cout<<"There is no list "<<endl;
			}
			else{
				Node *ptr;
				ptr=head;
				cout<<"The linked list is: "<<endl;
				while(ptr!=NULL){
					cout<<ptr->data<<" ";
					ptr=ptr->next;
				}
				cout<<endl;
			}
			cout<<"------------------------"<<endl;
		}
		
		void display1(){
			Node *ptr;
			ptr=head;
			cout << "Address of head: " << head <<endl;
			cout<< "Data of head: " << head->data << endl;
			cout<<"------------------------"<<endl;
			if(head==NULL){
				cout<<"There is no list"<<endl;
				cout << "Address of head: " << head << ", Data of head: " << head->data << endl;
			}
			
			else{
            while (ptr != NULL) {
            	
                cout << "ptr->next: " << ptr <<endl;
                cout<<"ptr->data: "<<ptr->data<<endl;
                cout<<"------------------------"<<endl;
                ptr = ptr->next;
            }
            cout << "ptr->next: " << ptr <<endl;
        }
        
			}
	
};
int main(){
	Node n;
	n.insert_beg(1);
	n.insert_end(2);
	n.insert_end(3);
	n.insert_end(4);
	n.insert_end(5);
	n.del_beg();
	n.del_end();
	n.del_specific(3);
	n.display();
	return 0;
	
}
