#include "calc_client_test.h"

using namespace testing;
TEST_F(calc_client_test, go)
{
	// Arrange Mock in der RecordMode versetzen
	EXPECT_CALL(calculatorMock, add(Eq(3.0), 4.0)).WillRepeatedly(Return(42.0));
	EXPECT_CALL(calculatorMock, add(4.0, 4.0)).WillOnce(Return(47.11));

	// Replay
	
	object_under_test.go();

	EXPECT_EQ(1, 2);
	EXPECT_THAT(1, Not(Eq(1)));
	EXPECT_THAT("blaBlupp", Not(StartsWith("bla")));
}