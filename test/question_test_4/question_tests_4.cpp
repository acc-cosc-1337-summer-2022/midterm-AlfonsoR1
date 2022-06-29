#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("testing class inputs  5 ,5 ")
{
	tangle rectangle(5,5);
	REQUIRE(rectangle.get_length() == 5);
	REQUIRE(rectangle.get_width() == 5);
	REQUIRE(rectangle.get_area() == 25);
}
TEST_CASE("testing class inputs  3 ,10 ")
{
	tangle rectangle(3,10);
	REQUIRE(rectangle.get_length() == 3);
	REQUIRE(rectangle.get_width() == 10);
	REQUIRE(rectangle.get_area() == 30);
}
TEST_CASE("testing class inputs  10 ,10 ")
{
	tangle rectangle(10,10);
	REQUIRE(rectangle.get_length() == 10);
	REQUIRE(rectangle.get_width() == 10);
	REQUIRE(rectangle.get_area() == 100);
}