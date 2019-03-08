// vectorEj1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "Vector.h"  //Declarar el header de la clase
#define MAX 10

using namespace std;

void main(){

	int n, op;
	do {
		cout<<"Ingrese el tamanio del vector : ";
		cin>>n;
	} while ((n>MAX) || (n<=0));
	Vector vector1(n);  // Declarando el objeto vector1 de la clase vector
	do{
		cout<<"-----       M E N U        -----"<<endl;
		cout<<"|1.- Cargar Vector.            |"<<endl;
		cout<<"|2.- Mostrar Vector.           |"<<endl;
		cout<<"|3.- Ordenar Vector.           |"<<endl;
		cout<<"|4.- Eliminar Impares.         |"<<endl;
		cout<<"|0.- Salir                     |"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<" Elija una opcion"<<endl;
		cin>>op;
		switch(op){
		case 1:
			vector1.cargarVector(n);  //Llamar al metodo
			break;
		case 2:
			vector1.mostrarVector(n);
			break;
		case 3:
			vector1.ordenarVector(n);
			break;
		case 4:
			vector1.eliminarVector(n);
			break;
		case 0: 
			cout<<"Salir"<<endl;
			break;
		default:
			cout<<"Error: Opcion no valida..."<<endl;
			break;
		}
	}while(op!=0);
	getch();
}
