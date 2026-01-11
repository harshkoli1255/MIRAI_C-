#include<iostream>
using namespace std;

int f_max(int curr_sum, int max_sum) {
    if(curr_sum > max_sum) {
        return curr_sum;
    }
    else {
        return max_sum;
    }
}
int main(){
    // Maximum sub Array Sum using Kadanes Algorithm

    // vector<int>arr = {3, -4, 5, 4, -1, 7, -8};
    vector<int>arr = {-12, 6, 3, -2, 4, -100};
    int n = arr.size();

    int curr_sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];
        // max_sum = f_max(curr_sum, max_sum);
        
        max_sum = max(curr_sum, max_sum);

        if(curr_sum < 0) {
            curr_sum = 0;
        }
    }

    cout<<max_sum<<endl;
    
    
    return 0;
}