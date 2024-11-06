#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cours {
public:
    Cours(const string& nom, int credits)
        : nom(nom), credits(credits)
    {
    }

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




class Etudiant {
public:
    Etudiant(const string& nom, int age)
        : nom(nom), age(age)
    {}

    void add(const Cours& c) {
        matieres.push_back(c);
    }

    void afficher() const {
        cout << nom << endl;
        cout << "age: " << age << " ans" << endl;
        cout << "Matieres:" << endl;
        for (const auto& c : matieres) {
            c.afficher();
        }
        cout << endl;
    }
private:
    string nom;
    int age;
    vector<Cours> matieres;
};



int main()
{
    Cours progPar = { "ProgPar", 4 };
    Cours progFun{ "ProgFun", 4 };
    Cours poo("POO", 6);

    Etudiant jean = { "Jean", 20 };
    Etudiant pierre { "Pierre", 21 };

    jean.add(poo);
    jean.add(progPar);

    pierre.add(poo);
    pierre.add(progFun);

    jean.afficher();
    pierre.afficher();

    poo.setNom("OOP");

    jean.afficher();
    pierre.afficher();


};

  /*  



    vector<Cours> matieresJean = { poo, progPar };


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