#pragma once
#define MAX 10
class Vector
{
private:
	int vec[MAX], n;
public:
	Vector(int _n); // constructor
	~Vector(void); //destructor

	void cargarVector(int n); //metodos
	void mostrarVector(int n);
	void ordenarVector(int n);
	void eliminarVector(int &n);
};
