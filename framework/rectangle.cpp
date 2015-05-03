#include "rectangle.hpp"
#define CATCH_CONFIG_RUNNER
#include <cmath>
#include <iostream>
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>


Rectangle::Rectangle(Point2d const& ctr, float h, float b, Color const& clr):center_{ctr}, hoehe_{h}, breite_{b}, color_{clr}{}
Rectangle::Rectangle(): center_{0.0, 0.0}, hoehe_{1.0}, breite_{1.0}, color_{0.0, 0.0, 0.0}{}
Rectangle::~Rectangle(){}

Point2d Rectangle::getCenter() const{
	return center_;
}
float Rectangle::getHoehe() const{
	return hoehe_;
}
float Rectangle::getBreite() const{
	return breite_;
}
Color Rectangle::getColor() const{
	return color_;
}
float Rectangle::circumference() const{
	float u = 2*hoehe_ + 2*breite_;
	return u;
}
void Rectangle::draw(Window const& win) const{
	Point2d punkt1{center_.getX() + breite_, center_.getY()};
	Point2d punkt2{center_.getX() + breite_, center_.getY() + hoehe_};
	Point2d punkt3{center_.getX(), center_.getY() + hoehe_};

	win.drawLine(center_.getX(), center_.getY(), punkt1.getX(), punkt1.getY(), color_.r, color_.g, color_.b);
	win.drawLine(punkt1.getX(), punkt1.getY(), punkt2.getX(), punkt2.getY(), color_.r, color_.g, color_.b);
	win.drawLine(punkt2.getX(), punkt2.getY(), punkt3.getX(), punkt3.getY(), color_.r, color_.g, color_.b);
	win.drawLine(punkt3.getX(), punkt3.getY(), center_.getX(), center_.getY(), color_.r, color_.g, color_.b);
}
void Rectangle::draw(Window const& win, Color const& farbe) const{
	Point2d punkt1{center_.getX() + breite_, center_.getY()};
	Point2d punkt2{center_.getX() + breite_, center_.getY() + hoehe_};
	Point2d punkt3{center_.getX(), center_.getY() + hoehe_};

	win.drawLine(center_.getX(), center_.getY(), punkt1.getX(), punkt1.getY(), farbe.r, farbe.g, farbe.b);
	win.drawLine(punkt1.getX(), punkt1.getY(), punkt2.getX(), punkt2.getY(), farbe.r, farbe.g, farbe.b);
	win.drawLine(punkt2.getX(), punkt2.getY(), punkt3.getX(), punkt3.getY(), farbe.r, farbe.g, farbe.b);
	win.drawLine(punkt3.getX(), punkt3.getY(), center_.getX(), center_.getY(), farbe.r, farbe.g, farbe.b);
}
