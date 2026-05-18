#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int studentID;
    string name;
    string address;
    string branch;
    bool isHosteler;

public:
    Student() {
        setStudentID(0);
        name = "Not Provided";
        address = "Not Provided";
        branch = "Not Provided";
        isHosteler = false;

        cout << "Default Constructor Called" << endl;
    }
    Student(int studentID, string name) {
        setStudentID(studentID);
        this->name = name;
        address = "Not Provided";
        branch = "Not Provided";
        isHosteler = false;
    }

    Student(int studentID, string name, string branch) {
        setStudentID(studentID);
        this->name = name;
        this->branch = branch;
        address = "Not Provided";
        isHosteler = false;
    }

    Student(int studentID, string name, string address, string branch, bool isHosteler) {
        setStudentID(studentID);
        this->name = name;
        this->address = address;
        this->branch = branch;
        this->isHosteler = isHosteler;
    }

    Student(const Student &other) {
        studentID = other.studentID;
        name = other.name;
        address = other.address;
        branch = other.branch;
        isHosteler = other.isHosteler;
        cout << "Copy Constructor Called" << endl;
    }

    ~Student() {
        cout << "The Record for " << name << " is being destroyed" << endl;
    }

    void setStudentID(int id) {
        if (id < 0) {
            cout << "Error: ID cannot be negative. Setting ID to 0." << endl;
            studentID = 0;
        } else {
            studentID = id;
        }
    }

    void setName(string name) {
        this->name = name;
    }

    void setAddress(string address) {
        this->address = address;
    }

    void setBranch(string branch) {
        this->branch = branch;
    }

    void setIsHosteler(bool isHosteler) {
        this->isHosteler = isHosteler;
    }

    int getStudentID() {
        return studentID;
    }

    string getName() {
        return name;
    }

    string getAddress() {
        return address;
    }

    string getBranch() {
        return branch;
    }

    bool getIsHosteler() {
        return isHosteler;
    }
    void displayProfile() {
        cout << "Student ID : " << studentID << endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Branch : " << branch << endl;

        if(isHosteler) {
            cout<<"Status :"<<"isHosteler"<<endl;
        }
        else {
            cout<<"Status: "<<"Day Scholar"<<endl;
        }
    }
};

int main() {

    Student s1;
    s1.setStudentID(-105);

    Student s2(101, "Rahul");

    Student s3(102, "Priya", "Bangalore", "CSE", true);

    Student s4 = s3;
    s1.displayProfile();
    s2.displayProfile();
    s3.displayProfile();
    s4.displayProfile();

    return 0;
}