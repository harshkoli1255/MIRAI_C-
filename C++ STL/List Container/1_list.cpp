// Implemented as a doubly linked list
// size, erase, clear, begin, end, rbegin, rend, insert, front, back
// Data is stored in non-contiguous memory, allowing fast insertion and deletion anywhere in the list (beginning, middle, or end).

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);

    l.emplace_back(6);
    for(auto &i : l) {
        cout<<i<<" ";
    }
    cout<<endl;

    

    return 0;
}
