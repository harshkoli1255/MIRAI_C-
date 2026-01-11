#include<iostream>
using namespace std;
int main(){
    vector<pair<int,int>> vec = {{1,2}, {2,3}, {3,4}, {4,5}};

    vec.push_back({6,7});

    vec.emplace_back(8,9); // in-place object ko create kar taa hai at the time of insertion


    // for(pair<int, int> p : vec) {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    
    // we can also use the auto
    for(auto p : vec) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}