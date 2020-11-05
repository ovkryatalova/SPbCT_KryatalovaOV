#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include "Schedule.h"
using namespace std::string_literals;
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	Schedule rasp;
	bool n = true;
	int option;
	while (n)
	{
		cout << "Выберите действие:\n";
		cout << "1. Проверить расписание на выбранный день\n";
		cout << "2. Добавить запись пациента\n";
		cout << "3. Посмотреть всё расписание\n";
		cout << "4. Удалить запись пациента\n";
		cout << "5. Выйти из программы\n";
		cout << endl;
		cin >> option;
		if (option == 1) {
			cout << endl;
			rasp.dateSchedule();
		}
		else if (option == 2) {
			cout << endl;
			rasp.addRec();
		}
		else if (option == 3) {
			cout << endl;
			rasp.fullSchedule();
		}
		else if (option == 4) {
			cout << endl; 
			rasp.deleteRec();
		}
		else if (option == 5) {
			n = false;
		}
		else {
			cout << "\nВыберите действие из указанных\n"<<endl;
		}
	}
}