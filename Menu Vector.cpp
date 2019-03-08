#include "StdAfx.h"
#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(int _n)
{
	n=_n;
}


Vector::~Vector(void)
{
}

void Vector::cargarVector(int n){
	for(int i=0;i<n;i++){
		cout<<"vec["<<i<<"] =" ;
		cin>>vec[i];
	}
}

void Vector::mostrarVector(int n){
	for(int i=0;i<n;i++){
		cout<<vec[i]<<", ";
	}
	cout<<endl;
}

void Vector::ordenarVector(int n){
	int aux;
	for(int i=0; i<(n-1); i++){
		for(int j=i; j<n; j++){
			if(vec[i] > vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
void Vector::eliminarVector(int &n)
{
	for (int i=0;i<n;i++)
	{
		if (vec[i]%2!=0)
	    {  
		  for (int j=i;j<n;j++)
		  { 
			  vec[i]=vec[i+1];
		  }
	      n--;
		  i--;
	    }
	}
}
