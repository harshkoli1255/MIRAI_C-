#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

Node* convertArr2LL(vector<int>&arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node*head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int lengthofLL(Node*head) {
    int length = 0;
    Node* temp = head;
    
    while(temp) {
        length++;
        temp = temp->next;
    }
    return length;
}

int checkIfPresent(Node*head, int val) {
    Node* temp = head;

    while(temp) {
        if(temp->data == val) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

Node* removeHead(Node* head) {
    if(head == NULL) {
        return head;
    }
    Node* temp = head;
    head  = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    Node* temp = head;
    while(temp -> next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removeKth(Node* head, int k) {
    if(head == NULL) {
        return head;
    }
    if(k == 1) {
        Node*temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp!= NULL) {
        count++;
        if(count == k) {
            prev->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeEle(Node* head, int ele) {
    if(head == NULL) {
        return head;
    }
    if(head->data == ele) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = nullptr;

    while(temp != NULL) {
        if(temp->data == ele) {
            prev->next = temp->next;
            free(temp) ;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


Node* insertAtK(Node* head, int k, int val) {
    if (head == nullptr) {
        return new Node(val);
    }

    if (k == 1) {
        Node* newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    for (int i = 0; i < k - 2; i++) {
        if (temp -> next == nullptr) {
            return head;
        }
        temp = temp->next;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

Node* insertBeforeValueK(Node* head, int val, int ele) {
    if (head == nullptr) {
        return nullptr;
    }
    if(head->data == val) {
        Node* newNode = new Node(ele);
        newNode->next = head;
        head = newNode;
        return head;        
    }
    Node* temp = head;
    Node* prev = nullptr;

    Node* newNode = new Node(ele);
    while(temp != NULL) {
        if(temp->data == val) {
            prev->next = newNode;
            newNode->next = temp;
            return head;
        }
        prev = temp;
        temp  = temp->next;
    }
    delete newNode;
    return head;
}

// Iterative 
Node* reverseLinkedList(Node*head) {
    Node* temp = head;
    Node* prev = nullptr;
    Node* front = nullptr;
    while(temp != nullptr) {
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

// Recursive
Node* reverseRecursive(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* newHead = reverseRecursive(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead;
}

int searchRecursive(Node* head, int key) {
    if(head == nullptr) {
        return -1;
    }
    if(head->data == key) {
        return 0;
    }
    int idx = searchRecursive(head->next, key);
    if(idx == -1) {
        return -1;
    }
    return idx+1;
}

int sizeOfLL(Node*head) {
    int sz = 0;
    Node* temp = head;
    while(temp != NULL) {
        sz++;
        temp = temp->next;
    }
    return sz;
}

Node* deleteNthFromEnd(Node* head, int k) {
    int sz = sizeOfLL(head);
    if(sz == k) {
        Node* temp = head;
        head = head->next;           
        delete temp;
        return head;
    }
    int fromStart = sz-k;
    Node*temp = head;
    Node* prev = nullptr;
    while(fromStart != 0) {
        prev = temp;
        temp = temp->next;
        fromStart--;
    }
    prev->next = prev->next->next;
    delete temp;
    return head;
}

Node* deleteNthFromEnd_Slow_Fast(Node*head, int k) {
    Node*fast = head;
    Node*prev = nullptr;
    int fromStart = k;
    while(fromStart != 0) {
        fast = fast->next;
        fromStart--;
    }

    if(fast == nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    prev = head;
    while(fast != nullptr && fast->next != NULL) {
        prev = prev->next;
        fast = fast->next;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    delete temp;
    return head;
} 
int main(){
    vector<int>arr = {2, 5, 8 ,7};
    Node* head = convertArr2LL(arr);
    // head = removeKth(head, 3);
    // head = removeEle(head, 5);
    // head = insertAtK(head, 2, 1);
    // head = insertBeforeValueK(head, 10, 0);
    // int idx = searchRecursive(head, 5);
    // head = reverseLinkedList(head);
    // head = deleteNthFromEnd(head, 2);
    // head = deleteNthFromEnd_Slow_Fast(head, 2);
    head = reverseLinkedList(head);
    // head = reverseRecursive(head);
    print(head);
    return 0;
}

