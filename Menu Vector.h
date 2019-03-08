#pragma once
class Vector
{
private: 
	int vec[10], n;
public:
	Vector(void);
	~Vector(void);

	void cargarVector(int vec[], int n);
	void mostrarVector(int vec[], int n);
	void eliminarVector(int vec[], int n);
};

