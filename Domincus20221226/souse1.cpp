#include <iostream>
#include<math.h>

using namespace std;

int main()
{

	int a = 0;
	int b = 0;
	int c = 0;
	float d = 0;
	float x1 = 0;
	float x2 = 0;

	cout << "ax^2+bx+c=0의 근을 구하기 위한 a,b,c를 입력 하시오." << endl;
	cout << "a: ";
	cin >> a;
	cout << endl;

	if (a==0) 
	{
		cout << "오류! 재입력 바람" << endl;
		cin >> a;
		cout << endl;
	}
	else
	{
		cout << "b: ";
		cin >> b;
		cout << endl;

		cout << "c: ";
		cin >> c;
		cout  << endl;

		if (pow(b, 2) - 4 * a * c >= 0)
		{
			cout << "오류! b와 c 재입력 바람"<< endl ;
			cin >> b;
			cin >> c;
		}
		else 
		{
			cout << a << "x^2+" << b << "x+" << c << " = 0의 해는" << endl;

			d=pow(b, 2) - 4 * a * c;

			x1=((-b) + sqrt(d)) / (2*a) ;
			x2=((-b) - sqrt(d)) / (2*a) ;

			cout << x1 << ", " << x2;
		}
	}
return 0;
}