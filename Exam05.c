//����� �⺻ �ڷ���
/*
#include <stdio.h>

int mian(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ�� : %d \n", sizeof(ch));
	printf("���� inum�� ũ�� : %d \n", sizeof(inum));
	printf("���� dnum�� ũ�� : %d \n", sizeof(dnum));

	printf("char�� ũ�� : %d \n", sizeof(char));
	printf("int�� ũ�� : %d \n", sizeof(int));
	printf("long�� ũ�� : %d \n", sizeof(long));
	printf("long long�� ũ�� : %d \n", sizeof(long long));
	printf("float�� ũ�� : %d \n", sizeof(float));
	printf("double�� ũ�� : %d \n", sizeof(double));

	//-------------------------------------------------------------------

	double rad;
	double area;
	printf("���� ������ �Է� : ");
	scanf("%f", &rad);
	
	area = rad*rad*3.1415;
	printf("���� ���� : %f \n", area);

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



	//��2. ���α׷� ����ڷκ��� �ΰ��� �Ǽ��� �Է� �޾Ƽ� double�� ������ ��������. �׸��� �� ���� ��Ģ���� ����� ����غ���.

	double n1, n2;
	
	printf("�� �Ǽ����Է��ϼ��� ");
	scanf("%lf %lf" , &n1, &n2);
	printf("%f + %f = %f\n", n1, n2, n1 + n2);
	printf("%f - %f = %f\n", n1, n2, n1 - n2);
	printf("%f * %f = %f\n", n1, n2, n1 * n2);
	printf("%f / %f = %f\n", n1, n2, n1 / n2);


	//��4. ���α׷� ����ڷκ��� �ƽ�Ű �ڵ� ���� ������ ���·� �Է� ���� �Ŀ� �ش� ������ �ƽ�Ű �ڵ� ���ڸ� ����ϴ� ���α׷��� �ۼ��غ���
	//���� �� ���α׷� ����ڰ� ���� 65�� �Է��ϸ� ���� A�� ����ؾ� �Ѵ�.

	int a;
	printf("������ �Է��ϼ��� ");
	scanf("%d", &a);
	printf("%c" ,a);

	//��5. ���α׷� ����ڷκ��� ���ĺ� ���� �ϳ��� �Է¹޴´�. �׸��� �̿� �ش��ϴ� �ƽ�Ű �ڵ� ���� ����ϴ� ���α׷��� �ۼ��غ���.
	//���� �� ���α׷� ����ڰ� A�� �Է��ϸ� ���� 65�� ����ؾ� �Ѵ�.

	char b;
	printf("���ڸ� �Է��ϼ���");
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

	printf("���� 245�� �Ǽ���: %f\n", num1); //245.000000
	printf("�Ǽ� 3.1415�� ������ : %d\n", num2); // 3
	printf("ū ���� 129�� ���� ������: %d\n", ch); //-127








	return 0;
}

*/