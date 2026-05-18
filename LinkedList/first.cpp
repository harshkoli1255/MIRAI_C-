#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* next = NULL;
        
        node() {
            next = NULL;
        }

        void printLinkedList(node *head) {
            while(!head==NULL) {
                cout<<head->data<<" ";
                head = head -> next;
            }
        }
}; 

int main(){
    node n1, n2, n3;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    n1.next = &n2;
    n2.next = &n3;
    
    node * head = &n1;
    while(head!=NULL) {
        cout<<head->data<<" ";
        head = head -> next;
    }
    cout<<endl;
    return 0;
}