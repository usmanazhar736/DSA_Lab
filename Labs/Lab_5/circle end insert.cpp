#include <iostream>
using namespace std;
class Node {
private:
    int data;
    Node* next;

public:
    Node* head;

    Node() 
    {
        head = NULL;
    }

    void insert_endd(int n) 
    {
        if (head == NULL) 
	{
            head = new Node();
            head->data = n;
            head->next = head;  // Circular: Point to itself
        } 
	else 
	{
            Node* p, * ptr;
            ptr = head;
            while (ptr->next != head) 
	    {
                ptr = ptr->next;
            }

            p = new Node();
            p->data = n;
            p->next = head;
            ptr->next = p;
        }
    }

void dispp() {
    if (head == NULL) {
        cout << "No data is in the list." << endl;
        return;
    }

    Node* ptr = head;
    do {
        cout << ptr->data <<"";
        ptr = ptr->next;
    } while (ptr != head);
    cout<<endl;
}
};

int main()
{
	Node obj;
	int v;
	cout << "\nEnter the value to insert: ";
	cin >> v;
	obj.insert_endd(v);
	cin >> v;
	obj.insert_endd(v);
	cin >> v;
	obj.insert_endd(v);
		obj.dispp();
}
