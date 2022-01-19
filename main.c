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
	printf("=======성적관리시스템=======\n");
	printf("1.학생성적입력\n");
	printf("2.학생점수출력\n");
	printf("3.학생등급출력\n");
	printf("4.프로그램종료\n\n");
	printf("메뉴(1-4)를 입력하세요:");
	
}
void menu1()
{
	int i;
	for(i=j;i<j+1;i++)
	{
		printf("이름:");
		scanf("%s", std[i].name);
		fflush(stdin);
		printf("학번:");
		scanf("%d", &std[i].num);
		fflush(stdin);
		printf("C언어점수(0~100점까지 입력):");
		scanf("%d", &std[i].c);
		printf("JAVA점수(0~100점까지 입력):");
		scanf("%d", &std[i].java);
		printf("HTML점수(0~100점까지 입력):");
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
	printf("학번입력:");
	scanf("%d", &num);
	for(i=0;i<j;i++)
	{
		if(num == std[i].num)
		{
			printf("%s의 C언어점수:%d점\n",std[i].name,std[i].c);
			printf("%s의 JAVA점수:%d점\n",std[i].name,std[i].java);
			printf("%s의 HTML점수:%d점\n",std[i].name,std[i].html);
			
		}
	}
	
	printf("\n");
	
		
}

void menu3()
{
	int i;
	int num;
	printf("학번입력:");
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
			printf("%s님의 평균:%f\n",std[i].name,std[i].avg);
			printf("%s님의 등급:%s\n",std[i].name,std[i].rating);
					
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
	printf("종료합니다");
	
	return 0;
}


