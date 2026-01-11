#include<iostream>
using namespace std;
int main(){
    
    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8};

    int len = arr.size();
    int k = 3;

    for (int i = 0; i < len; i = i + k) {
        int st = i; // 0 3 6
        int end = min(i+k-1, len-1); // (2 , 7) (5,7)

        while(st <= end) {
            swap(arr[st],arr[end]); 
            st++;
            end--;
        }
    }

    for (int i = 0; i < len; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}