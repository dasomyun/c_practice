//������ ������
/*
#include <stdio.h>

int main(void) {
	
	int n1 = 9 , n2 = 2;

	printf("%d + %d = %d \n", n1, n2, (n1 + n2));
	printf("%d - %d = %d \n", n1, n2, (n1 - n2));
	printf("%d * %d = %d \n", n1, n2, (n1*n2));
	printf("%d / %d�� �� = %d \n", n1, n2, (n1 / n2));
	printf("%d  / %d�� ������ = %d \n", n1, n2, n1%n2);
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
	printf("���� one : ");
	scanf_s("%d", &num5);
	printf("���� two : ");
	scanf_s("%d", &num6);
	result = num5 + num6;
	printf(" %d + %d = %d ", num5, num6, result);
	
//��1. ���α׷� ����ڷκ��� �ΰ��� ������ �Է¹޾Ƽ� �� ���� ������ ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
	int m1, m2;
	
	printf("���� �ΰ� �Է��ϼ���");
	scanf_s("%d %d", &m1, &m2);
	
	printf("%d - %d = %d\n", m1, m2, m1-m2);
	printf("%d * %d =%d", m1, m2, m1*m2);
	

	//��2. ���α׷� ����ڷκ��� ������ ���� num1, num2, num3�� ������� �Է¹��� �Ŀ� , ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���
	//num1xnum2+num3
	//�� �Է¹��� ������ ������ 2,4,6�̶�� ������ ���·� ����� �ؾ� �Ѵ�. 
	//2+4x6=14

	int num1, num2, num3;
	int r;
	printf("���� 3���� �Է��ϼ���~");
	scanf_s("%d %d %d ", &num1, &num2, &num3);
	r = num1 + num2 * num3;
	printf("%d+%dx%d=%d", num1, num2, num3, r);
	

	//��3. �ϳ��� ������ �Է¹޾Ƽ�, �� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���. ������ 5�� �ԷµǸ� 25�� ��µǾ�� �Ѵ�.
	int num1;
	printf("�ϳ��� ���� �Է�!");
	scanf_s("%d", &num1);
	printf("%d", num1*num1);
	

	//��4. �Է¹��� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� 7�� 2�� �ԷµǸ� 
	//������ 3, �������� 1�� ��µǾ�� �Ѵ�.

	int num1, num2;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("�� : %d, ������ :  %d \n", num1 / num2, num1%num2);

	

	//��5. �Է¹��� ������ ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
	// ( num1 - num2 ) x ( num2 + num3 ) x ( num3 % num1 )
	
	int num1, num2, num3;
	int result;
	printf(" �� ���� ������ �Է��ϼ���~ : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) *(num2 + num3) *(num3 % num1);
	printf(" ���� ��� : %d\n", result);

		return 0;

}
*/