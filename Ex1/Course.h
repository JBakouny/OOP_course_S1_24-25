#pragma once
#include "Course_fwd.h"
#include <iostream>
#include <string>
#include <vector>
#include "Student_fwd.h"

class Course {
public:
    Course(const std::string& name, int credits = 4);

    void afficher() const;

    void add(const Student& student);

    void setName(const std::string& name);

    void setCredits(int c);

private:
    std::string name;
    int credits;
    std::vector<const Student*> students;
};


