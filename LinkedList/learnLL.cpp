#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            this->data = val;
            next = NULL;
        }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }
    
    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        newNode->next = head; // (*newNode).next = head;
        head = newNode;
    }

    void printLL() {
        Node* temp = head;
        while(temp!= NULL) {
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front() {
        if(head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }

    void pop_back() {
        if(head == NULL) {
            return;
        }
        Node* temp = head;
        while(temp -> next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int idx) {
        if(idx < 0) {
            return;
        }
        if(idx == 0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i = 0; i < idx-1; i++) {
            if(temp==NULL) {
                return;
            }
            temp = temp -> next;
        }

        Node* newNode = new Node(val);
        newNode -> next = temp->next;
        temp->next = newNode;        
    }

    void search(int val) {
        Node* temp = head;
        while(temp != NULL) {
            if(temp->data == val) {
                cout<<"exist"<<endl;
                return;
            }
            temp = temp->next;
        }
        cout<<"Not Exist"<<endl;
    }

    void reverseLL() {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    }

    Node* findMiddle() {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout<<(ll.findMiddle()->data)<<endl;


    return 0;
}