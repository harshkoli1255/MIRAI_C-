#include<iostream>
using namespace std;

int main(){
    vector<int>prices = {1, 4, 2};
    int n = prices.size();

    int maxProfit = 0; // 4 
    int bestBuy = prices[0];  // 1

    for (int i = 1; i < n; i++) { // 2 3
        if(prices[i] > bestBuy) { // 1 > 7, 5 > 1, 3 > 1
            maxProfit = max(maxProfit, prices[i] - bestBuy); // 4 2
        }
        bestBuy = min(bestBuy, prices[i]); // m-> 7, 1
    }

    cout<<maxProfit<<endl;
    

    return 0;
}