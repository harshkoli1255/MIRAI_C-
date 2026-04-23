#include<iostream>
#include<vector>
using namespace std;

int gasStation(vector<int>gas, vector<int>cost) {
    int tGas = 0;
    int tCost = 0;
    int st = 0;
    int currGas = 0;

    for(int i = 0; i < gas.size(); i++) {
        tGas += gas[i];
        tCost += cost[i];
        currGas += gas[i] - cost[i];
        if(currGas < 0) {
            currGas = 0;
            st = i+1;
        }
    }
    if(tGas < tCost) return -1;
    return st;
}
int main(){
    vector<int>gas = {1,2,3,4,5};
    vector<int>cost = {3,4,5,1,2};
    cout<<gasStation(gas, cost)<<endl;
    return 0;
}