#include "Student.h"
#include "Course.h"
using namespace std;


Student::Student(const string& nom, int age)
    : nom(nom), age(age)
{}

void Student::add(const Course& c) {
    matieres.push_back(&c);
}

void Student::afficher() const {
    cout << nom << endl;
    cout << "age: " << age << " ans" << endl;
    cout << "Matieres:" << endl;
    for (const Course* c : matieres) {
        c->afficher();
    }
    cout << endl;
}