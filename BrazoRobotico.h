#ifndef BrazoRobotico_h
#define BrazoRobotico_h

class BrazoRobotico {
private:
	double x;
	double y;
	double z;
	bool sujetando;
public:
	BrazoRobotico(double x = 0.0, double y = 0.0. double z = 0.0, bool sujetando = false);
	double getX();
	double getY();
	double getZ();
	bool getSujetando();

	void coger();
	void soltar();
	void mover(double x, double y, double z);
};
#endif
