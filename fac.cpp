#include <stdio.h>
//����1��+2��+....+n!
int main()
{
	int num = 0;//�������10����ÿ�����׳����Ҫ��һ��
	int i = 0;
	int count = 0;
	int add = 0;
	scanf_s ("%d",&num);
	printf("%d\n",num);
	
	while (num > 0)
	{
		count = num;
		i = num;
		while (count > 2)
		{
			i = i * (count - 1);
			count--;
		}
		add += i;
		num--;
	}
	printf("�׳�֮��Ϊ:%d",add)��
	return 0;
}