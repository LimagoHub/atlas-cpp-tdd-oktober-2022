#include "stapel_test.h"
TEST_F(stapel_test, is_empty__empty_stack__returns_true)
{
	// Arrange
	// Nothing to do

	// Act
	bool result = object_under_test.is_empty();

	// Assert
	EXPECT_TRUE(result);
	
}

TEST_F(stapel_test, is_empty__not_empty_stack__returns_false)
{
	// Arrange
	object_under_test.push(1);

	// Act
	bool result = object_under_test.is_empty();

	// Assert
	EXPECT_FALSE(result);

}

TEST_F(stapel_test, push_fill_up_to_limit_no_exception_thrown )
{
	// Arrange
	for (int i = 0; i < 9; i++)
		object_under_test.push(1);
	// Act + Assertion
	EXPECT_NO_THROW(object_under_test.push(1));
}

TEST_F(stapel_test, push__overflow__throws_stapelexception)
{
	// Arrange
	for (int i = 0; i < 10; i++)
		object_under_test.push(1);
	// Act + Assertion
	EXPECT_THROW(object_under_test.push(1), stapel_exception);
}

TEST_F(stapel_test, push__overflow__throws_stapelexception_variante2)
{
	// Arrange
	for (int i = 0; i < 10; i++)
		object_under_test.push(1);
	
	// Act
	try
	{
		
		object_under_test.push(1);
		FAIL() << "expected exception is not thrown";
	} catch (const stapel_exception & ex)
	{
		EXPECT_STREQ("Overflow", ex.what());
	}
}