// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Circle.h"
#include <iostream>

using namespace std;

int main()
{
    Circle c({ 0,0 }, 3);
    c.afficher();
    c.changer_rayon(4);
    c.afficher();
    /*c.translate_center({ 0,1 });
    c.afficher();*/
    cout << "area is:" << c.surface() << endl;
    cout << "perimeter is:" << c.perimetre() << endl;
    Circle* c1 = new Circle({ 0, 0 }, 4);
    c1->afficher();
    if (c == *c1)   cout << "yes" << endl;
    else    cout << "no" << endl;
    
    if (c.appartenir({0,6})) cout << "yes" << endl;
    else    cout << "no" << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
