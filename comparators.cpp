#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool fun(int a, int b) {
    if(a > b) return true; // Descending order
    return false;
}

bool fun2(pair<int, int>p1, pair<int, int>p2) {
    if(p1.first > p2.first) {
        return true;
    }
    if(p1.first == p2.first) {
        if(p1.second > p2.second) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}

int main(){
    // vector<int>nums = {3,4,1,5,2,9,8,5};
    // int n = nums.size();
    // sort(nums.begin(), nums.end(), fun);
    
    // now on pairs
    
    vector<pair<int, int>> vec = {{2,4}, {2,3}, {3,1}};
    sort(vec.begin(), vec.end(), fun2); // it will sort on the basic of the first elements will first elements are equal then it will compare the second element


    for(auto &i : vec) {
        cout<<i.first<<" : "<<i.second;
        cout<<endl;
    }
    return 0;
}