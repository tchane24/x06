/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, TogglesCorrectly)
{
	TicTacToeBoard t;
	//Placed toggleTurn() in placePiece()
	ASSERT_EQ(t.placePiece(1,2), O);
}

TEST(TicTacToeBoardTest, TogglesCorrectlyx2)
{
	TicTacToeBoard t;
	t.placePiece(1,2);
	ASSERT_EQ(t.placePiece(1,0), X);
}

TEST(TicTacToeBoardTest, BoardIsClear)
{
	TicTacToeBoard t;
	t.clearBoard();
	ASSERT_EQ(t.getPiece(0,0) , Blank);
}
TEST(TicTacToeBoardTest, BoardIsClear2)
{
	TicTacToeBoard t;
	t.clearBoard();
	ASSERT_EQ(t.getPiece(1,1) , Blank);
}
TEST(TicTacToeBoardTest, placePieceOutOfBounds)
{
	TicTacToeBoard t;
	ASSERT_EQ(t.placePiece(3,0), Invalid);
}
