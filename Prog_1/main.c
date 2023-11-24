#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
#include "types.h"

int main()
{
	//	th();
	//	lo();
	//	hip1=hip(5,5);

	int lok = 35; // Объявляем переменную "lok", тип целое число (int) и значение = 35
	int pok = 25; // Объявляем переменную "pok", тип целое число (int) и значение = 25
	int ka = 17;  // Объявляем переменную "ka", тип целое число (int) и значение = 17
	int bok = 27; // Объявляем переменную "bok", тип целое число (int) и значение = 27

	if (lok < sqrt(1500)) // Условие: Если значение переменной "lok" меньше результата вычисления квадатного корня из 1500....
	{
		//printf("ka=%d", ka); // .... то вывести на экран значение переменной "ka"
	}

	else							// в противном случае .....
	{
		///printf("%d", lok - bok);	// ....вывести на экран результат вычитания переменных "lok" - "bok"
	}

///	printf ("\n");					// перевести на новую строку

	int age[10];	// Объявляем новый массив с именем "age", тип целых чисел (int) и размерность = 10 (элементов) 
	age[0]=10;		// Присваиваем 1-му элементу массива age[0] значение 10
	age[1]=20;		// Присваиваем 2-му элементу массива age[1] значение 20
	age[2]=30;		// Присваиваем 3-му элементу массива age[2] значение 30
	age[3]=40;		// Присваиваем 4-му элементу массива age[3] значение 40
	age[4]=50;		// Присваиваем 5-му элементу массива age[4] значение 50
	age[5]=60;		// Присваиваем 6-му элементу массива age[5] значение 60
	age[6]=70;		// Присваиваем 7-му элементу массива age[6] значение 70
	age[7]=80;		// Присваиваем 8-му элементу массива age[7] значение 80
	age[8]=90;		// Присваиваем 9-му элементу массива age[8] значение 90
	age[9]=10;		// Присваиваем 10-му элементу массива age[9] значение 100

	for (int i = 0; i < 10; i++) // Объявляем начало цикла. Для цикла объявляем переменную "i" тип int, с начальным значением 0 (i=0); цикл будет считать до тех пор, пока значение переменной "i" < 10; считаем вверх с увеличением на +1 (i++)
	{
	//	printf("age[%d]=%d", i, age[i]);
	//	printf ("\n");
	}
	mult2();
	//printf("\n");


	
	add8();
	printf("\n");
	add3();
	printf("\n");
	sub2();
	printf("\n");
	mult4();
	return 0;
}


void th(void)
{
	for(l = 1; l<11; l++)
	{
		for(m = 1; m<11; m++)
		{
		//	printf ("%d * %d = %d\n", l, m, l*m);
		}
	//	printf ("\n");
	}
}





void lo(void)
{
	// printf("%c%c%c%c\n",a,b,c,d);
	
	//printf(h);

	C = A + B;
//	printf("C = %d\n",C);

//	printf("Zeyd = %f\n",zeyd);

	C = OO + C;
//	printf("C = %d\n",C); 
}





int hip(int cat1,int cat2)
{
	return (int)(sqrt((cat1*cat1)+(cat2*cat2)));
}

int mult(void)
{
	cor = hu * hos + hy; //уровнение
//	printf("%d x %d + %d = %d", hu, hos, hy, cor);

	return cor;
}
void mult2 (void)
{
	int w = mult();

	y = w * yo - you;
	//printf("\n");
	//printf("%d x %d - %d = %d", w, yo, you, y);
}

int add8 (void)
{
	well = ell + gell;
	
	return well;
}

int sub2(void)
{
	wull = ull - gull;
	
	return wull;
}

int add3 (void)
{

	jell = sub2() + add8();

	return jell;
}

void mult4 (void)
{
	real = add3() * bull;

	printf("%d x %d = %d", jell, bull, real);
}

