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
			//testing output for when player1 wins
			char player1[] = "rock";
			char player2[] = "scissors";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
	};
}
