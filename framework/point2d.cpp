#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "point2d.hpp"


// DefaultKonstruktor mit Startwerten  für (x,y)
Point2d::Point2d():  x_{0.0},y_{0.0}  {}


//Konstruktor
Point2d::Point2d (float x, float y):  x_{x}, y_{y} {}

Point2d::Point2d(Point2d const& p): x_{p.getX()}, y_{p.getY()}{}

Point2d::~Point2d(){};

float Point2d::getX() const{
	return x_;
}

float Point2d::getY() const{
	return y_;
}

void Point2d::rotate(float angle){
	float xNew = x_;
	float yNew = y_;

	x_ = (xNew*cos(-M_PI*2 + angle)) - (yNew*sin(-M_PI*2 + angle));
	y_ = (xNew*sin(-M_PI*2 + angle)) + (yNew*cos(-M_PI*2 + angle));
}

void Point2d::translate(float x2, float y2){
	x_ = x_ + x2;
	y_ = y_ + y2;
}

