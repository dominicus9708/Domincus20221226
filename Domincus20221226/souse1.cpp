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

	cout << "ax^2+bx+c=0�� ���� ���ϱ� ���� a,b,c�� �Է� �Ͻÿ�." << endl;
	cout << "a: ";
	cin >> a;
	cout << endl;

	if (a==0) 
	{
		cout << "����! ���Է� �ٶ�" << endl;
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
			cout << "����! b�� c ���Է� �ٶ�"<< endl ;
			cin >> b;
			cin >> c;
		}
		else 
		{
			cout << a << "x^2+" << b << "x+" << c << " = 0�� �ش�" << endl;

			d=pow(b, 2) - 4 * a * c;

			x1=((-b) + sqrt(d)) / (2*a) ;
			x2=((-b) - sqrt(d)) / (2*a) ;

			cout << x1 << ", " << x2;
		}
	}
return 0;
}