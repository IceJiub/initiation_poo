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

void Col_Entiers::add(int n)
{
    this->T[this->nbe] = n;
    this->nbe++;
    this->taille--;
}