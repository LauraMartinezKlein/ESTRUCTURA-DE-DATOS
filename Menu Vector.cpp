#include "StdAfx.h"
#include "Vector.h"
#include <iostream>
using namespace std;


Vector::Vector(void)
{
	vec[10]=0;
	n=0;
}

void Vector::cargarVector(int vec[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"vec["<<i<<"] =" ;
		cin>>vec[i];
	}
}
void Vector::mostrarVector(int vec[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<vec[i]<<", ";
	}
	cout<<endl;

}
void Vector::eliminarVector(int vec[], int n)
{
	for (int a=0;a<n-1;a++)
	{ if (vec[a]%2!=0)
	  {  
		  for (int i=a;i<n-1;i++)
		  { 
			  vec[i]=vec[i+1];
		  }
	  }
	  a--;
	  n--;
	}
}

Vector::~Vector(void)
{
}
