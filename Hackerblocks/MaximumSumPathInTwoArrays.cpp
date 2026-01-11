#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        int n;
        int m;
        cin>>n>>m;

        vector<int>arr1(n);
        vector<int>arr2(m);


        for(int i = 0; i < n; i++) {
            cin>>arr1[i];
        }

        for(int i = 0; i < m; i++) {
            cin>>arr2[i];
        }

        int i = 0;
        int j = 0;
    
        int sum1 = 0;
        int sum2 = 0;
        int ans = 0;
    
        while(i < n && j < n) {
            if(arr1[i] > arr2[j]) {
                sum2 += arr2[j++];
            }
            else if(arr2[j] > arr1[i]) {
                sum1+=arr1[i++];
            }
            else{
                ans += max(sum1,sum2)+arr1[i];
                i++;
                j++;
                sum1 = 0;
                sum2 = 0;
            }
        }
        while(i < n) {
            sum1 += arr1[i];
            i++;
        }
        while(j < m) {
            sum2 += arr2[j];
            j++;
        }
        ans += max(sum1,sum2);
        cout<<ans<<endl;
    }

    return 0;
}