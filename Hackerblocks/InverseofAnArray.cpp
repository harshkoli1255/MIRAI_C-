#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>a {0, 2, 4, 1, 3};
    int n = a.size();
    
    vector<int>ans(n);
    
    for(int i = 0; i < n; i++) {
        int elme = a[i];
        // ans[a[i]] = i; // we can also write it like this
        ans[elme] = i;
    }
    for(int i = 0; i < n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
