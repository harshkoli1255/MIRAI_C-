#include<iostream>
using namespace std;
int main(){
    vector<int>nums = {1, 2, 3, 6, 4, 5};
    int n = nums.size();

    int pivot = -1;

    for(int i = n-2; i >=0; i--) {
        if(nums[i] < nums[i+1]) {
            pivot = i;
            break;
        }
    }

    if(pivot == -1) {
        reverse(nums.begin(), nums.end());
        return 0;
    }

    for(int i = n-1; i > pivot; i--) {
        if(nums[i] > nums[pivot]) {    
            swap(nums[i],nums[pivot]); 
            break;
        }
    }

    // reverse from pivot +1 to n-1;

    int i = pivot +1;
    int j = n-1; 

    while(i <=j) {
        swap(nums[i++], nums[j--]);
    }

    for(int i = 0; i < n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}

