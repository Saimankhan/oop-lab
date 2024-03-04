#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int id;
    string name;
    Student(int id,  string name) : id(id), name(name) {}


    void display() {
        cout << "ID: " << id << "\nName: " << name << endl;
    }
};

class Classmate : public Student {
public:
    string studentClass;
    Classmate(int id, string name,  string studentClass)
        : Student(id, name), studentClass(studentClass) {}

    void displayClassmate() {
        display();  
        cout << "Class: " << studentClass << endl;
    }
};

int main() {

    Classmate student1(1, "JohnDoe", "ClassA");
    student1.displayClassmate();

    return 0;
}
