//On inclue les bibliothèques nécessaires au code :
//    => "iostream" pour interagir avec la console
//    => "cmath" pour obtenir la fonction sqrtf (racine carré de float)
#include <iostream>
using namespace std;
#include <cmath>

int main(){

//Variables
//  v Pour la longueur des côtés
    float ab = 0.0f;
    float ac = 0.0f;
    float bc = 0.0f;
//  v Pour le nom du triangle
    char a;
    char b;
    char c;
    
//On demande le nom du triangle
    cout << "Donnez le nom du triangle en commançant par le point d'angle droit et en laissant un espace entre chaque lettre ";
    cin >> a >> b >> c;
//On demande la longueur des côtés du triangle
    cout << "Donnez la longueur d'un côté adjaçant de l'hypothénuse ";
    cin >> ab;
    cout << "Donnez la longueur de l'autre côté adjaçant de l'hypothénuse ";
    cin >> ac;
    cin.ignore();

//On calcule la longueur de l'hypothénuse
    bc = sqrtf(ab*ab + ac*ac);

//On convertie les lettres du triangle en lettres majuscules
    a = toupper(a);
    b = toupper(b);
    c = toupper(c);

//On affiche le résultat en rappelant la propriété du théorème de Pythagore
    cout << "On sait que le triangle " << a << b << c << " est un triangle rectangle en " << a << " et d'hypothénuse " << b << c << endl;
    cout << "Donc d'après le théorème de Pythagore on a " << b << c << " = " << bc << " cm." << endl;
    cin.ignore();

    return 0;
}