#pragma once
#include <iostream>
#include <string>
#include <vector>

class Course {
public:
    Course(const std::string& name, int credits);

    void afficher() const;

    void setName(const std::string& name);

    void setCredits(int c);

private:
    std::string name;
    int credits;
};


