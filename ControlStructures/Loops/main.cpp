#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE
	int n;	//���������� ��������
	int i = 0;//������� �����
	cout << "������� ���������� ��������: "; cin >> n;
	/*while (i < n)
	{
		cout << ++i << " Hello World\n";
		//i++;
	}*/

	while (n--)
	{
		cout << n << "Hello World" << endl;
	}
#endif // WHILE

	char key;	//����� ������� ��� �������
	do
	{
		key = getch();	//ASCII-���
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
}