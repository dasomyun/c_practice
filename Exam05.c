//상수와 기본 자료형
/*
#include <stdio.h>

int mian(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기 : %d \n", sizeof(ch));
	printf("변수 inum의 크기 : %d \n", sizeof(inum));
	printf("변수 dnum의 크기 : %d \n", sizeof(dnum));

	printf("char의 크기 : %d \n", sizeof(char));
	printf("int의 크기 : %d \n", sizeof(int));
	printf("long의 크기 : %d \n", sizeof(long));
	printf("long long의 크기 : %d \n", sizeof(long long));
	printf("float의 크기 : %d \n", sizeof(float));
	printf("double의 크기 : %d \n", sizeof(double));

	//-------------------------------------------------------------------

	double rad;
	double area;
	printf("원의 반지름 입력 : ");
	scanf("%f", &rad);
	
	area = rad*rad*3.1415;
	printf("원의 넓이 : %f \n", area);

	//-------------------------------------------------------------------

	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2 : %d , %d \n", sizeof(num1), sizeor(num2));
	printf("size of num3 & num4 : %d , %d \n", sizeof(num3), sizeor(num4));
	printf("size of char add : %d  \n", sizeof(num1+num2));
	printf("size of short add : %d \n", sizeof(num3+num4));

	result1 = num1 + num2;
	result2 = num3 + num4;

	printf("size of result1 & result2 : %d, %d \n", sizeof(result1), sizeof(result2));

	//-------------------------------------------------------------------

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);



	//문2. 프로그램 사용자로부터 두개의 실수를 입력 받아서 double형 변수에 저장하자. 그리고 두 수의 사칙연산 결과를 출력해보자.

	double n1, n2;
	
	printf("두 실수를입력하세요 ");
	scanf("%lf %lf" , &n1, &n2);
	printf("%f + %f = %f\n", n1, n2, n1 + n2);
	printf("%f - %f = %f\n", n1, n2, n1 - n2);
	printf("%f * %f = %f\n", n1, n2, n1 * n2);
	printf("%f / %f = %f\n", n1, n2, n1 / n2);


	//문4. 프로그램 사용자로부터 아스키 코드 값을 정수의 형태로 입력 받은 후에 해당 정수의 아스키 코드 문자를 출력하는 프로그램을 작성해보자
	//예를 들어서 프로그램 사용자가 정수 65를 입력하면 문자 A를 출력해야 한다.

	int a;
	printf("정수를 입력하세요 ");
	scanf("%d", &a);
	printf("%c" ,a);

	//문5. 프로그램 사용자로부터 알파벳 문자 하나를 입력받는다. 그리고 이에 해당하는 아스키 코드 값을 출력하는 프로그램을 작성해보자.
	//예를 들어서 프로그램 사용자가 A를 입력하면 정수 65를 출력해야 한다.

	char b;
	printf("문자를 입력하세요");
	scanf("%c", &b);
	printf("%d", b);

	//-------------------------------------------------------------------

	printf("literal int size : %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size : %d \n", sizeof('A'));

	//-------------------------------------------------------------------
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %f\n", num1); //245.000000
	printf("실수 3.1415를 정수로 : %d\n", num2); // 3
	printf("큰 정수 129를 작은 정수로: %d\n", ch); //-127








	return 0;
}

*/