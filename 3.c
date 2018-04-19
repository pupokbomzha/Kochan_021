struct matrix 
{
	float value_element;
	int i;
	int j;
	struct matrix * next;
};

int main(void)
{


	return 0;
}

struct matrix * create_matrix(unsigned int n, unsigned int m)
{
	struct matrix * p_new_matrix = (struct matrix *)malloc(sizeof(struct matrix));
	for(int k = 1; k <= m; ++k)
	{
		.j = k;
		for(int k_1 = 1; k_1 <= n; ++k_1)
		{
		struct matrix element = {.value_element = 0,
								 .i = k_1,
								 .next = next;
								};
		}
	}
	return p_new_matrix;
}