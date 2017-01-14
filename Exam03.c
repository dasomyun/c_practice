//변수와 연산자
/*
#include <stdio.h>

int main(void) {
	
	int n1 = 9 , n2 = 2;

	printf("%d + %d = %d \n", n1, n2, (n1 + n2));
	printf("%d - %d = %d \n", n1, n2, (n1 - n2));
	printf("%d * %d = %d \n", n1, n2, (n1*n2));
	printf("%d / %d의 몫 = %d \n", n1, n2, (n1 / n2));
	printf("%d  / %d의 나머지 = %d \n", n1, n2, n1%n2);
	printf("n1++ : %d \n ", n1++); // 9
	printf("n1: %d \n\n", n1); // 10
	printf("n2: %d \n", n2); // 2
	printf("++n2 : %d \n", ++n2); // 3
 	printf("num2: %d \n", n2); // 3

		//-------------------------------------------------------------------

	int num1= 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);

	
	int result; 
	int num5, num6;
	printf("정수 one : ");
	scanf_s("%d", &num5);
	printf("정수 two : ");
	scanf_s("%d", &num6);
	result = num5 + num6;
	printf(" %d + %d = %d ", num5, num6, result);
	
//문1. 프로그램 사용자로부터 두개의 정수를 입력받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성해보자.
	int m1, m2;
	
	printf("정수 두개 입력하세요");
	scanf_s("%d %d", &m1, &m2);
	
	printf("%d - %d = %d\n", m1, m2, m1-m2);
	printf("%d * %d =%d", m1, m2, m1*m2);
	

	//문2. 프로그램 사용자로부터 세개의 정수 num1, num2, num3를 순서대로 입력받은 후에 , 다음 연산의 결과를 출력하는 프로그램을 작성해보자
	//num1xnum2+num3
	//단 입력받은 세개의 정수가 2,4,6이라면 다음의 형태로 출력을 해야 한다. 
	//2+4x6=14

	int num1, num2, num3;
	int r;
	printf("정수 3개를 입력하세요~");
	scanf_s("%d %d %d ", &num1, &num2, &num3);
	r = num1 + num2 * num3;
	printf("%d+%dx%d=%d", num1, num2, num3, r);
	

	//문3. 하나의 정수를 입력받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자. 예를들어서 5가 입력되면 25가 출력되어야 한다.
	int num1;
	printf("하나의 정수 입력!");
	scanf_s("%d", &num1);
	printf("%d", num1*num1);
	

	//문4. 입력받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자. 예를 들어서 7과 2가 입력되면 
	//몫으로 3, 나머지로 1이 출력되어야 한다.

	int num1, num2;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("몫 : %d, 나머지 :  %d \n", num1 / num2, num1%num2);

	

	//문5. 입력받은 세개의 정수 num1, num2, num3를 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
	// ( num1 - num2 ) x ( num2 + num3 ) x ( num3 % num1 )
	
	int num1, num2, num3;
	int result;
	printf(" 세 개의 정수를 입력하세요~ : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) *(num2 + num3) *(num3 % num1);
	printf(" 연산 결과 : %d\n", result);

		return 0;

}
*/