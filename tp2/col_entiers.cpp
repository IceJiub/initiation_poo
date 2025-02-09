#include <iostream>
#include <cmath>
#include "col_entiers.hpp"
using namespace std;

Col_Entiers::Col_Entiers(int taille)
{
    this->taille = taille;
    this->nbe = 0;
    this->T = new int[taille];
}

Col_Entiers::Col_Entiers(Col_Entiers &c)
{
    this->taille = c.taille;
    this->nbe = c.nbe;
    this->T = new int[this->taille];
    for (int i = 0; i < this->nbe; i++)
    {
        this->T[i] = c.T[i];
    }
}

void Col_Entiers::add(int n)
{
    this->T[this->nbe] = n;
    this->nbe++;
    this->taille--;
}

void Col_Entiers::affichage()
{
    for (int i = 0; i < this->nbe; i++)
    {
        cout << this->T[i] << " ";
    }
    cout << endl;
}