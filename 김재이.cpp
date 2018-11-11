#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << "N을 입력하시오. (단, 3 ≤ N ≤ 5000)" << endl;
	int userNum;
	cin >> userNum;

	int i = 1;
	int sugarThree = 0;
	int sugarFive = 0;

	while (i != 0)
	{
		if ((userNum % 5) == 0)
		{
			sugarFive = userNum / 5;
			cout << "3kg 봉지의 개수 : " << sugarThree << endl;
			cout << "5kg 봉지의 개수 : " << sugarFive << endl;
			break;
		}

		if ((userNum - (3 * i)) % 5 == 0)
		{
			sugarThree = i;
			sugarFive = (userNum - (3 * i)) / 5;
			cout << "3kg 봉지의 개수 : " << sugarThree << endl;
			cout << "5kg 봉지의 개수 : " << sugarFive << endl;
			break;
		}

		if ((userNum % 3) == 0)
		{
			sugarThree = userNum / 3;
			cout << "3kg 봉지의 개수 : " << sugarThree << endl;
			cout << "5kg 봉지의 개수 : " << sugarFive << endl;
			break;
		}

		else 
			cout << "-1" << endl;
		break;
	}


	system("pause");
	return 0;
}