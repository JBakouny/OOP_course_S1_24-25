#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Cours {
    string nom;
    int credits;
};


void afficher(const Cours& c) {
    cout << "Cours: " << c.nom << ", credits: " << c.credits << endl;
}

struct Etudiant {
    string nom;
    int age;
    vector<Cours> matieres;
};

void afficher(const Etudiant& e) {
    cout << e.nom << endl;
    cout << "age: " << e.age << " ans" << endl;
    cout << "Matieres:" << endl;
    for (size_t i = 0; i < e.matieres.size(); ++i) {
        afficher(e.matieres[i]);
    }
    cout << endl;
}

int main()
{
    Cours poo { "POO", 6 };

    Cours progPar = { "ProgPar", 4 };

    Cours progFun;
    progFun.nom = "ProgFun";
    progFun.credits = 4;

    vector<Cours> matieresJean = { poo, progPar };
    Etudiant jean = { "Jean", 20, matieresJean };

    Etudiant pierre;
    pierre.nom = "Pierre";
    pierre.age = 21;

    pierre.matieres.push_back(poo);
    pierre.matieres.push_back(progFun);

    afficher(jean);
    afficher(pierre);

    poo.nom = "OOP";

    afficher(jean);
    afficher(pierre);
}