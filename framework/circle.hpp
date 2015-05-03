# ifndef BUW_CIRCLE_HPP
# define BUW_CIRCLE_HPP
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

class Circle{
	  public:
	  	Circle(Point2d const& ctr, float r, Color const& clr);
	  	Circle();
	  	~Circle();

	  	void draw(Window const& win) const;
	  	void draw(Window const& win, Color const& farbe) const;
	  	Color getColor() const;
	  	Point2d getCenter() const;
	  	float getRadius() const;
	  	float circumference() const;
	  private:
	  	Point2d center_;
	  	float   radius_;
	  	Color   color_;
};

# endif // BUW_CIRCLE_HPP