#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


typedef struct{
    char name[20];
    int c;
    int java;
	int html; 
	double avg; 
	char rating[20];
	int num;
}student;




int j = 0;
student std[MAX]={0};

void choice()
{
	printf("=======���������ý���=======\n");
	printf("1.�л������Է�\n");
	printf("2.�л��������\n");
	printf("3.�л�������\n");
	printf("4.���α׷�����\n\n");
	printf("�޴�(1-4)�� �Է��ϼ���:");
	
}
void menu1()
{
	int i;
	for(i=j;i<j+1;i++)
	{
		printf("�̸�:");
		scanf("%s", std[i].name);
		fflush(stdin);
		printf("�й�:");
		scanf("%d", &std[i].num);
		fflush(stdin);
		printf("C�������(0~100������ �Է�):");
		scanf("%d", &std[i].c);
		printf("JAVA����(0~100������ �Է�):");
		scanf("%d", &std[i].java);
		printf("HTML����(0~100������ �Է�):");
		scanf("%d", &std[i].html);
		
		std[i].avg = (double)(std[i].c + std[i].java + std[i].html)/3;
		
	} 
	j++;
	printf("\n");
}
void menu2()
{
	int num;
	int i; 
	printf("�й��Է�:");
	scanf("%d", &num);
	for(i=0;i<j;i++)
	{
		if(num == std[i].num)
		{
			printf("%s�� C�������:%d��\n",std[i].name,std[i].c);
			printf("%s�� JAVA����:%d��\n",std[i].name,std[i].java);
			printf("%s�� HTML����:%d��\n",std[i].name,std[i].html);
			
		}
	}
	
	printf("\n");
	
		
}

void menu3()
{
	int i;
	int num;
	printf("�й��Է�:");
	scanf("%d", &num);
	for(i=0;i<j;i++)
	{
		if(num==std[i].num)
		{
			
					if(std[i].avg >=90 && std[i].avg <= 100)
					{
						strcpy(std[i].rating,"A");
					}
					else if (std[i].avg >=80)
					{
							strcpy(std[i].rating,"B");
					}
						else if (std[i].avg >=70)
					{
						strcpy(std[i].rating,"C");
					}
						else if (std[i].avg >=60)
					{
							strcpy(std[i].rating,"D");
					}
						else
					{
							strcpy(std[i].rating,"F");
					}
			printf("%s���� ���:%f\n",std[i].name,std[i].avg);
			printf("%s���� ���:%s\n",std[i].name,std[i].rating);
					
		}
	}
	
	
	printf("\n");
}

void switch_menu(int a)
{
	switch(a)
	{
		case 1:
			menu1();
			break;
		case 2:
			menu2();
			break;
			
		case 3:
			menu3();
			break;
			
	}
}

int main()
{
	int num;
	
	while(num != 4)
	{
		choice();
		scanf("%d",&num);
		switch_menu(num);
	}
	printf("�����մϴ�");
	
	return 0;
}


