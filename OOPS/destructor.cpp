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

        ~Student()  {
            cout<<"Hi, I delete Everything\n";
            delete cgpaPtr;
        }

        void getInfo() {
            cout<<"name: "<<name<<endl;
            cout<<"cgpa: "<<*cgpaPtr<<endl;
        }
};
int main(){
    Student s1("Harsh Koli", 9.8);
    s1.getInfo();
    return 0;
}