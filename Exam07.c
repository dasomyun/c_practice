//실행 F11 
//반복실행을 명령하는 반복문
#include <stdio.h>

int main (void) {

	
	int num = 0;
	while (num < 5)
	{
		printf("Hello world! %d\n", num);
		num++;
	}
	//--------------------------------------------------
	
	int dan = 0, num = 1;
	printf("몇단??");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%dx%d=%d", dan, num, dan*num);
		num++;
	}
	
	//--------------------------------------------------
	//문1. 프로그램 사용자로부터 양의 정수를 하나 입력받아서, 그 수만큼 "Hello world!"를 출력하는 프로그램을 작성해보자.
	
	int num;
	int i = 0;
	printf("반복할 횟수 입력~!");
	scanf("%d", &num);
	
	while (i < num)
	{
		printf("hello world!");
		i++;
	}
	
	//문2. 프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는 프로그램을 작성해보자. 
	// 예를 들어서 5를 입력 받았다면, 3 6 9 12 15를 출력해야 한다.

	int num1;
	int i = 1;
	printf("양의 정수를 입력하세요 ");
	scanf_s("%d", &num1);

	while (i < (num1+1))
	{
		printf("%d\t", i * 3);
		i++;
	}
		
	//문3. 프로그램 사용자로부터 계속해서 정수를 입력받는다. 그리고 그 값을 계속해서 더해 나간다. 
	//이러한 작업은 프로그램 사용자가 0을 입력할 떄까지 계속 되어야 하며, 0이 입력되면 모든 정수의 합을 출력하고 프로그램을 종료시킨다.

	int num=1;
	int i = 0;
	while (num != 0)
	{
		printf("입력");
		scanf_s("%d", &num);
		i = i + num;
	}
	printf("%d", i);
		
	//문4. 프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는 프로그램을 작성해보자.
	
	int num = 9, dan ;
	printf("단을 입력하세요:");
	scanf_s("%d", &dan);

	while (num>0)
	{
		printf("%d * %d = %d\n", dan, num, num*dan);
		num--;
	}
	

	//문5. 프로그램 사용자로부터 입력받은 점수의 평균을 출력하는 프로그램을 작성하되 다음 두 가지 조건을 만족시켜야한다.
	//1, 먼저 몇개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력받는다.
	//2, 평균 값은 소수점 이하까지 계산해서 출력한다.

	int i=0;
	int num;
	int input;
	int tot=0;
	printf("정수를 몇개 입력할거에요?");
	scanf_s("%d", &num);

	while (i++<num)
	{
		printf("정수를 입력하세요\n");
		scanf_s("%d\n", &input);
		tot += input;
	}
	printf("평균값은 %f \n", (double)tot/num);

	//-----------------------------------------------------

	int cur = 2; 
	int is = 0;

	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d x %d = %d ", cur, is, cur*is);
			is++;
		}
		cur++;
	}


//문1. 프로그램 사용자로부터 총 5개의 정수를 입력받아서, 그 수의 합을 출력하는 프로그램을 작성해보자. 단! 한가지 조건이 있다.
//정수는 반드시 1 이상이여야 한다. 만약에 1미만의 수가 입력되는 경우에는 , 이를 입력으로 인정하지 않고 재입력을 요구해야 한다.
//그래서 결국 1이상의 정수 5개를 모두 입력받을 수 있도록 프로그램을 완성해야 한다.

int i=0;
int num=0; 
int sum=0;
while (i < 5)
{

	while (num <= 0)
	{
		printf("0이아닌 정수를 입력하세요(%d번째)", i+1);
		scanf_s("%d", &num);
	}
	sum += num;
	num = 0;
	i++;
	
}
printf("총 합: %d \n", sum);



//문2. 아래의 출력을 보이는 프로그램을 작성해보자.
//*
//o*
//oo*
//ooo*
//ooo*

int i=0, j=0;
int z=0;

while(i < 5)
{
	while (j<i)
	{
		printf("o");
		j++;
	}
	printf("*\n");
	j=0;
	i++;
}


//문1. 사용자가 입력한 값이 0이되면 빠져나오고 합계를 구하라.
// 방법1. 변수 num의 값을 적절히 초기화해서 첫번째 반복조건의 검사결과가 참이 되게 한다.
// 방법2. while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력받게 한다 

//방법1 
int total = 0, num = 1;

	while(num!=0)
	{
		total +=num;
		printf("정수 입력(0 to quit): )");
		scanf("%d", &num);
	}

	printf("합계: %d \n", total);
	


	
//방법2
int total = 0, num = 1;
	
	printf("정수 입력(0 to quit): )");
	scanf("%d", &num);
	
	while(num!=0)
	{
		total +=num;
		printf("정수 입력(0 to quit): )");
		scanf("%d", &num);
	}

	printf("합계: %d \n", total);


//문2. 0이상100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, do~while문 기반으로 구현해보자
//참고로 덧셈의 결과는 2550이 되어야 한다.

int i=1;
int tot=0;
do
{
	tot=tot+i*2;
	i++;
	
 } while (i<51);

printf("%d", tot);


//문3. while문의 중첩관련 예제를 do~while문의 중첩기반으로 재 구현해보자.

int dan=2, num=1;
do
{
	num=1;
	do
	{
		printf("%d * %d = %d\n", dan, num, dan*num);
		num++;
	} while(num<10);
	printf("\n");
	dan++;
} while(dan<10);
 
 
 //문1. 프로그램 사용자로부터 두개의 정수를 입력받아서, 두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산해서 출력하는 프로그램을 작성해보자
 // 예를 들어서 3과 5가 입력되면 3+4+5의 결과가 출력되어야 한다. 그리고 문제를조금 간단히 하기 위해서, 첫번째 입력되는 정수보다 두번째 입력되는 정수가 더 커야 한다는 조건을 걸기로 하겠다.
 
int i,j;
int tot=0;
printf("두개의 정수를 입력하세요 : ");
scanf("%d %d", &i,&j);
 for(;i<j+1; i++){
 	printf("%d \n",i);
 	tot+=i;
 }
printf("합계는 %d입니다.", tot);


//문2. 다음 수식인 계승(factorial)을 계산하는 프로그램을 작성해보자.
//n! = 1X2X3X...Xn
//프로그램 사용자로부터 n에 해당하는 정수를 입력받는다. 그러면 n의 계승 n!를 계산해서 출력이 이뤄져야 한다.

int n;
int tot = 1;
int i = 1;
printf("정수를 입력해라");
scanf("%d",&n );

for (i=1; i<=n; i++)
{
	tot = tot * i;
 } 

	printf("%d! = %d\n", n,tot);


		return 0;
} 
