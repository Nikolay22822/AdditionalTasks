/*��������� ������� ��� ����� ����� � � �.

������� ������

� ������������ ������ �������� ����� INPUT.TXT �������� ��� ����������� ����� ����� ������, �� ����������� 109.

�������� ������

� ������������ ������ ��������� ����� OUTPUT.TXT ����� ������� ���� ����� ����� � ����� ����� � � �.*/

#include <iostream> 
#include <fstream> 
using namespace std;

int main() 
   {
	ifstream fin("input.txt");
	char str[50];
	int n = 0;
	int *arr = new int[50];
	while (fin.getline(str, 50)) 
	{
		int c;
		char *sy = str;
		arr[n] = atoi(str);
		while (sy = strchr(sy, ' ')) 
		{
			n++;
			c = atoi(sy++);
			arr[n] = c;
		}
		n++;
	}
	fin.close();
	int sum;
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	delete[] arr;
	double sa = (double)sum;
	ofstream fout("output.txt");
	fout << sa;
	fout.close();
	return 0;
}
