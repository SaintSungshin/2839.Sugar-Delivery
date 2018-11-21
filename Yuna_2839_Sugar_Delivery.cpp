#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;

	int count5 = 0;	//5kg 봉지 갯수
	int count3 = 0;	//3kg 봉지 갯수


	int i = 0;

	//number/3 초과하면 5kg이 음수가 나올 수 있음
	while (i <= number / 3)
	{
		if ((number - (3 * i)) % 5 == 0) {
			count5 = (number - (3 * i)) / 5;
			count3 = i;
			break;
		}
		i++;	//해도 count3 = i를 위에서 정의해서 count3값은 변하지 않음
	}

	if (i >number / 3)	//4나 7같은것
	{
		count3 = 0;
		count5 = 0;
	}

	if (number < 3 || number>5000)
		return -1;

	cout << "5kg 갯수 : " << count5 << endl;
	cout << "3kg 갯수 : " << count3 << endl;
	cout << "합 : " << count5 + count3 << endl;

	system("pause");

	return 0;
