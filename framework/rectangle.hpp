# ifndef BUW_RECTANGLE_HPP
# define BUW_RECTANGLE_HPP
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

class Rectangle{
	public:
	  	Rectangle(Point2d const& ctr, float h, float b, Color const& clr);
	  	Rectangle();
	  	~Rectangle();

	  	Point2d getCenter() const;
	  	float getHoehe() const;
        float getBreite() const;
        Color getColor() const;
        float circumference() const;
	  	void draw(Window const& win) const;
	  	void draw(Window const& win, Color const& farbe) const;
	  	

	private:
		Point2d center_;
	  	float hoehe_;
	  	float breite_;
	  	Color color_;

};
# endif // BUW_RECTANGLE_HPP