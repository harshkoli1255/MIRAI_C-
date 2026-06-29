#include<iostream>
using namespace std;
class Student {
    private :
        int studentID;
        string name;
        string address;
        string branch;
        bool isHosteler;

    public :
        // setter funtions
        void setID(int i) {
            if(i < 0) {
                cout<<"Error ID cannot be neagtive. Setting ID";
                studentID = 0;
            }
            else {
                studentID = i;
            }
        }
        void setName(string name) {
            this->name = name;
        }
        void setaddress(string address) {
            this->address = address;
        }
        void setName(string branch) {
            this->branch = branch;
        }
        void  setIsHosteler(bool isHosteler) {
            this->isHosteler = isHosteler;
        }
        //get Funtion  
        
};
int main(){

    
    
    
    return 0;
}