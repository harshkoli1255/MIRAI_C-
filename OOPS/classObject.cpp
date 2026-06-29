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

class Account {
    private:
        double balance;
        string password;

    public:
        string accountID;
        string username;
};
int main(){
    Teacher t1("Harsh", "AI/ML", 5000000);

    t1.setSalary(500000);
    cout<<t1.getSalary()<<endl;
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;



    return 0;
}