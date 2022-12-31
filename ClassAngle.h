#pragma once
#include<iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
using namespace std;

class Angle 
{
public:
	Angle(){};
	void ungle(int angle,int minute);
	double angle;
	double minute;
	void ConvertInRadians(Angle A);
	void show(Angle A);
	void ConvertInGradus(Angle A);
};

void Angle::ConvertInGradus(Angle A) {

	double gradus;

	gradus = A.angle + (A.minute / 60) / 60;

	while (gradus > 360)
	{
		gradus -= 360;
	};
	cout << gradus;
}



void Angle :: ungle(int angle,int minute) {

	this->angle = angle;
	this->minute = minute;

}
void Angle::ConvertInRadians(Angle A) 
{	
	double radians;
	radians = A.angle + (A.minute / 60) / 60;
	radians = radians * M_PI/ 180;
		cout << radians<< endl;

}

void Angle::show(Angle A) {
	cout << A.angle << A.minute;
}
