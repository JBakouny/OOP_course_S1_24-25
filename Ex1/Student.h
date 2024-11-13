#pragma once
#include "Student_fwd.h"
#include <iostream>
#include <string>
#include "Course_fwd.h"
#include <vector>

class Student {
public:
    Student(const std::string& nom, int age);

    void add(const Course& c);

    void afficher() const;
private:
    std::string nom;
    int age;
    std::vector<const Course*> matieres;
};


