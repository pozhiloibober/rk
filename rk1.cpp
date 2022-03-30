// rk1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <list> 
#include <iostream>
using namespace std;


void srednee()//5
{
	const int n = 5, m = 7;
	int a[n][m];
	a[n][m] = rand();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j];

		}
	}
	int temp = 0;
	int c;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
		{
			
			temp += a[i][j];

		}
		
		c = temp / m;
		cout << c << endl;
	}

}    
int elochka(int high)//4
{
	int high;
	cout << "Введите высоту елочки" << endl;
	cin >> high;
	char c = '#';
	for (int i = 1; i <= high; i++)
	{
		for (int k = high - i + 1; k > 0; k--)
		{
			cout << " ";
		}
		for (int j = 0; j < (2 * i - 1); j++)
		{

			cout << c;

		}
		cout << "\n";

	}
}
int perevod_v_dvoich_format(int  a)//2
{
	int a;
	int tmp = 1;
	cout << "Введите число " << endl;
	cin >> a;
	if (a < 0) {
		a *= -1;
		cout << '-';
	}

	if (a == 0) cout << 0;
	else {

		while (tmp <= a) tmp = tmp << 1;

		while (tmp > 1) {
			tmp = tmp >> 1;
			cout << (((tmp & a) != 0) ? 1 : 0);
		}

	}
}
void save()//6
{
	adress* p = head; //указатель на структуру
	FILE* output; // указатель на файл
	if (head == NULL)
	{
		system("cls");
		cout << "Список  пуст!" << endl;
	}
	else
	{
		output = fopen("Output.txt", "wb"); //создаем файл, режим записи данных
		if (output != NULL)
		{
			while (p != NULL)  //запись структуры в файл
			{
				fwrite(p, sizeof(city), 1, output);
				p = p->next;
			}
			cout << "Информация успешно сохранена" << endl;
			fclose(output);
		}
		else
			cout << endl << "\tНе удалось создать файл" << endl;
	}

}
int nom;//7
Student infostud = vvodd();
do
{
	cout << "Введите номер студента" << endl;
	cin >> nom;
	if (nom > len(studenty) & len(studenty) != 0 || nom < 1)
	{
		cout << "Ошибка." << endl;
	}

} while (nom > len(studenty) & len(studenty) != 0 || nom < 1);
insert(studenty, nom, infostud);
c = 0;
	











int main()
{
	setlocale(LC_ALL, "rus");

	
	
}

