#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

Node* array2LL(vector<int>&nums) {
    Node* head = new Node(nums[0]);
    Node* mover = head;

    for(int i = 1; i < nums.size(); i++) {
        Node* temp = new Node(nums[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head) {
    Node* temp = head;

    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* findMiddleLL(Node*head) {
    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL && fast->next != NULL) {
        slow = slow -> next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){

    vector<int>nums = {1, 2, 3, 4, 5, 6, 7};
    Node* head = array2LL(nums);
    
    Node* middle = findMiddleLL(head);

    cout<<middle->data<<endl;

    return 0;
}