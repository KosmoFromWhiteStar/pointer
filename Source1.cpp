#include <iostream>
void rewriter(int* c)
{
	for (int i = 0; i < 5; i++)
	{
		std::swap(c[i], c[9 - i]);
	}
}

int main() 
{
	int c[] = { 1,2,3,4,5,6,7,8,9,10 };
	//std::cout << sizeof(c);
	rewriter(c);
	for (int i = 0; (sizeof(c) / sizeof(int)) > i; i++) std::cout << c[i] << " ";

}