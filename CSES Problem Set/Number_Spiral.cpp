#include <iostream>
#include <vector>
#include<iomanip>
using namespace std;

int main() {
    long long t, y, x;

    cin>>t;
    for (int k = 0; k < t; k++){
        cin>>y>>x;
        for (int i = 0; i < y; i++){
            for (int j = 0; j < x; j++) {
                if(x==y) {
                    cout<<(y*y) - (y-1)<<endl;
                    break;
                }
                else if((y > x) && y%2!=0) {
                    cout<<(y*y) - (y-1) -y + x<<endl;
                    break;
                }
                else if((y > x) && y%2==0) {
                    cout<<(y*y) - (y-1) + (y-x)<<endl;
                    break;
                }
                else if(x > y && x%2!=0) {
                    cout<<( ((y + (x-y)) * (y + (x-y))) - (x-1) + (x-y))<<endl;
                    break;
                }
                else if(x > y && x%2==0) {
                    cout<<( (y+(x-y))*(y+(x-y)) ) - (x-1) - (x-y)<<endl;
                    break;
                }
            }
            break;
        }
    }


    return 0;
}
