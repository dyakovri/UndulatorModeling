#include <cmath>
#include "RKMethod.h"

#pragma once

class qParticle : public RKMethod {
	double m, q, Vx;
	double B, n, lu;
	double x, y, t = 0;

public:
	qParticle(double m, double q, double Vx, double B, double n, double lu) : RKMethod(4) {
		this->m = m;
		this->q = q;
		this->Vx = Vx;
		this->B = B;
		this->n = n;
		this->lu = lu;

		std::vector<double> Y0(4);
		Y0[0] = 0;
		Y0[1] = 0;
		Y0[2] = Vx;
		Y0[3] = 0;

		SetInit(0, Y0);
	}

	std::vector<double> F(double time, std::vector<double> &coordinates)
	{
		// x - Y[0], y - Y[1], Vx - Y[2], Vy - Y[3]
		// dx/dt - FY[0] , dy/dt - FY[1] , dVx/dt - FY[2] , dVy/dt - FY[3]

		if ((((int)(Y[0] / lu)) % 2) == t) { t = (((int)(Y[0] / lu)) % 2); B = -B; }

		FY[0] = Y[2];
		FY[1] = Y[3];
		FY[2] = B * Y[3] * q / m; //ax = B*Vy*q/m
		FY[3] = -B * Y[2] * q / m; //ay = -B*Vx*q/m

		return FY;
	}

	void Step()
	{
		NextStep(0.01);
	}

	double get_x() { return Y[0]; }
	double get_y() { return Y[1]; }
};