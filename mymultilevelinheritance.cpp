#include <iostream>
using namespace std;

class Student {
protected:
    int roll;

public:
    Student(int roll) : roll(roll) {}
    void getroll() {
        cout << "Roll: " << roll << endl;
    }
};

class Marks : public Student {
protected:
    int math;
    int physics;

public:
    Marks(int roll, int math, int physics) : Student(roll), math(math), physics(physics) {}
    void getmarks() {
        cout << "Math: " << math << endl;
        cout << "Physics: " << physics << endl;
    }
};

class Results : public Marks {
public:
    Results(int roll, int math, int physics) : Marks(roll, math, physics) {}
    void displayResults() {
        getroll();
        getmarks();
        cout << "Results: " << (math + physics) / 2.0 << endl;
    }
};

int main() {
    Results n(10, 40, 50);
    n.displayResults();

    return 0;
}
