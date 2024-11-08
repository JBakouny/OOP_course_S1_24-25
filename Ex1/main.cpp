#include "Course.h"
#include "Student.h"

int main()
{
    Course progPar = { "ProgPar", 4 };
    Course progFun{ "ProgFun", 4 };
    Course poo("POO", 6);

    Student jean = { "Jean", 20 };
    Student pierre { "Pierre", 21 };

    jean.add(poo);
    jean.add(progPar);

    pierre.add(poo);
    pierre.add(progFun);

    jean.afficher();
    pierre.afficher();

    poo.setName("OOP");

    jean.afficher();
    pierre.afficher();
};