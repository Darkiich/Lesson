#include <iostream>

using namespace std;

void strlenn(char* word)
{
	int counts = 0;
	for (int i = 0; i < word[i] != '\0'; i++)
	{
		counts++;
	}

	cout << "Length: " << counts << endl;
}

void swapOnASCIISymbols(char* currentWordArr)
{

	for (int i = 0; i < currentWordArr[i] != '\0'; i++)
	{
		currentWordArr[i] = (char)i + 50;
	}
}


int main()
{
	char str[] = "Hello, World!";
	strlenn(str);

	cout << "Before swap: " << str << endl;
	swapOnASCIISymbols(str);
	cout << "After swap: " << str << endl;
}