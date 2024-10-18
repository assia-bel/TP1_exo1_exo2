// ConsoleApplicationComplex.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complex.h"
#include "Cercle.h"
#include "Point.h"
int main()
{
    /////////////////////exo1
    std::cout << "/Exercice 1 :" << std::endl;
     Complex* Z1 = new Complex(2, 3);
     Complex* Z2 = new Complex();
     Complex *Z3;
     Complex Z4;

     std::cout << " Z1 :";
     Z1->afficher();
     std::cout << " Z2 :";
     Z2->afficher();
 
     Z3 = *Z2 + *Z1; // complex + complex
    //autre ecrirue de l'op plus : Z3 = (*Z2).operator+(*Z1);

     std::cout << " Z1 + Z2 => ";
     Z3->afficher();


     Z3 = *Z2 + 4; // complex + double
     std::cout << " Z2 + 4 => ";
     Z3->afficher();

     Z3 = operator+(4 , *Z1); // double + complex
     std::cout << " 4 + Z1 => ";
     Z3->afficher();


    

     Z4 = Z1->conjugue();
     std::cout << "le module de Z1 est : " << Z1->module() << std::endl;
     std::cout << "le conjugue de Z1 est : " ;
     Z4.afficher();
    if(*Z1 ==  Z4) std::cout << "Z1 == Z2 est vrai" << std::endl;
    else  std::cout << "Z1 == Z2 est faux" << std::endl;

     delete Z1;
     delete Z2;
     delete Z3;
     std::cout << "Fin exercice 1/" << std::endl;
    /////////////////////exo2
     std::cout << "/Exercice 2 :" << std::endl;
    Point p =  Point::creerPoint(2.0, 2.0);

    Cercle* c = new Cercle(1, 3, &p);
    c->afficher();
    std::cout << "surface :" << c->surface() << std::endl;
    std::cout << "perimetre :" << c->perimetre() << std::endl;
    c->translaterCentre(1.0, 4.0);
    c->afficher();
    delete c;
    Cercle c1(1, 3, &p);
    Cercle c2(1, 3, &p);
    c1.afficher();
    c2.afficher();
    if(c1 == c2) std::cout << "c1 == c2 est vrai" << std::endl;
    else std::cout << "c1 == c2 est faux" << std::endl;
   
    return 0;
}

