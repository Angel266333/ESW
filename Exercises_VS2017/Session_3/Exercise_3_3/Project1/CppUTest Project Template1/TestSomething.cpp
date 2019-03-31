#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {

#include "multipleO.h"

};
TEST_GROUP(TestSomething)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};
TEST(TestSomething, myFirstTest)
{
	int a = 10;
	int b = 20;
	int c = 30;

	multiSwap(&a, &b, &c);
	CHECK_EQUAL(20, a);
}