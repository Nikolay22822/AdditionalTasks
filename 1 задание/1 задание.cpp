/*��������� ������� ��� ����� ����� � � �.

������� ������

� ������������ ������ �������� ����� INPUT.TXT �������� ��� ����������� ����� ����� ������, �� ����������� 109.

�������� ������

� ������������ ������ ��������� ����� OUTPUT.TXT ����� ������� ���� ����� ����� � ����� ����� � � �.*/

#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, const char* argv[])
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int a, b, sum;
	a = 2;
	b = 3;
	sum = a + b;
	fout << sum << endl;
	return 0;
}
