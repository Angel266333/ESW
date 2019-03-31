#include<CppUTest/TestHarness.h>
#include<CppUTest/TestHarness_c.h>

extern"C"{
	 #include <LinkedList.h> // Header files from production code is included here
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
	int item = 12;
	linkedList list;
	char text[] = "hallo";
	list.count = 0;
	list.start = NULL;
	
	CHECK_EQUAL(0, add_item(&item, &list));
	CHECK_EQUAL(-1, add_item(NULL, &list));
	CHECK_EQUAL(0, add_item(&text, &list));
}