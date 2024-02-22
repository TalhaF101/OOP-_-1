#include <iostream>
using namespace std;
#include <string>

class Employee {
private:
    string name;
    int id;
    char gender;

public:

    void setName(string n) {
        name = n;
    }

    void setId(int i) {
        id = i;
    }

    void setGender(char g) {
        gender = g;
    }


    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    char getGender() {
        return gender;
    }


    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Gender: " << gender << endl;
    }
};

int main() {
    Employee emp1, emp2;

    string name;
    int id;
    char gender;


    cout << "Enter details for Employee 1:" << endl;
    cout << "Name: ";
    cin >> name;
    emp1.setName(name);

    cout << "ID: ";
    cin >> id;
    emp1.setId(id);

    cout << "Gender (M/F): ";
    cin >> gender;
    emp1.setGender(gender);


    cout << "\nEnter details for Employee 2:" << endl;
    cout << "Name: ";
    cin >> name;
    emp2.setName(name);

    cout << "ID: ";
    cin >> id;
    emp2.setId(id);

    cout << "Gender (M/F): ";
    cin >> gender;
    emp2.setGender(gender);


    cout << "\nEmployee 1 Details:" << endl;
    emp1.display();

    cout << "\nEmployee 2 Details:" << endl;
    emp2.display();

    return 0;
}
