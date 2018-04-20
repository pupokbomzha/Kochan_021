#include <stdio.h>
#include <stdio.h>

typedef struct martix {
    int value_element;
    int i;
    int j;
    struct matrix * next_string;
    struct matrix * next_column;
} matr;

matr * head;

matr * p_new_matrix(void);
void insert_element(void);
void transpose_matrix(void);
void print_matrix(void);

int main(void)
{
	p_new_matrix();
	insert_element();
	print_matrix();
	transpose_matrix();
	print_matrix();
	return 0;
}

// Создаёт матрицу 2x2
matr * p_new_matrix(void)
{
	matr element_1_1 = {.value_element = 0,
						.i = 1,
						.j = 1,
						.next_string = &element_2_1,
						.next_column = &element_1_2
					   };

	matr element_1_2 = {.value_element = 0,
						.i = 1,
						.j = 2,
						.next_string = &element_2_2,
						.next_column = NULL
					   };

	matr element_2_1 = {.value_element = 0,
						.i = 2,
						.j = 1,
						.next_string = NULL,
						.next_column = &element_2_2
					   };

	matr element_2_2 = {.value_element = 0,
						.i = 2,
						.j = 2,
						.next_string = NULL,
						.next_column = NULL
					   };

	head = &element_1_1;

	return head;
}

// Записывает в элемент_1_2 - 3, а в _2_1 - 2
void insert_element(void)
{
	element_1_2.value_element = 3;
	element_2_1.value_element = 2;
}

// Транспонирует
void transpose_matrix(void)
{
	int x = element_1_2.value_element;
	element_1_2.value_element = element_2_1.value_element;
	element_2_1.value_element = x;
}

// Печатает матрицу
void print_matrix(void)
{
	printf("|%i %i|\n", element_1_1.value_element, element_1_2.value_element);
	printf("|%i %i|\n", element_2_1.value_element, element_2_2.value_element);
}