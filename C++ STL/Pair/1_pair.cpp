#include<iostream>
using namespace std;
int main(){
    pair<int,int> numsPair = {1, 2};
    pair<string,int> snPair = {"harsh", 2};

    // cout<<numsPair.first<<endl;
    // cout<<snPair.first<<endl;


    pair<int, pair<char,int>> p = {1, {'a',3}};

    cout<<p.first<<endl;
    cout<<p.second.first<<endl;    
    cout<<p.second.second<<endl;    
    return 0;
}