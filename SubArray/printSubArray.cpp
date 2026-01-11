#include<iostream>
using namespace std;
int main(){
    
    vector<int>arr = {1, 2, 3, 4};
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int start = i;
        for (int j = i; j < n; j++) {
            int end = j;
            for (int k = start; k <= end; k++) {
                cout<<arr[k];
                sum+=arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<sum<<endl;
    
    return 0;
}