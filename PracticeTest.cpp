/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, racer)
{
	Practice testObject;

	string word;

	word = "racecar";

	ASSERT_EQ(testObject.isPalindrome(word), true);

	word = "abacadabra";
	ASSERT_EQ(testObject.isPalindrome(word), false);
}

TEST(PracticeTest, sleeper)
{
	Practice testObject;

	int testArray[7] = {0, 0, 0, 0, 0, 0, 0};

	ASSERT_EQ(*testObject.allnighter(testArray), 0);

}

TEST(PracticeTest, zzzrepeat)
{
	Practice testObject;
	string word;

	word = "";

	ASSERT_EQ(testObject.count_starting_repeats(word), 0);

	word = "\n\n\neerie";

	ASSERT_EQ(testObject.count_starting_repeats(word), 3);
}

TEST(PracticeTest, descent)
{
	Practice testObject;

	int a, b, c;
	a = 8;
	b = 9;
	c = 2;

	testObject.sortDescending(a, b, c);

	ASSERT_EQ(a, 9);
	ASSERT_EQ(b, 8);
	ASSERT_EQ(c, 2);

	a = 3;
	b = 2;
	c = 1;

	testObject.sortDescending(a, b, c);

	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}
