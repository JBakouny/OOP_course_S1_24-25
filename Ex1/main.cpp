#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cours {
public:
    void afficher() const {
        cout << "Cours: " << nom << ", credits: " << credits << endl;
    }

    void setNom(const string & nom) {
        this->nom = nom;
    }

    void setCredits(int c) {
        credits = c;
    }

private:
    string nom;
    int credits;
};




struct Etudiant {
    string nom;
    int age;
    vector<Cours> matieres;
};

//void afficher(const Etudiant& e) {
//    cout << e.nom << endl;
//    cout << "age: " << e.age << " ans" << endl;
//    cout << "Matieres:" << endl;
//    for (size_t i = 0; i < e.matieres.size(); ++i) {
//        afficher(e.matieres[i]);
//    }
//    cout << endl;
//}

int main()
{

    Cours progFun;
    progFun.setNom("ProgFun");
    progFun.setCredits(4);
    progFun.afficher();

    Cours poo;
    poo.setNom("POO");
    Cours progPar;
    progPar.setNom("ProgPar");
    progPar.setCredits(4);

    poo.afficher();
    progPar.afficher();
    progFun.afficher();
};

  /*  Cours progPar = { "ProgPar", 4 };



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
    afficher(pierre);*/