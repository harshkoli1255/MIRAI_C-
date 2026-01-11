#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;

    while(T--) {
        int n;
        cin>>n;
    
        vector<int>price(n);
    
        for(int i = 0; i < n; i++) {
            cin>>price[i];
        }
    
        int M;
        cin>>M;
    
        sort(price.begin(), price.end());
        int min = INT_MAX;
        int price1 = 0;
        int price2 = 0;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if((price[i] + price[j]) == M) {
    
                    int num = price[j] - price[i];
    
                    if(num < min) { 
                        min = num;
                        price1 = price[i];
                        price2 = price[j];
                    }
                }
            }
        }
        cout<<"Deepak should buy roses whose prices are "<<price1<<" "<<"and "<<price2<<"."<<endl;

    }
    
    return 0;
}