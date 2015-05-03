# ifndef BUW_COLOR_HPP
# define BUW_COLOR_HPP

struct Color{

  float r;//rot
  float g;//grün
  float b;//blau

  Color(float rot, float gruen, float blau) : r{rot}, g{gruen}, b{blau} {}

  Color(float f) : r{f}, g{f}, b{f} {}
// Copy-Konstruktor -
  Color(Color const& c) : r{c.r}, g{c.g}, b{c.b} {} 

  Color() :  r{0.0}, g{0.0}, b{0.0} {}

};

# endif // BUW_COLOR_HPP