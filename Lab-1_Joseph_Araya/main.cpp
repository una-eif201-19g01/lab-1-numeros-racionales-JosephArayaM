/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:Main.cpp
 * Description: This is the resolution of the first laboratory
 * Author: Joseph
 * Created on the 3 of august of 2019, 02:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include "Racional.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Racional r1;
    int a4, b4, c4, d4;
    float cont, num, op1,op2;

    while(cont!=10){
        cout<<" ---------------------------------------------------------------"<< endl;
		cout<<"  *   Que desea Realizar?:             "<< endl ; 
		cout<<" ---------------------------------------------------------------"<< endl;
		cout<<"  *   1. Agregar Fracciones            "<< endl;
		cout<<"  *   2. Encontrar el maximo comun divisor           "<< endl;
        cout<<"  *   3. Sumar Fracciones            "<< endl;
		cout<<"  *   4. Restar Fraccciones  "<< endl;
		cout<<"  *   5. Multiplicar Fracciones             "<<  endl;
        cout<<"  *   6. Dividir Fracciones             "<<  endl;
        cout<<"  *   7. Elevar Fraccion            "<<  endl;
        cout<<"  *   8. Calcular Equivalencia entre Fracciones             "<<  endl;
		cout<<"  *   9. Ver fraccciones      "<<  endl;
		cout<<"  *   10. Salir       "<<  endl;
		cout<<" ---------------------------------------------------------------"<< endl;
		cout<<"  * Digite el numero de la opcion que desea realizar:     "<< endl;
		cin>>num;
		
	if(num==1){
        	cout<<" ---------------------------------------------------------------"<< endl;
			cout<<"  * Digite las fracciones que desea usar (a/b) (c/d)     "<<endl;
			cout<<" ---------------------------------------------------------------"<< endl;
			cin>>a4;
			cin>>b4;
			cin>>c4;
			cin>>d4;
			cout<<" ---------------------------------------------------------------"<< endl;
			r1.SetA(a4);
			r1.SetB(b4);
			r1.SetC(c4);
			r1.SetD(d4);
	}
	else
		if(num==2){
			cout<<" ---------------------------------------------------------------"<< endl;
			cout<<"  *   Cual Fracccion desea usar?:             "<< endl ; 
			cout<<" ---------------------------------------------------------------"<< endl;
			cout<<"  *   1. a/b            "<< endl;
			cout<<"  *   2. c/d          "<< endl;
			cin>>op1;
			if(op1 == 1){
				cout<<" -------------------------------------------------------------------------"<< endl;
				cout<<" * El maximo comun divisor es:"<<r1.MCD(r1.GetA(),r1.GetB())<<endl;
				cout<<" -------------------------------------------------------------------------"<< endl;
			}
			else{
				cout<<" -------------------------------------------------------------------------"<< endl;
				cout<<" * El maximo comun divisor es:"<<r1.MCD(r1.GetC(),r1.GetD())<<endl;
				cout<<" -------------------------------------------------------------------------"<< endl;
			}
	    }
	    else
			if(num==3){
				cout<<" -------------------------------------------------------------------------"<< endl;
				cout<<" * El resultado es:"<<r1.Sum_Frac(r1.GetA(),r1.GetB(),r1.GetC(),r1.GetD()) <<endl;
				cout<<" -------------------------------------------------------------------------"<< endl;
			}
			else
				if(num==4){
					cout<<" -------------------------------------------------------------------------"<< endl;
					cout<<" * El resultado es:"<<r1.Rest_Frac(r1.GetA(),r1.GetB(),r1.GetC(),r1.GetD()) <<endl;
					cout<<" -------------------------------------------------------------------------"<< endl;
			    }
				else
				   if(num==5){
					cout<<" -------------------------------------------------------------------------"<< endl;
					cout<<" * El resultado es:"<<r1.Mult_Frac(r1.GetA(),r1.GetB(),r1.GetC(),r1.GetD()) <<endl;
					cout<<" -------------------------------------------------------------------------"<< endl;
					}
				    else
						if(num==6){
						cout<<" -------------------------------------------------------------------------"<< endl;
						cout<<" * El resultado es:"<<r1.Div_Frac(r1.GetA(),r1.GetB(),r1.GetC(),r1.GetD()) <<endl;
							cout<<" -------------------------------------------------------------------------"<< endl;
						}
						else
							if(num==7){
								cout<<" ---------------------------------------------------------------"<< endl;
								cout<<"  *   Cual Fracccion desea usar?:             "<< endl ; 
								cout<<" ---------------------------------------------------------------"<< endl;
								cout<<"  *   1. a/b            "<< endl;
								cout<<"  *   2. c/d          "<< endl;
								cin>>op2;
								if(op2 == 1){
									cout<<" -------------------------------------------------------------------------"<< endl;
									cout<<" El resultado es:"<<r1.Elev_Frac(r1.GetA(),r1.GetB()) <<endl;
									cout<<" -------------------------------------------------------------------------"<< endl;
								}
								else{
									cout<<" -------------------------------------------------------------------------"<< endl;
									cout<<" * El resultado es:"<<r1.Elev_Frac(r1.GetC(),r1.GetD()) <<endl;
									cout<<" -------------------------------------------------------------------------"<< endl;
								}
							}
							else
								if(num==8){
									if(r1.Equivalente(r1.GetA(),r1.GetB(),r1.GetC(),r1.GetD())){
										cout<<" * Las Fracciones si son equivalentes "<<endl;
									}
									else{
										cout<<" * Las Fracciones no son equivalentes "<<endl;
									}
								}
								else
								    if(num==9){
										cout<<r1.toString()<<endl;
									}
									else
										if(num==10){
											cont= 10;
										}
										else
											if(num!=1 && num!=2 && num!=3 && num!=4 && num!=5 && num!=6 && num!=7 && num!=8 && num!=9 && num!=10){
												cout<<"  "<<endl;
												cout<<"Usted digito un numero que no corresponde a ninguna opcion, intente de nuevo"<<endl;
											}
	}

    return 0;
}

