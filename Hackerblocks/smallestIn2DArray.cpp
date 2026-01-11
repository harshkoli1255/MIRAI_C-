#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>nums(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>nums[i][j];
        }
    }

    int smallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(nums[i][j] < smallest) {
                smallest = nums[i][j];
            } 
        }
    }

    cout<<smallest<<endl;

    return 0;
}
