#include "Course.h"
using namespace std;

Course::Course(const string& nom, int credits)
    : name(nom), credits(credits)
{
}

void Course::afficher() const {
    cout << "Cours: " << name << ", credits: " << credits << endl;
}

void Course::setName(const string& nom) {
    this->name = nom;
}

void Course::setCredits(int c) {
    credits = c;
}