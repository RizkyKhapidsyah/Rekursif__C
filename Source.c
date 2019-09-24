#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int Pangkat(int x, int y);

int main()
{
	unsigned int a, b;
	printf("Masukkan Nilai           : "); scanf_s("%d", &a);
	printf("Mau Dipangkatkan Berapa? : "); scanf_s("%d", &b);
	printf("Hasil Nilai %d dipangkatkan %d adalah = %d", a, b, Pangkat(a, b));

	_getch();
	return 0;
}

int Pangkat(int x, int y)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		return x * Pangkat(x, y - 1);
	}
}