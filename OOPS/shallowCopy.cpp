#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        double *cgpaPtr;
    
    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    } 

    void getInfo() {
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }
};
int main(){
    Student s1("Harsh Koli", 9.8);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.9;
    s1.getInfo();
    return 0;
}