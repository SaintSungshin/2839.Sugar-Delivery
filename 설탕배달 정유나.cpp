#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;

	int count5 = 0;	//5kg ���� ����
	int count3 = 0;	//3kg ���� ����


	int i = 0;

	//number/3 �ʰ��ϸ� 5kg�� ������ ���� �� ����
	while (i <= number / 3)
	{
		if ((number - (3 * i)) % 5 == 0) {
			count5 = (number - (3 * i)) / 5;
			count3 = i;
			break;
		}
		i++;	//�ص� count3 = i�� ������ �����ؼ� count3���� ������ ����
	}

	if (i >number / 3)	//4�� 7������
	{
		count3 = 0;
		count5 = 0;
	}

	if (number < 3 || number>5000)
		return -1;

	cout << "5kg ���� : " << count5 << endl;
	cout << "3kg ���� : " << count3 << endl;
	cout << "�� : " << count5 + count3 << endl;

	system("pause");

	return 0;