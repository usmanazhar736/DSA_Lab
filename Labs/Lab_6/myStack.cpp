#include<iostream>
const int max_v=100;
using namespace std;
class Stack{
	private:
		int top;
		int arr[max_v];
	public:
		Stack()
		{
			top=-1;
		}
		bool isEmpty()
		{
			return top == -1;
		}
		bool isFull()
		{
			return top == max_v-1;
		}
		void push(int data)
		{
			if(isFull())
			{
				cout<<"stack is full,can't push"<<endl;
				return;
			}
				arr[++top]=data;
		}
		void pop()
		{
			if(isEmpty())
			{
				cout<<"stack is empty ,can't pop"<<endl;
				return;
			}
			--top;
		}
		void Display()
		{
			if(isEmpty())
			{
				cout<<"stack is empty ,there is no item to view"<<endl;
				return;
			}
			int temp=top;
			cout<<"values in stack are"<<endl;
			while(temp!=-1)
			{
				cout<<arr[temp]<<endl;
				--temp;
			}
		}
		
};
int main()
{
Stack s;
int data;
cout<<"enter values in stack "<<endl;

for(int i=6;i>-1;i--)
{
 cin>>data;
 s.push(data);
}
s.pop();
s.Display();

return 0;	
}
