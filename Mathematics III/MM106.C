#include<stdio.h>
#include<stdlib.h>
int main()
{
		float a, result;
		while(scanf("%f", &a)!=EOF){
				if(a>=8600)
						result=15.5;
				else if(a>=6600.0)
						result=10.1+((15.5-10.1)/(8600.0-6600.0))*(a-6600.0);
				else if(a>=6000.0)
						result=9.2+((10.1-9.2)/(6600.0-6000.0))*(a-6000.0);
				else if(a>=5000.0)
						result=8.4+((9.2-8.4)/(6000.0-5000.0))*(a-5000.0);
				else if(a>=4500.0)
						result=20.0+((8.4-20.0)/(5000.0-45000.0))*(a-4500.0);
				else if(a>=4000.0)
						result=8.0+((20.0-8.0)/(4500.0-4000.0))*(a-4000.0);
				else if(a>=3500.0)
						result=7.5+((8.0-7.5)/(4000.0-3500.0))*(a-3500.0);
				else if(a>=3000.0)
						result=7.2+((7.5-7.2)/(3500.0-3000.0))*(a-3000.0);
				else if(a>=2000.0)
						result=6.9+((7.2-6.9)/(3000.0-2000.0))*(a-2000.0);
				else if(a>=1000.0)
						result=6.5+((6.9-6.5)/(2000.0-1000.0))*(a-1000.0);
				else if(a>=800.0)
						result=7.3+((6.5-7.3)/(1000.0-800.0))*(a-800.0);
				else if(a>=0)
						result=(7.3/800.0)*a;
				else
						result=0;
				printf("%.4f\n", result);
		}
		return 0;
}


