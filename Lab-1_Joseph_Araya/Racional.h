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
    
    Racional(){
        a = 0.0;
        b = 0.0;
        c = 0.0;
        d = 0.0;
    }
    
    Racional(int a1, int b1, int c1, int d1){
        a = a1;
        b = b1;
        c = c1;
        d = d1;
    }
    
    ~Racional(){
    }
    
    void SetD(int d) {
        this->d = d;
    }

    int GetD() const {
        return d;
    }

    void SetC(int c) {
        this->c = c;
    }

    int GetC() const {
        return c;
    }

    void SetB(int b) {
        this->b = b;
    }

    int GetB() const {
        return b;
    }

    void SetA(int a) {
        this->a = a;
    }

    int GetA() const {
        return a;
    }
    
    float MCD(int a1,int b1){
        float res = a1%b1;
        while(res != 0){
            if(res == 0)
                return b;
            else
                a1 = b1;
                b1 = res;
        }
    }
    
    float Sum_Frac(int a2, int b2, int c2, int d2){
        return ((a2*d2)+(b2*c2))/(b2*d2);   
    }
    
    float Rest_Frac(int a2, int b2, int c2, int d2){
        return ((a2*d2)-(b2*c2))/(b2*d2);   
    }
    
    float Mult_Frac(int a2, int b2, int c2, int d2){
        return (a2*c2)/(b2*d2);   
    }
    
    float Div_Frac(int a2, int b2, int c2, int d2){
        return (a2*d2)/(b2*c2);   
    }
    
    float Elev_Frac(int a2, int b2){
        return (a2*a2)/(b2*b2);   
    }
    
    bool Equivalente(int a2, int b2, int c2, int d2){
        if((b2*c2)==(a2*d2))
            return true;
        else
            return false;
    }
    
    string toString(){
		stringstream s;
		s<<endl;
		s<<"-----------------------------------------------------------"<<endl;
		s<<" * Las fracciones son: "<<endl;
		s<<"-----------------------------------------------------------"<<endl;
		s<<" * "<<a<<"/"<<b<<endl;
		s<<" * "<<c<<"/"<<d<<endl;
		s<<"-----------------------------------------------------------"<<endl;
		return s.str();
	}
    
};

#endif /* RACIONAL_H */

