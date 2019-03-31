#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {
#include "Power.h" // Header files from production code is included here
};
TEST_GROUP(TestPower)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};
TEST(TestPower, zeroTest)
{
	// Any number to the power of zero should return 1
	CHECK_EQUAL(1, Power(1, 0));
	CHECK_EQUAL(1, Power(0, 0));

	// Zero to the power of any positive integer > 0 = 0
	CHECK_EQUAL(0, Power(0, 1));


}
TEST(TestPower, oneTests) {
	
	// Any number to the power of 1 is the number itself
	CHECK_EQUAL(1, Power(1, 1));
}
TEST(TestPower, manyTests) {
	
	// Check the power when base > 1
	CHECK_EQUAL(2, Power(2, 1));

	// Check the power when exponent > 1
	CHECK_EQUAL(4, Power(2, 2));

}

