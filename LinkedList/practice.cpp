#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int newData) {
        data = newData;
        next = nullptr;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = nullptr;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printLL() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteHead() {
        if (head == nullptr) return;

        Node* temp = head;
        head = head->next;

        if (head == nullptr) {
            tail = nullptr;
        }
        delete temp;
    }

    void removeTail() {
        if (head == nullptr) return;

        if (head->next == nullptr) {
            delete head;
            head = tail = nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        tail = temp;
    }

    void deleteK(int k) {
        if(k==1) {
            deleteHead();
            return;
        }
        Node* temp = head;
        while(k <= k-1) {

            k++;
        }
    }
};

int main() {
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(9);
    ll.push_back(10);

    ll.deleteHead();
    ll.removeTail();

    ll.printLL();

    return 0;
}