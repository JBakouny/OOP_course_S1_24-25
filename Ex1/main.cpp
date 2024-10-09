#include <iostream>
#include <string>
using namespace std;


void affiche(string texte, double x) {
    cout << texte <<" " << x << endl;
}

void affiche(double x) {
    affiche("Réel", x);
}


void affiche(int x, string texte) {
    cout << "Entier: " << x << endl;
}


int main() {

    int a = 2;

    double b = 3.7;

    affiche(a);
    affiche("Integer", a);

    affiche(b);


}

/*

def affiche(x) :
    print(x)


def affiche(x, y):
    print(x, "et", y)



*/

