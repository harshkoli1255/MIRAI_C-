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

class List{
    public:
        Node* head;
        Node* tail;
        List() {
            head = tail = NULL;
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

        void printLL() {
            Node* temp = head;
            while(temp != NULL) {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

        Node* middle(Node*head) {
            Node* slow;
            Node* fast;

            slow = fast = head;

            while(fast!= NULL && fast->next != NULL) {
                slow = slow -> next;
                fast = fast->next->next;
            }
            return slow;
        }
        
        Node* bmiddle(Node*head, Node*tail) {
            Node* slow;
            Node* fast;
            slow = fast = head;
            while(fast!= tail && fast->next != tail) {
                slow = slow -> next;
                fast = fast->next->next;
            }
            return slow;
        }

        Node* binarySearch(Node* head, int target) {
            Node*st = head;
            Node*end = NULL;
            
            while(st != end) {
                Node* mid = bmiddle(st, end);

                if(mid->data == target) {
                    return mid;
                }
                else if(mid -> data < target) {
                    st  = mid->next;
                }
                else {
                    end = mid;
                }
            }
            return NULL;
        }
};

Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* head1, Node* head2) {
    Node* head = new Node(0);
    Node* tail = head;

    while(head1 && head2) {
        if(head1 -> data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        } else {
            tail->next = head2;
            head2 = head2->next;
            tail  = tail->next;
            tail->next = NULL;
        }
    }

    if(head1) {
        tail->next = head1;
    } else {
        tail->next = head2;
    }

    tail = head;
    head = head -> next;
    delete tail; 
    return head;
}


Node* mergeSort(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;
    
    left  = mergeSort(left);
    right = mergeSort(right);
    return merge(left, right);
}


int main(){
    List ll;
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(5);
    ll.push_back(7);
    ll.push_back(6);
    ll.push_back(4);

    Node* temp = mergeSort(ll.head);

    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    } cout<<endl;
    // ll1.printLL();
    return 0;
}