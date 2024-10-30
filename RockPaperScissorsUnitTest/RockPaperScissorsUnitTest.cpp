#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	char* PlayRPS(char* player1, char* player2);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsUnitTest
{
	TEST_CLASS(Player1WinTest)
	{
	public:
		
		TEST_METHOD(Player1WinsWithRock)
		{
			//testing output for when player1 wins with rock
			char player1[] = "rock";
			char player2[] = "scissors";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player1WinsWithPaper)
		{
			//testing output for when player1 wins with paper
			char player1[] = "paper";
			char player2[] = "rock";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player1WinsWithScissors)
		{
			//testing output for when player1 wins with scissors
			char player1[] = "scissors";
			char player2[] = "paper";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
	};
	TEST_CLASS(Player2WinTest)
	{
	public:

		TEST_METHOD(Player2WinsWithRock)
		{
			//testing output for when player2 wins with rock
			char player1[] = "rock";
			char player2[] = "scissors";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player2WinsWithPaper)
		{
			//testing output for when player2 wins with paper
			char player1[] = "paper";
			char player2[] = "rock";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player2WinsWithScissors)
		{
			//testing output for when player2 wins with scissors
			char player1[] = "scissors";
			char player2[] = "paper";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
	};
	TEST_CLASS(DrawTest)
	{
	public:

		TEST_METHOD(DrawWithRock)
		{
			char player1[] = "rock";
			char player2[] = "rock";
			char expected[] = "draw";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(DrawWithPaper)
		{
			//testing output for when player1 wins
			char player1[] = "paper";
			char player2[] = "paper";
			char expected[] = "draw";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(DrawWithScissors)
		{
			//testing output for when player1 wins
			char player1[] = "scissors";
			char player2[] = "scissors";
			char expected[] = "draw";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
	};
	TEST_CLASS(InvalidTest)
	{
	public:

		TEST_METHOD(InvalidWord)
		{
			//testing output for invalid word
			char player1[] = "cheese";
			char player2[] = "cheese";
			char expected[] = "invalid";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(InvalidEmptyWord)
		{
			//testing output for empty argument
			char player1[] = "rock";
			char player2[] = "";
			char expected[] = "invalid";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(InvalidInputNumber)
		{
			//testing output for a number being inputted 
			char player1[] = "1";
			char player2[] = "rock";
			char expected[] = "invalid";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
	};
}
