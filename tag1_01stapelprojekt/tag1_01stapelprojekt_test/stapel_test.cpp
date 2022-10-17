#include "stapel_test.h"

TEST_F(stapel_test, xyz)
{
	bool result = object_under_test.is_empty();
	EXPECT_TRUE(result);
}

TEST_F(stapel_test, abc)
{
	object_under_test.push(1);
	bool result = object_under_test.is_empty();
	EXPECT_FALSE(result);
}
