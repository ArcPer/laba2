#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int* a;
	int key, N, i, j;
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	cout << "������� ����������� ��������� =";
	cin >> N;
	a = new int[N];
	for (i = 0; i < N; ++i)
		a[i] = rand() % 99;

	float start_time, end_time;

	start_time = clock();
	for (i = 1; i < N; i++)
	{
		key = a[i];
		for (j = i - 1; j >= 0 && a[j] > key; j--)
			a[j + 1] = a[j];

		a[j + 1] = key;
	}
	end_time = clock();

	cout << "�������������� ������: " << endl;
	for (int i = 0; i < N; i++)
		cout << a[i] << '\t';
	cout << "" << endl;
	cout << "����� ����������,(��)=";
	cout << end_time - start_time << endl;
}
