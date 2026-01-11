#include<iostream>
using namespace std;
void pattern1(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n; j++) {
            if(j >= 2*i && j < n-1+i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
// i = 0, j= 0
// i = 1, j= 0, 1 
// i = 3, j= 0, 2, 3
// i = 4, j= 0, 2, 3, 4
// i = 5, j= 0, 2, 3, 4, 5
void pattern2(int n) {
    int num  = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j <= i) {
                cout<<num<<" ";
                num++;
            }
        }
        cout<<endl;
    }
}
void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j <= i) {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

void pattern4(int n){
    for (int i = 1; i <= n; i++) {
        int start = i % 2;  

        for (int j = 0; j < i; j++) {
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}

void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j <= i) {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern6(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n-i-1; j++){
            // if(j >= i) {
            cout<<"*"<<" ";
            // }
        }
        cout<<endl;
    }
}

void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==0 || i== n-1 || j==0 || j==n-1) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j>= n-i-1 && j<= n) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;   
    }
}

void pattern9(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*n-1; j++) {
            if(j>=n-1-i && j<=n-1+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern10(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j==i || j==n-1-i) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern11(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<"*"<<"    ";
        }
        cout<<endl;
    }
}

void pattern12(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(((n-1)/2) && ((j>=0 && j<=((n-1)/2)-i) || j>=((n-1)/2)+i && j<=n-1) || i>=(n-1)/2 && (j>=0 && j<=i-((n-1)/2)) || j>=(n-1)-(i-(n-1)/2) && j<=n-1){
                cout<<"*    ";
            }
            else{
                 cout<<"     ";
            }
        }
        cout<<endl;
    }
}
void pattern13(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern14(int n) {
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
void pattern15(int n) {
    int arr[] = {1,0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if( (i + j) % 2 == 0) {
                cout<<1;
            }
            else {
                cout<<0;
            }
        }
        cout<<endl;
    }
}

void pattern16(int n) {
    // A A A A 
    // B B B B 
    // C C C C 
    // D D D D
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

void pattern17(int n) {
    // A 
    // A B 
    // A B C 
    // A B C D
    for (int i = 0; i < n; i++){
        char ch  = 'A';
        for (int j = 0; j <= i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;   
    }
}

void pattern18(int n) {
    // A 
    // B C 
    // D E F 
    // G H I J 
    char ch  = 'A';
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;   
    } 
}

void pattern19(int n) {
    // A B C D E E D C B A 
    // A B C D D C B A 
    // A B C C B A 
    // A B B A 
    // A A
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n-i; j++){
            cout<<ch<<" ";
            ch++;
        }
        ch = ch -1; // again back to E
        for (int j = 0; j < n-i; j++){
            cout<<ch<<" ";
            ch--;
        }
        
        cout<<endl;
    }
}

void pattern20(int n) {
    // A B C D E D C B A 
    // A B C D C B A 
    // A B C B A 
    // A B A 
    // A
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n-i; j++){
            cout<<ch<<" ";
            ch++;
        }
        ch = ch - 2; // back to D
        for (int j = 0; j < n-i-1; j++){
            cout<<ch<<" ";
            ch--;
        }
        
        cout<<endl;
    }
}

void pattern21(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if((i<=(n-1)/2 && (j==0 || j==(n-1)/2 || i==(n-1)/2)) || j==(n-1)/2 || (i==0 && (j>=(n-1)/2)) || (i>=(n-1)/2 && j==n-1) || i==n-1 && (j>=0 && j<=(n-1)/2) ) {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void pattern22(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*n+5; j++){
            if(j==i+1 || j==2*n+3-i || j==n+2) {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}

void pattern23(int n) {
    for (int i = 0; i < 2*n-1; i++) {
        for (int j = 0; j < 2*n-1; j++) {
            if((i<n && (j>=((2*n-2)/2)-i && j<=((2*n-2)/2)+i)) || (i>=n && (j>i-n && j<2*n-2-(i-n)))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


void pattern24(int n) {
    for (int i = 0; i < 2*n-1; i++){
        for (int j = 0; j <= i; j++){
            if((i<=n-1) || (i>=n-1 && j<=(n-1)-i+n-1)){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
int main(){
    // pattern2(4);
    // pattern3(4);
    // pattern4(5);
    // pattern8(4);
    // pattern1(5);
    // pattern7(5);
    // pattern10(8);
    // pattern9(4);
    // pattern11(4);
    // pattern12(7);
    // pattern13(5);
    // pattern14(4);
    // pattern15(4);
    // pattern16(4);
    // pattern17(4);
    // pattern18(4);
    // pattern19(5);
    // pattern20(5);
    // pattern21(7);
    // pattern22(15);
    pattern23(7);
    // pattern24(3);

    return 0;
}