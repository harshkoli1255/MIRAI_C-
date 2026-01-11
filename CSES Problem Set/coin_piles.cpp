// #include<iostream>
// using namespace std;
// int main(){
//     long long a,b;
//     long long t;
//     cin>>t;
//     long long count = 0;

    
//     while(count < t) {
//         cin>>a>>b;
//         while(a > 0 && b > 0) {
//             if((a > b && b < a) || a == b) {
//                 a = a - 2;
//                 b = b - 1;
//             }
//             else if((b > a && a >= 1) && (a < b && b>=2) ) {
//                 b = b - 2;
//                 a = a - 1;
//             }
//             else{
//                 break;
//             }
//         }
//         if(a==0 && b==0) {
//             cout<<"YES"<<endl;
//         }
//         else {
//             cout<<"NO"<<endl;
//         }
//         count++;
//     }


//     return 0;
// }

// below code is optimised
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        long long a,b;
        cin>>a>>b;
        // bigger = 2, smaller = 1
        long smaller = min(a,b); // 1
        long bigger = max(a,b);  // 2 

        if((a+b)%3==0 && smaller*2>=bigger) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
