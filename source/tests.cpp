#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <color.hpp>
#include <point2d.hpp>
#include <circle.hpp>
#include <rectangle.hpp>
#define _USE_MATH_DEFINES
#include <cmath>

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

TEST_CASE("describe_test", "[test]"){
	Point2d punkt{0.5, 1.0};
	REQUIRE(punkt.getX() == Approx(0.5));
	REQUIRE(punkt.getY() == Approx(1.0));
	Point2d punkt2{1.0, 1.0};
	punkt2.translate(-2.0, -2.0);
	REQUIRE(punkt2.getX() == Approx(-1.0));
	REQUIRE(punkt2.getY() == Approx(-1.0));
	punkt2.rotate(M_PI);
	REQUIRE(punkt2.getX() == Approx(1.0));
	REQUIRE(punkt2.getY() == Approx(1.0));


	Color farbe{1.0, 0.0, 0.0};
	Circle kreis{punkt, 2.0, farbe};
	REQUIRE(kreis.getRadius() == Approx(2.0));
	REQUIRE(kreis.circumference() == Approx(12.56637));
	REQUIRE(kreis.getColor().r == Approx(1.0));
	REQUIRE(kreis.getCenter().getX() == Approx(0.5));

	Rectangle eck{punkt, 2.0, 4.0, farbe};
	REQUIRE(eck.getHoehe() == Approx(2.0));
	REQUIRE(eck.getBreite() == Approx(4.0));
	REQUIRE(eck.getCenter().getY() == Approx(1.0));
	REQUIRE(eck.getColor().g == Approx(0.0));
	REQUIRE(eck.circumference() == Approx(12.0));

}