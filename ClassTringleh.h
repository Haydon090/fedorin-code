#pragma once
#include<iostream>
#include"ClassAngle.h"
using namespace std;

class Tringle {
public:
	Tringle(){};
	Angle angle1;
	Angle angle2;
	Angle angle3;
	
	void serchTriangle(Angle angle1,Angle angle2,Angle angle3);
};



void Tringle::serchTriangle(Angle angle1, Angle angle2, Angle angle3) 
{
	if((angle1 + angle2 + angle3) != 180)
	{
		cout << "Это не треугольник " << endl;

	}
}
