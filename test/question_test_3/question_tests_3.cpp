#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("testing class inputs  10 ,.20 ")
{
	Receipt receipt(10,.20);
	REQUIRE(receipt.calculate_tax() == .80);
	REQUIRE(receipt.calculate_gratuity() == 2);
}
TEST_CASE("testing class inputs  20 ,.15 ")
{
	Receipt receipt(20,.15);
	REQUIRE(receipt.calculate_tax() == 1.60);
	REQUIRE(receipt.calculate_gratuity() == 3);
}
TEST_CASE("testing class inputs  30 ,.10 ")
{
	Receipt receipt(30,.10);
	REQUIRE(receipt.calculate_tax() == 2.40);
	REQUIRE(receipt.calculate_gratuity() == 3);
}