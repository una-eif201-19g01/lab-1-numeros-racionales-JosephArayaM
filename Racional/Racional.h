/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:Racional.h
 * Description: This is the resolution of the first laboratory
 * Author: Joseph
 * Created on the 3 of august of 2019, 02:16 PM
 */

#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Racional{

private:
    int a;
    int b;
    int c;
    int d;
    
public:
    Racional();
    Racional(int a1, int b1, int c1, int d1);
    ~Racional();
	float MCD(int a1,int b1);
    void SetD(int d);
    int GetD();
    void SetC(int c);
    int GetC();
    void SetB(int b);
    int GetB();
    void SetA(int a);
    int GetA();
    float Sum_Frac(int a2, int b2, int c2, int d2);
    float Rest_Frac(int a2, int b2, int c2, int d2);
    float Mult_Frac(int a2, int b2, int c2, int d2);
    float Div_Frac(int a2, int b2, int c2, int d2);
    float Elev_Frac(int a2, int b2);
    bool Equivalente(int a2, int b2, int c2, int d2);
    string toString();
};

#endif /* RACIONAL_H */

