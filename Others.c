#include"jobhead.h"
int Max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
void Fitness()//��Ӧ�Ⱥ���
{	
	int i;
	if(generation%2==1)
		{
			for(i=1;i<chronum;i++)
			{FitFather[i]=ChroOne[i][0]-GreatGeneNum+1;
			FitFather[i]=100000/FitFather[i];
			average[generation]+=ChroOne[i][0];
			}
		}
	else 
		{	
			for(i=1;i<chronum;i++)
			{FitFather[i]=ChroTwo[i][0]-GreatGeneNum+1;
			FitFather[i]=100000/FitFather[i];
			average[generation]+=ChroTwo[i][0];
			}
		}
	for(i=1;i<chronum;i++)
		{
		FitSon[i]=ChroSon[i][0]-GreatGeneNum+1;
		FitSon[i]=100000/FitSon[i];
		}
		average[generation]/=(chronum-1);
}
