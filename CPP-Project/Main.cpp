#include <iostream>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    person(string n, int a) : name(n), age(a) {}

    string GetName() { return name; }
    int GetAge() { return age; }
};

class student : private person {
private:
    double Avg;

public:
    student(string n, int a, double avg) : person(n, a), Avg(avg) {}

    double GetAvg() { return Avg; }
    string GetStudentName() { return name; }
};

class teacher : private person {
private:
    double salary;

public:
    teacher(string n, int a, double s) : person(n, a), salary(s) {}

    double GetSalary() { return salary; }
    string GetTeacherName() { return name; }
    int GetTeacherAge() { return age; }
};

int main() {
    person p("Ali", 30);
    cout << "Person Name: " << p.GetName() << endl;
    cout << "Person Age: " << p.GetAge() << endl;

    student s("Sara", 20, 17.5);
    cout << "Student Name: " << s.GetStudentName() << endl;
    cout << "Student Avg: " << s.GetAvg() << endl;

    teacher t("Reza", 40, 5000);
    cout << "Teacher Name: " << t.GetTeacherName() << endl;
    cout << "Teacher Age: " << t.GetTeacherAge() << endl;
    cout << "Teacher Salary: " << t.GetSalary() << endl;

    return 0;
}
