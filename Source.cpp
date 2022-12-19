#include <iostream>
void swope(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int a = 10, b = 20;
	swope(&a, &b);
	std::cout << a << " " << b;
}