#include "GlobalVariables.h"
bool appropiateInput(std::string Choice); //Checks if user inputted appropiate input for decrypted text output location option.
char returnDecryptedLetter(std::string decryptedLetterInput); //Returns decrypted letter corresponding to inputted encrypted text
bool whileConditionChecker(std::string toBeCompared); //Checks if string choice is equal to the encrypted value of any ASCII letters.

template <typename First, typename... Next>
bool isIn(First&& first, Next&&... next) //template for comparing several things to first and check if they're equal
{
	return ((first == next) || ...);
}

void decrypt()
{
	bool repeated{ 0 }; //Checks if the loop has repeated to only do something once.
	std::string choice{}; //choice for where outputted decrypted text goes.
	while (appropiateInput(choice) == 0)
	{
		std::cout << "Input \"text\" to decrypt from input.txt or \"local\" to decrypt from your input in this application.\n";
		std::cin >> choice;
		if (choice == "text" || choice == "Text")
		{
			std::cout << "Please place your encrypted text in input.txt then press any button to decrypt.\n";

		}
		if (choice == "text" || choice == "Text")
		{
			std::ifstream inputText("input.txt");
			char inputChar{};
			std::string letterInProgress{};
			while (!inputText.eof())
			{
				letterInProgress = {};
				while (whileConditionChecker(letterInProgress) == 0 && !inputText.eof())
				{
					inputChar = {};
					inputText >> inputChar;
					letterInProgress.push_back(inputChar);
				}

				if (repeated == 0)
				{
					std::cout << "\nDecrypted Text:\n\n";
					repeated = 1;
				}
				std::cout << returnDecryptedLetter(letterInProgress);
			}
		}

		else if (choice == "local" || choice == "Local") //Obtain decrypted text from terminal)
		{
			std::cout << "Please enter text to be decrypted.\n";
			std::string entireInput{};
			std::string partialInput{};
			for (long long int makeSureItRunsOnce{0};std::cin.rdbuf()->in_avail()!=0 || makeSureItRunsOnce<2; makeSureItRunsOnce++)
			{
				std::getline(std::cin, partialInput);
				entireInput.append(partialInput);
			partialInput = {};
			}
			partialInput = {};
			char* charArray = new char[entireInput.length() + 1];
			strcpy_s(charArray, entireInput.length() + 1, entireInput.c_str());
			for (long long unsigned int repeatedNumber{ 0 }; repeatedNumber < strlen(charArray)+1; repeatedNumber++)
			{
				partialInput.push_back(charArray[repeatedNumber]);
				if (returnDecryptedLetter(partialInput) != 0)
				{
					std::cout << returnDecryptedLetter(partialInput);
					partialInput = {};
				}
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin.get();
		}
		else
		{
			std::cout << "Please input an appropiate response.\n";
		}
	}
}




bool appropiateInput(std::string choice)
{
	return (choice == "local" || choice == "Local" || choice == "text" || choice == "Text");
}

bool whileConditionChecker(std::string toBeCompared)
{
	return (isIn(toBeCompared,
		a,
		b,
		c,
		d,
		e,
		f,
		g,
		h,
		i,
		j,
		k,
		l,
		m,
		n,
		o,
		p,
		q,
		r,
		s,
		t,
		u,
		v,
		w,
		x,
		y,
		z,
		zero,
		one,
		two,
		three,
		four,
		five,
		six,
		seven,
		eight,
		nine,
		exclamation,
		forwardSlash,
		backSlash,
		questionMark,
		colon,
		semiColon,
		period,
		questionMark,
		doubleQuote,
		singleQuote,
		plus,
		minus,
		equals,
		backArrow,
		forwardArrow,
		initialCurlyBracket,
		finalCurlyBracket,
		initialBracket,
		finalBracket,
		initialSquareBracket,
		finalSquareBracket,
		asterisk,
		percent,
		numberSign,
		atSign,
		andSign,
		upArrow,
		underscore,
		space ,
		zero ,
		one ,
		two ,
		three ,
		four ,
		five ,
		six ,
		seven ,
		eight ,
		nine ,
		capitalA ,
		capitalB ,
		capitalC ,
		capitalD ,
		capitalE ,
		capitalF ,
		capitalG ,
		capitalH ,
		capitalI ,
		capitalJ ,
		capitalK ,
		capitalL ,
		capitalM ,
		capitalN ,
		capitalO ,
		capitalP ,
		capitalQ ,
		capitalR ,
		capitalS ,
		capitalT ,
		capitalU ,
		capitalV ,
		capitalW ,
		capitalX ,
		capitalY ,
		capitalZ ,
		newLine ,
		tab));
}

char returnDecryptedLetter(std::string decryptedLetterInput)
{
	if (decryptedLetterInput == a)
	{
		return 'a';
	}

	else if (decryptedLetterInput == b)
	{
		return 'b';
	}

	else if (decryptedLetterInput == c)
	{
		return 'c';
	}

	else if (decryptedLetterInput == d)
	{
		return 'd';
	}

	else if (decryptedLetterInput == e)
	{
		return 'e';
	}

	else if (decryptedLetterInput == f)
	{
		return 'f';
	}

	else if (decryptedLetterInput == g)
	{
		return 'g';
	}

	else if (decryptedLetterInput == h)
	{
		return 'h';
	}

	else if (decryptedLetterInput == i)
	{
		return 'i';
	}

	else if (decryptedLetterInput == j)
	{
		return 'j';
	}

	else if (decryptedLetterInput == k)
	{
		return 'k';
	}

	else if (decryptedLetterInput == l)
	{
		return 'l';
	}

	else if (decryptedLetterInput == m)
	{
		return 'm';
	}

	else if (decryptedLetterInput == n)
	{
		return 'n';
	}

	else if (decryptedLetterInput == o)
	{
		return 'o';
	}

	else if (decryptedLetterInput == p)
	{
		return 'p';
	}

	else if (decryptedLetterInput == q)
	{
		return 'q';
	}

	else if (decryptedLetterInput == r)
	{
		return 'r';
	}

	else if (decryptedLetterInput == s)
	{
		return 's';
	}

	else if (decryptedLetterInput == t)
	{
		return 't';
	}

	else if (decryptedLetterInput == u)
	{
		return 'u';
	}

	else if (decryptedLetterInput == v)
	{
		return 'v';
	}

	else if (decryptedLetterInput == w)
	{
		return 'w';
	}

	else if (decryptedLetterInput == x)
	{
		return 'x';
	}

	else if (decryptedLetterInput == y)
	{
		return 'y';
	}

	else if (decryptedLetterInput == z)
	{
		return 'z';
	}

	else if (decryptedLetterInput == exclamation)
	{
		return '!';
	}

	else if (decryptedLetterInput == forwardSlash)
	{
		return '/';
	}

	else if (decryptedLetterInput == backSlash)
	{
		return '\\';
	}

	else if (decryptedLetterInput == questionMark)
	{
		return '?';
	}

	else if (decryptedLetterInput == colon)
	{
		return ':';
	}

	else if (decryptedLetterInput == semiColon)
	{
		return ';';
	}

	else if (decryptedLetterInput == period)
	{
		return '.';
	}

	else if (decryptedLetterInput == comma)
	{
		return ',';
	}

	else if (decryptedLetterInput == doubleQuote)
	{
		return '"';
	}

	else if (decryptedLetterInput == singleQuote)
	{
		return '\'';
	}

	else if (decryptedLetterInput == plus)
	{
		return '+';
	}

	else if (decryptedLetterInput == minus)
	{
		return '-';
	}

	else if (decryptedLetterInput == equals)
	{
		return '=';
	}

	else if (decryptedLetterInput == backArrow)
	{
		return '<';
	}

	else if (decryptedLetterInput == forwardArrow)
	{
		return '>';
	}

	else if (decryptedLetterInput == initialCurlyBracket)
	{
		return '{';
	}

	else if (decryptedLetterInput == finalCurlyBracket)
	{
		return '}';
	}

	else if (decryptedLetterInput == initialBracket)
	{
		return '(';
	}

	else if (decryptedLetterInput == finalBracket)
	{
		return ')';
	}

	else if (decryptedLetterInput == initialSquareBracket)
	{
		return '[';
	}

	else if (decryptedLetterInput == finalSquareBracket)
	{
		return ']';
	}

	else if (decryptedLetterInput == asterisk)
	{
		return '*';
	}

	else if (decryptedLetterInput == percent)
	{
		return '%';
	}

	else if (decryptedLetterInput == numberSign)
	{
		return '#';
	}

	else if (decryptedLetterInput == atSign)
	{
		return '@';
	}

	else if (decryptedLetterInput == andSign)
	{
		return '&';
	}

	else if (decryptedLetterInput == upArrow)
	{
		return '^';
	}

	else if (decryptedLetterInput == underscore)
	{
		return '_';
	}

	else if (decryptedLetterInput == space)
	{
		return ' ';
	}

	else if (decryptedLetterInput == zero)
	{
		return '0';
	}

	else if (decryptedLetterInput == one)
	{
		return '1';
	}

	else if (decryptedLetterInput == two)
	{
		return '2';
	}

	else if (decryptedLetterInput == three)
	{
		return '3';
	}

	else if (decryptedLetterInput == four)
	{
		return '4';
	}

	else if (decryptedLetterInput == five)
	{
		return '5';
	}

	else if (decryptedLetterInput == six)
	{
		return '6';
	}

	else if (decryptedLetterInput == seven)
	{
		return '7';
	}

	else if (decryptedLetterInput == eight)
	{
		return '8';
	}

	else if (decryptedLetterInput == nine)
	{
		return '9';
	}

	else if (decryptedLetterInput == capitalA)
	{
		return 'A';
	}

	else if (decryptedLetterInput == capitalB)
	{
		return 'B';
	}

	else if (decryptedLetterInput == capitalC)
	{
		return 'C';
	}

	else if (decryptedLetterInput == capitalD)
	{
		return 'D';
	}

	else if (decryptedLetterInput == capitalE)
	{
		return 'E';
	}

	else if (decryptedLetterInput == capitalF)
	{
		return 'F';
	}

	else if (decryptedLetterInput == capitalG)
	{
		return 'G';
	}

	else if (decryptedLetterInput == capitalH)
	{
		return 'H';
	}

	else if (decryptedLetterInput == capitalI)
	{
		return 'I';
	}

	else if (decryptedLetterInput == capitalJ)
	{
		return 'J';
	}

	else if (decryptedLetterInput == capitalK)
	{
		return 'K';
	}

	else if (decryptedLetterInput == capitalL)
	{
		return 'L';
	}

	else if (decryptedLetterInput == capitalM)
	{
		return 'M';
	}

	else if (decryptedLetterInput == capitalN)
	{
		return 'N';
	}

	else if (decryptedLetterInput == capitalO)
	{
		return 'O';
	}

	else if (decryptedLetterInput == capitalP)
	{
		return 'P';
	}

	else if (decryptedLetterInput == capitalQ)
	{
		return 'Q';
	}

	else if (decryptedLetterInput == capitalR)
	{
		return 'R';
	}

	else if (decryptedLetterInput == capitalS)
	{
		return 'S';
	}

	else if (decryptedLetterInput == capitalT)
	{
		return 'T';
	}

	else if (decryptedLetterInput == capitalU)
	{
		return 'U';
	}

	else if (decryptedLetterInput == capitalV)
	{
		return 'V';
	}

	else if (decryptedLetterInput == capitalW)
	{
		return 'W';
	}

	else if (decryptedLetterInput == capitalX)
	{
		return 'X';
	}

	else if (decryptedLetterInput == capitalY)
	{
		return 'Y';
	}

	else if (decryptedLetterInput == capitalZ)
	{
		return 'Z';
	}

	else if (decryptedLetterInput == newLine)
	{
		return '\n';
	}

	else if (decryptedLetterInput == tab)
	{
		return '\t';
	}

	else
	{
	return 0;
	}

}