#include "circle.hpp"
#define CATCH_CONFIG_RUNNER
#include <cmath>
#define _USE_MATH_DEFINES
#include <iostream>
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

//Konstruktor - mit Übergabewerten
Circle::Circle(Point2d const& ctr, float r, Color const& clr): center_{ctr}, radius_{r}, color_{clr}{}
// Default konstruktor - falls keine Werte eingegeben werden-
Circle::Circle(): center_{0.0, 0.0}, radius_{1.0}, color_{0.0, 0.0, 0.0}{}

Circle::~Circle(){};

void Circle::draw(Window const& win) const{
	for (int i = 0; i < 720; ++i)
	{
		win.drawPoint(center_.getX()+radius_*cos(i), center_.getY()+radius_*sin(i), color_.r, color_.g, color_.b);
	}
}
void Circle::draw(Window const& win, Color const& farbe) const{
	for (int i = 0; i < 720; ++i)
	{
		win.drawPoint(center_.getX()+radius_*cos(i), center_.getY()+radius_*sin(i), farbe.r, farbe.g, farbe.b);
	}
}

Color Circle::getColor() const{
	return color_;
}

Point2d Circle::getCenter() const{
	return center_;
}

float Circle::getRadius() const{
	return radius_;
}

float Circle::circumference() const{
	float u = radius_ * 2 * M_PI;
	return u;
}