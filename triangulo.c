#include <unistd.h>

void triangulo(int module)
{
	char a = '*';

	for (int i = 1; i <= module; i++)
	{
		for (int j = 0; j < i; j++)
			write(1, &a, 1);
		write(1, "\n", 1);
	}
}

int main()
{
	triangulo(4);

}
