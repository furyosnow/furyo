#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d;
	printf("������a,b,c��ֵ:\n");
	scanf ("%lf%lf%lf",&a,&b,&c);
	if(a==0)
		printf("����һԪ���η���\n");
	else
	{
		d=b*b-4*a*c;
		if(d==0)
		{
			printf("��������ȵĽ�:\nX=%7.2lf\n",-b/(2*a));
		}
		if(d>0)
		{
			printf("����������ȵĽ�:\nX1=%7.2lf\nX2=%7.2lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
		}
		if(d<0)
			printf("�÷����޽�\n");
		return 0;
	}
}