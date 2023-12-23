#include <iostream>
using namespace std;
class stack{
	private:
		int data;
		stack *next;
	public:
		stack *head;
		
		stack(){
			head= NULL;
		}
		
		 void push(int n){
			stack *newnode= new stack();
			if (head == NULL)
			{
		 
				head = newnode;
				head->data = n;
				head->next = NULL;
			}
			else
			{
				stack *p;
				p = newnode;
				p->data = n;
				p->next = head;
	
			}
		 }
		 
			 void pop(){
			 	if (head == NULL)
			{
				cout << "Stack is empty ";
			}
			else
			{
		
				stack *temp;
				temp = head;
				head = temp->next;
				delete temp;
				temp = NULL;
			}
	 	}
	 	
		void display(){
			stack *temp;
			temp=head;
			if (head== NULL){
				cout<<"stack is empty";
			}
			else{
				cout << " \nThe items present in the stack are :";
			while (temp->next != NULL)
			{
				cout << " " << temp->data;
				temp = temp->next;
			}
			cout<< temp->data <<endl;
			cout <<"\n\n\n"<<endl;
			}
		} 
};
int main(){
	stack n;
	n.push(1);
	n.push(2);
	n.push(3);
	n.display();
	
}
