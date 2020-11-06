#include "GlobalVariables.h"
std::string encrypter(char toBeEncrypted);
bool appropiateResponseChecker(std::string response);
void encrypt()

{
	std::ofstream encrypted("encrypted.txt"); //Create blank file called encrypted .txt (7-10)
	encrypted.open("encrypted.txt");		
	encrypted << "";
	encrypted.close();	
	std::string response{}; //User response to where they want encryptted text outputted
	std::string inputToBeEncrypted{}; //User input that gets encrypted
	char* charArray = new char[inputToBeEncrypted.length() + 1];

	while (appropiateResponseChecker(response) == 0) //Function serves to get response to where the user wants encrypted text outputted, ensure they inputted an appropiate response.
	{
		std::cout << "Please input \"text\" to output encrypted text to encrypted.txt or \"local\" to output encrypted text to this console.\n";
		std::cin >> response;
		if (appropiateResponseChecker(response) == 0)
		{
			std::cout << "Please input an appropiate response!\n";
		}
	}
	std::cout << "Please input the text you'd like to be encrypted.\n\n";

	for (long long int repeated{ 0 }; std::getline(std::cin, inputToBeEncrypted); repeated++)
	{	
		std::getline(std::cin, inputToBeEncrypted);
		if (repeated == 0)
		{
			char* charArray = new char[inputToBeEncrypted.length() + 1];
		}
		strcpy_s(charArray, inputToBeEncrypted.length()+1, inputToBeEncrypted.c_str());
		for (long long unsigned int repeatedNumber{}; repeatedNumber < inputToBeEncrypted.length()+ 1; repeatedNumber++)
		{
			if (response == "local" || response == "Local")
			{
				if (repeatedNumber == 0)
				{
					std::cout << "\nEncrypted Text:\n\n";
				}
				std::cout << encrypter(charArray[repeatedNumber]);
			}
			else if (response == "text" || response == "Text")
			{
				encrypted.open("encrypted.txt", std::ios_base::app);

				encrypted << encrypter(charArray[repeatedNumber]);

				encrypted.close();
			}
		}
		if (response == "text" || response == "Text")
		{
			std::cout << "\nCompleted!";
		}
	}
	}

	//BEGIN SUPPORTING FUNCTIONS

	bool appropiateResponseChecker(std::string response)
	{
		return (response == "text" || response == "Text" || response == "local" || response == "Local");
	}

	std::string encrypter(char toBeEncrypted) //Returns encrypted value of letter for every ASCII character
	{

		if (toBeEncrypted == 'a')
		{
			return a;
		}

		else if (toBeEncrypted == 'b')
		{
			return b;
		}

		else if (toBeEncrypted == 'c')
		{
			return c;
		}

		else if (toBeEncrypted == 'd')
		{
			return d;
		}

		else if (toBeEncrypted == 'e')
		{
			return e;
		}

		else if (toBeEncrypted == 'f')
		{
			return f;
		}

		else if (toBeEncrypted == 'g')
		{
			return g;
		}

		else if (toBeEncrypted == 'h')
		{
			return h;
		}

		else if (toBeEncrypted == 'i')
		{
			return i;
		}

		else if (toBeEncrypted == 'j')
		{
			return j;
		}

		else if (toBeEncrypted == 'k')
		{
			return k;
		}

		else if (toBeEncrypted == 'l')
		{
			return l;
		}

		else if (toBeEncrypted == 'm')
		{
			return m;
		}

		else if (toBeEncrypted == 'n')
		{
			return n;
		}

		else if (toBeEncrypted == 'o')
		{
			return o;
		}

		else if (toBeEncrypted == 'p')
		{
			return p;
		}

		else if (toBeEncrypted == 'q')
		{
			return q;
		}

		else if (toBeEncrypted == 'r')
		{
			return r;
		}

		else if (toBeEncrypted == 's')
		{
			return s;
		}

		else if (toBeEncrypted == 't')
		{
			return t;
		}

		else if (toBeEncrypted == 'u')
		{
			return u;
		}

		else if (toBeEncrypted == 'v')
		{
			return v;
		}

		else if (toBeEncrypted == 'w')
		{
			return w;
		}

		else if (toBeEncrypted == 'x')
		{
			return x;
		}

		else if (toBeEncrypted == 'y')
		{
			return y;
		}

		else if (toBeEncrypted == 'z')
		{
			return z;
		}

		else if (toBeEncrypted == '0')
		{
			return zero;
		}

		else if (toBeEncrypted == '1')
		{
			return one;
		}

		else if (toBeEncrypted == '2')
		{
			return two;
		}

		else if (toBeEncrypted == '3')
		{
			return three;
		}

		else if (toBeEncrypted == '4')
		{
			return four;
		}

		else if (toBeEncrypted == '5')
		{
			return five;
		}

		else if (toBeEncrypted == '6')
		{
			return six;
		}

		else if (toBeEncrypted == '7')
		{
			return seven;
		}

		else if (toBeEncrypted == '8')
		{
			return eight;
		}

		else if (toBeEncrypted == '9')
		{
			return nine;
		}

		else if (toBeEncrypted == 'A')
		{
			return capitalA;
		}

		else if (toBeEncrypted == 'B')
		{
			return capitalB;
		}

		else if (toBeEncrypted == 'C')
		{
			return capitalC;
		}

		else if (toBeEncrypted == 'D')
		{
			return capitalD;
		}

		else if (toBeEncrypted == 'E')
		{
			return capitalE;
		}

		else if (toBeEncrypted == 'F')
		{
			return capitalF;
		}

		else if (toBeEncrypted == 'G')
		{
			return capitalG;
		}

		else if (toBeEncrypted == 'H')
		{
			return capitalH;
		}

		else if (toBeEncrypted == 'I')
		{
			return capitalI;
		}

		else if (toBeEncrypted == 'J')
		{
			return capitalJ;
		}

		else if (toBeEncrypted == 'K')
		{
			return capitalK;
		}

		else if (toBeEncrypted == 'L')
		{
			return capitalL;
		}

		else if (toBeEncrypted == 'M')
		{
			return capitalM;
		}

		else if (toBeEncrypted == 'N')
		{
			return capitalN;
		}

		else if (toBeEncrypted == 'O')
		{
			return capitalO;
		}

		else if (toBeEncrypted == 'P')
		{
			return capitalP;
		}

		else if (toBeEncrypted == 'Q')
		{
			return capitalQ;
		}

		else if (toBeEncrypted == 'R')
		{
			return capitalR;
		}

		else if (toBeEncrypted == 'S')
		{
			return capitalS;
		}

		else if (toBeEncrypted == 'T')
		{
			return capitalT;
		}

		else if (toBeEncrypted == 'U')
		{
			return capitalU;
		}

		else if (toBeEncrypted == 'V')
		{
			return capitalV;
		}

		else if (toBeEncrypted == 'W')
		{
			return capitalW;
		}

		else if (toBeEncrypted == 'X')
		{
			return capitalX;
		}

		else if (toBeEncrypted == 'Y')
		{
			return capitalY;
		}

		else if (toBeEncrypted == 'Z')
		{
			return a;
		}

		else if (toBeEncrypted == '!')
		{
			return exclamation;
		}

		else if (toBeEncrypted == '/')
		{
			return forwardSlash;
		}

		else if (toBeEncrypted == '\\')
		{
			return backSlash;
		}

		else if (toBeEncrypted == '?')
		{
			return questionMark;
		}

		else if (toBeEncrypted == ':')
		{
			return colon;
		}

		else if (toBeEncrypted == ';')
		{
			return semiColon;
		}

		else if (toBeEncrypted == '.')
		{
			return period;
		}

		else if (toBeEncrypted == ',')
		{
			return comma;
		}

		else if (toBeEncrypted == '\"')
		{
			return doubleQuote;
		}

		else if (toBeEncrypted == '\'')
		{
			return singleQuote;
		}

		else if (toBeEncrypted == '+')
		{
			return plus;
		}

		else if (toBeEncrypted == '-')
		{
			return minus;
		}

		else if (toBeEncrypted == '=')
		{
			return equals;
		}

		else if (toBeEncrypted == '<')
		{
			return backArrow;
		}

		else if (toBeEncrypted == '>')
		{
			return forwardArrow;
		}

		else if (toBeEncrypted == '{')
		{
			return initialCurlyBracket;
		}

		else if (toBeEncrypted == '}')
		{
			return finalCurlyBracket;
		}

		else if (toBeEncrypted == '(')
		{
			return initialBracket;
		}

		else if (toBeEncrypted == ')')
		{
			return finalBracket;
		}

		else if (toBeEncrypted == '[')
		{
			return initialSquareBracket;
		}

		else if (toBeEncrypted == ']')
		{
			return finalSquareBracket;
		}

		else if (toBeEncrypted == '*')
		{
			return asterisk;
		}

		else if (toBeEncrypted == '%')
		{
			return percent;
		}

		else if (toBeEncrypted == '#')
		{
			return numberSign;
		}

		else if (toBeEncrypted == '@')
		{
			return atSign;
		}

		else if (toBeEncrypted == '&')
		{
			return andSign;
		}

		else if (toBeEncrypted == '^')
		{
			return upArrow;
		}

		else if (toBeEncrypted == '_')
		{
			return underscore;
		}

		else if (toBeEncrypted == ' ')
		{
			return space;
		}

		else if (toBeEncrypted == '`')
		{
			return tab;
		}

		else if (toBeEncrypted == '\t')
		{
		return tab;
		}

		else if (toBeEncrypted == '~')
		{
			return newLine;
		}

		else if (toBeEncrypted == '\n')
		{
		return newLine;
		}

		else
		{
			return "";
		}

	}