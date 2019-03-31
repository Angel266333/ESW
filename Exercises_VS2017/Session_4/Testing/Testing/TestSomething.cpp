#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {
	#include <source.h> // Header files from production code is included here
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
	char outcomeOne[] = "Hey";
	char outcomeTwo[] = "Hey";

	char dest[4];
	
	CHECK_EQUAL(-1, my_strdiff(outcomeOne, outcomeTwo));
	CHECK_EQUAL(3, my_strlen(outcomeOne));
	my_strcopy(outcomeOne, dest);
	CHECK_EQUAL(-1, my_strdiff(outcomeOne, dest));
	char *newStr = my_strdup(outcomeOne);
	CHECK_EQUAL(-1, my_strdiff(outcomeOne, newStr));
	free(newStr);
	newStr = NULL;

}