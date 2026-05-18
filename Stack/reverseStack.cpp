#include<iostream>
#include<stack>
using namespace std;

void insertToBottom(stack<int>&st, int top) {
    if(st.empty()) {
        st.push(top);
        return;
    }
    int topEle = st.top();
    st.pop();
    insertToBottom(st, topEle);
    st.push(topEle);
}

void reverseStack(stack<int>&st) {
    if(st.empty()) {
        return;
    }
    int top = st.top(); 
    st.pop();
    reverseStack(st);
    insertToBottom(st, top);
}

int main(){
    stack<int>st;
    st.push(1); // 4
    st.push(2); // 3
    st.push(3); // 2
    st.push(4); // 1

    reverseStack(st);
    
    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}