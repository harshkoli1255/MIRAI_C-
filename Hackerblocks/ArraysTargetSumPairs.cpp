#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>nums {1, 3, 4, 2, 5};
    int n = nums.size();

    int target = 5;

    sort(begin(nums), end(nums));

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if( (nums[i] + nums[j]) == target) {
                cout<<nums[i]<<" and "<<nums[j];
                cout<<endl;
            }
        }
    }


    return 0;
}
