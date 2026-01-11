#include<iostream>
#include<vector>
using namespace std;

int count(int num) {
    int count = 0;

    while(num!=0) {
        int ld = num%10;
        count++;
        num = num / 10;
    }
    return count;
}

int main(){
    int num;
    num = 32145;
       // 12543
    int n = count(num);
    vector<int> nums(n); 
    vector<int> ans(n);

    int i = 0;
    while(num!=0) {
        int ld = num%10;
        nums[i] = ld;
        i++;
        num = num / 10;
    }

    for(int i = 0; i < n; i++) {
        int elem = nums[i-1];
        ans[elem] = i+1;
    }

    
    for(int i = 1; i <=n; i++) {
        int elemt = nums[i-1];
        ans[elemt-1] = i; 
    }

    int st = 0;
    int end = n-1;
    while(st <= end) {
        swap(ans[st],ans[end]);
        st++;
        end--;
    }

    for(int i = 0; i < n; i++) {
        cout<<ans[i]<<" ";
    }

    cout<<endl;
    return 0;
}