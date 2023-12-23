#include <iostream>
const int SIZE =10;
using namespace std;
int top=-1, arr[SIZE];
void push();
void pop();
void show();

int main(){
	int choice;
	
	while(1){
		cout<<endl<<"Perform operation on stack:"<<endl;
		cout<<"1. Push the element"<<endl<<"2. Pop the element"<< endl<< "3. show"<<endl;
		cout<<"Enter the choice= ";
		cin>> choice;
		switch (choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Invalid choice"<<endl;
				break;
		}
	}
}
void push(){
	int x;
	if(top== SIZE- 1){
		cout<<"Overflow"<<endl;
	}
	else{
		cout<<"Enter the element to push  ";
		cin>> x;
		top= top+1;
		arr[top]= x;
	}
}
void pop(){
	if(top== -1){
		cout<<"Underflow"<<endl;
	}
	else{
		cout<<"Popped element ="<< arr[top];
		top=top - 1;
	}
}
void show(){
	if(top== -1){
		cout<<"Underflow"<<endl;
	}
	else{
		cout<<"Elements present in stack= ";
		for(int i=top; i>=0; --i){
			cout<<"  "<<arr[i];
		}
	}
}
