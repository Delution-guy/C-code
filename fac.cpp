#include <stdio.h>
//计算1！+2！+....+n!
int main()
{
	int num = 0;//例如输出10，则每个数阶乘完后要减一。
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
	printf("阶乘之和为:%d",add)；
	return 0;
}