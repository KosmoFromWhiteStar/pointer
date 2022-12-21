#include <iostream>
#include <cstring>

bool substr(const char* str, const char* str_2)
{
	bool fluger = false;
	
	for (int c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == str_2[0])
		{
			fluger = true;
			for (int p = 1; str[c + p] != '\0' && str_2[p] != '\0'; p++)
			{
				if (str[c + p] != str_2[p])
				{
					fluger = false;
					break;
				}
			}
			if (fluger) return fluger;
		}
	}

	return fluger;
}

int main() 
{
	const char* a = "Hello world";

	const char* b = "lo";

	const char* c = "banana";
	
	std::cout << (substr(a, b) ? "T" : "F") << " " << (substr(a, c) ? "T" : "F");
	return 0;
}