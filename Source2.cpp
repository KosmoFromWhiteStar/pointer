#include <iostream>
#include <cstring>

bool substr(const char* str, const char* str_2)
{
	std::cout << sizeof(str);
	for (int c = 0; str[c] != '\0' || str_2[c] != '\0'; c++)
	{
		if (str[c] != str_2[c]) return false;
	}
	return true;
}

int main() 
{
	const char* a = "Hello world";

	const char* b = "wor";

	const char* c = "banana";
	
	substr(a, b);
	return 0;
}