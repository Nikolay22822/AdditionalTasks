/*Требуется сложить два целых числа А и В.

Входные данные

В единственной строке входного файла INPUT.TXT записано два натуральных числа через пробел, не превышающих 109.

Выходные данные

В единственную строку выходного файла OUTPUT.TXT нужно вывести одно целое число — сумму чисел А и В.*/

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
