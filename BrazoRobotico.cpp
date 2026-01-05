#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando)
	:x(x), y(y), z(z), sujetando(sujetando) {}

double BrazoRobotico::getX() {return x;}
double BrazoRobotico::getY() {return y;}
double BrazoRobotico::getX() {return z;}
bool BrazoRobotico::estaSujetando() {return sujetando;}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
	x = nuevoX;
	y = nuevoY;
	z = nuevoZ;
}
void BrazoRobotico::coger() {
	sujetando = true; 
}
void BrazoRobotico::soltar() {
	sujetando = false;
}
