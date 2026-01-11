#include<iostream>
using namespace std;
int main(){
    vector<int>nums = {1, 2, 3, 4, 5};

    vector<int>::reverse_iterator it;

    for(it = nums.rbegin(); it < nums.rend(); it++) {
        cout<<*(it)<<" ";
    }
    
    cout<<endl;
    return 0;
}