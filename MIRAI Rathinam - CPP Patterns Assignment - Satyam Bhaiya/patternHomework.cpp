#include<iostream>
using namespace std;

void hollow_diamond_pattern(int n) {
    if(n>0 && n<10) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if(i<=((n-1)/2) && ((j>=0 && j<=((n-1)/2)-i) || j>=((n-1)/2)+i && j<=n-1) || i>=(n-1)/2 && (j>=0 && j<=i-((n-1)/2)) || j>=(n-1)-(i-(n-1)/2) && j<=n-1){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
        }
}

void PatternDoubleSidedArrow(int n) {
    // int leftBottomPos = 0;
    // int startBottomRight = n+2;
    // int endBottomRight = 2*(n-1);
    // for (int i = 0; i < n; i++) {
    //     if(i>(n-1)/2) {
    //         leftBottomPos+=2;
    //         startBottomRight--;
    //         endBottomRight-=2;
    //     }

    //     int leftBottomNum = n-i;
    //     int rightTop = 1;
    //     int leftTop = i+1;
    //     for (int j = 0; j <= 2*n-2; j++) {
    //         if((i<=((n-1)/2) && ((j>=(n-1)-2*i && j<=n-1-i) || (j>=n-1+i && j<=(n-1)+2*i))) || (i>(n-1)/2 && ((j>=leftBottomPos && j<=i) || (j>=startBottomRight && j<=endBottomRight)))){
    //             // cout<<"*";
    //             if(i<=((n-1)/2) && (j>=n-1+i && j<=(n-1)+2*i)) {
    //                 cout<<rightTop<<" ";
    //                 rightTop++;
    //             }
    //             else if(i<=((n-1)/2) && (j>=(n-1)-2*i && j<=n-1-i)) {
    //                 cout<<leftTop<<" ";
    //                 leftTop--;
    //             }
    //             else if(i>(n-1)/2 && (j>=leftBottomPos && j<=i)) {
    //                 cout<<leftBottomNum<<" ";
    //                 leftBottomNum--;
    //             }
    //             else if(i>(n-1)/2 && (j>=startBottomRight && j<=endBottomRight)) {
    //                 cout<<"*"<<" ";
  
    //             }
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i <= (n-1)/2; i++){
        int num1 = i+1;
        for (int j = 0; j < n-1-(2*i); j++){
            cout<<"  ";
        }

        for (int j = 0; j <=i; j++){
            cout<<num1<<" ";
            num1--;
        }

        for (int j = 0; j < 2*i-1; j++) {
            cout<<"  ";
        }
        if(i>0){
            for (int j = 0; j <=i; j++){
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = ((n - 1) / 2) -1; i >= 0; i--) {
        int num1 = i + 1;

        for (int j = 0; j < n - 1 - (2 * i); j++) {
            cout<<"  ";
        }

        for (int j = 0; j <= i; j++) {
            cout<<num1<<" ";
            num1--;
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            cout<<"  ";
        }

        if (i > 0) {
            for (int j = 0; j <= i; j++) {
                cout<<j+1<<" ";
            }
        }

        cout << endl;
    
    }
}

void ManmohanLovesPatternsI(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if(i%2==0) {
               cout<<1; 
            }
            if(i%2==1) {
                if(j==0 || j==i) {
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
}
void ManmohanLovesPatternsII(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if(i==0) {
                cout<<1;
            }
            else if(j==0 || j==i){
                cout<<i;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

void HalfPyramidPattern(int n) {
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void StarPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j>= n-i-1 && j<= n) {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;   
    }
}

// 1 2 3 4 5 
// 2 2 3 4 5 
// 3 3 3 4 5 
// 4 4 4 4 5 
// 5 5 5 5 5

void SquarePattern(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if(j<=i){
                int num = i+1;
                cout<<num<<" ";
            }   
            else{
                cout<<j+1<<" ";
            }

        }
        cout<<endl;
    }
}

void DownwardTrianglePattern(int n) {
    // * * * * * * 
    //  * * * * * 
    //   * * * * 
    //    * * * 
    //     * * 
    //      *
    for (int i = 0; i < n; i++) {
        int count = i;
        for (int j = 0; j <= 2*n-2-i; j++) {
            if(j==count){
                cout<<"*";
                count = count+2;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void SquarePyramidPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout<<(j+1)*(j+1)<<" ";
        }
        cout<<endl;
    }
}

void PatternNumbersAndStars2(int n) {
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <n; j++) {
            if(j<=i){
                cout<<num;
                num++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void PatternTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int num1 = i+1;
        int num2 = 2*i;
        for (int j = 0; j <= 2*n-2; j++) {
            if(j>=n-1-i && j<=n-1) {
                cout<<num1<<"    ";
                num1++;
            }
            else if((j>=n-1 && j<=n-1+i)){
                cout<<num2<<"    ";
                num2--;
            }
            else{
                cout<<"     ";
            }
        }
        cout<<endl; 
    }
}
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <=n; i++){
        fact *=i;
    }
    return fact;
}
int nCr(int n, int r) {
    int nFactorial = factorial(n);
    int rFactorial = factorial(r);
    int nMinusRFactorial = factorial(n-r);
    return (nFactorial)/(rFactorial*nMinusRFactorial);
}
void PascalTriangle(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++) {
            cout<<nCr(i,j)<<"    ";
        }
        cout<<endl;
    }
}
void FibonacciPattern(int n) {
    int a = 0, b = 1;
    vector<int>series;
    for (int i = 0; i < (n*(n+1))/2; i++) {
        series.push_back(a);
        int nextTerm = a + b;
        a = b; 
        b = nextTerm;
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout<<series[index]<<"    ";
            index++;
        }
        cout<<endl;
    }   
}

int main() {
    // hollow_diamond_pattern(17);
    PatternDoubleSidedArrow(7);
    // ManmohanLovesPatternsI(6);
    // ManmohanLovesPatternsII(5);
    // HalfPyramidPattern(5);
    // StarPattern(5);
    // SquarePattern(5);
    // DownwardTrianglePattern(6);
    // SquarePyramidPattern(5);
    // PatternNumbersAndStars2(7);
    // PatternTriangle(4);  
    // PascalTriangle(6);
    // FibonacciPattern(4);

	return 0;
}