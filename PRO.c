/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void c(void)
{	

	while (getchar() != '\n');
}
int main(void)
{
	srand(time(NULL));
	int i, j,n=0;
	int count = 0;
	int glass_stepping_stones[10];//�������� ��ȭ���� �ƴ��� �ľ��ϱ� ���� �Լ�
	char name[5][5] = { "����","���","�ϳ�","����","�̳�" };
	char su_name[26] = {NULL,};
	char step[3];
	for (i = 0; i < 10; i++)
	{
		glass_stepping_stones[i] = rand() % 2;
		printf("%d��° ¡�˴ٸ� %d\n", i + 1, glass_stepping_stones[i]);
	}
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 10; i++)
		{
			fgets(step, sizeof(step), stdin);

			if (glass_stepping_stones[i] == 1)
			{
				if (step[0] == 'r')
				{
					printf("%d��° ¡�˴ٸ� ����\n", i + 1);
					count++;
				}
				else if (step[0] == 'l')
				{
					printf("%s: %d��° ¡�˴ٸ� ����\n", name[j], i + 1);
					count = 0;
					break;
				}
				else
				{
					printf("%s�׾�\n", name[j]);
					break;
				}
			}
			else
			{
				if (step[0] == 'r')
				{
					printf("%s: %d��° ¡�˴ٸ� ����\n", name[j], i + 1);
					count = 0;
					break;
				}
				else if (step[0] == 'l')
				{
					printf("%d��° ¡�˴ٸ� ����\n", i + 1);
					count++;
				}
				else
				{
					printf("%s�׾�\n", name[j]);
					break;
				}

			}
			if (count == 10)
			{

				printf("%s ����\n", name[j]);
				for (int k = 0; k < 5; k++)
				{
					su_name[k + (5 * n)] = name[j][k];
				}
				n++;
			}

		}
		if (step[1] != '\n')
			c();
	}
	if (n)
		printf("%s�� �����߽��ϴ�.", su_name);
	else
		printf("�� ����");

	return 0;
}
*/