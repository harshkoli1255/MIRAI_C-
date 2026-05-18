#include<iostream>
using namespace std;

class Teacher {
    private:
        double salary;

    public:
        string name;
        string dept;
        string subject;

        Teacher(string name, string dept, double subject) {
            this->name = name;
            this->dept = dept;
            this->salary = subject;
        }

        // copy Constructor

        Teacher(Teacher &orgObj) {
            cout<<"I'm custom copy constructor"<<endl;
            this->name = orgObj.name;
            this->dept = orgObj.dept;
            this->salary = orgObj.salary;
            this->subject = orgObj.subject;
        }

        void changeDept(string newDept) {
            dept = newDept;
        }


        // setter
        void setSalary(int s) {
            salary = s;
        }
        // getter
        double getSalary() {
            return salary;
        }
};
int main(){

    Teacher t1("Harsh", "AI/ML", 5000000);

    Teacher t2(t1); // custom copy constructor - invoken

    cout<<t2.name<<endl;
    
    return 0;
}