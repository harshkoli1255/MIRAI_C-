#include<iostream>
using namespace std;

class Car {
    private:
        int price;
    public:
        char *name;
        int model;
        
        Car() {
            name = NULL;
        }
        Car(char *n, int p,int m) {
            name = new char[strlen(n+1)];
            strcpy(name, n);
            price = p;        
            model = m;
        }

        Car(Car &X) {
            name = new char[strlen(X.name)+1];
            strcpy(name, X.name);
            price=X.price;
            model=2015;
        }
        
};

int main(){
    
    return 0;
}