#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
    
        int n,m; // the number of rickshaws and cabs Ramu is going to use.
        cin>>n>>m;
        
        // the number of times Ramu is going to use the rickshaw number i
        vector<int>rickshaw(n);
        // the number of times Ramu is going to use the cab number i.
        vector<int>cab(m);
    
        for (int i = 0; i < n; i++) {
            cin >> rickshaw[i];
        } 
        for (int i = 0; i < m; i++) {
            cin >> cab[i];
        }
        
        int rickshawCost = 0;
        
        for (int i = 0; i < n; i++){
            rickshawCost += min(rickshaw[i] * c1, c2);
        }
        
        rickshawCost = min(rickshawCost, c3);
    
        int cabCost = 0;
        for(int i = 0; i < m; i++) {
            cabCost += min(cab[i]*c1,c2);
        }
    
        cabCost = min(cabCost, c3);
        int totalCost = min(rickshawCost+cabCost,c4);
        cout<<totalCost<<endl;
    }

    return 0;
}