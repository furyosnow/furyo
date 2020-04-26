#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d;
	printf("请输入a,b,c的值:\n");
	scanf ("%lf%lf%lf",&a,&b,&c);
	if(a==0)
		printf("不是一元二次方程\n");
	else
	{
		d=b*b-4*a*c;
		if(d==0)
		{
			printf("有两个相等的解:\nX=%7.2lf\n",-b/(2*a));
		}
		if(d>0)
		{
			printf("有两个不相等的解:\nX1=%7.2lf\nX2=%7.2lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
		}
		if(d<0)
			printf("该方程无解\n");
		return 0;
	}
}