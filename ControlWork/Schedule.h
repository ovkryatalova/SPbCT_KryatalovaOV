#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std::string_literals;
using namespace std;

class Schedule {
public:
	int i = 0;
	int addRec() {

		fstream f;
		f.open("sch.csv");
		string datemas[366];
		string temp, date, surname, name, par, dat, times, name1, par1, sur1, polis, zap = ",", per = "\n";
		while (f.good()) {
			getline(f, datemas[i], ',');
			getline(f, temp, '\n');
			i++;
		}
		f.close();
		f.open("sch.csv");
		int time;

		cout << "Выберите дату записи в формате (дд.мм.гггг):\n";
		cin >> date;
		string s1, s2, s3;
		
		s1 = date[0];
		s1 += date[1];
		s2 = date[3];
		s2 += date[4];
		s3 = date[6];
		for (int i = 7; i < 10; i++)
		{
			s3 += date[i];
		}
		bool check = (s1 < "01") || (s1 > "31") || (s2 < "01") || (s2 > "12") || (s3 < "2000") || (s3 > "2021");
		
		while (check)
		{
			
			cout << "Недопустимый формат записи. Выберите дату записи в формате (дд.мм.гггг):\n";
			
		cin >> date;

		s1 = date[0];
		s1 += date[1];
		s2 = date[3];
		s2 += date[4];
		s3 = date[6];
		for (int i = 7; i < 10; i++)
		{
			s3 += date[i];
		}
		}

		for (int i = 0; i < 366; i++) {
			if (date == datemas[i]) {
				cout << "Время, на которое уже есть записи: \n";
				while (f.good()) {
					getline(f, dat, ',');
					if (dat == date) {
						getline(f, times, ',');
						getline(f, sur1, ',');
						getline(f, name1, ',');
						getline(f, par1, ',');
						getline(f, polis, '\n');
						cout << times << ":00" << " " << sur1 << " " << name1 << " " << par1 << " " << polis << "\n";
					}
					getline(f, temp, '\n');
				}
			}
			else {
			}
		}
		f.close();
		cout << "Выберите свободное время от 9 до 17 ";
		cin >> time;
		cout << "Введите фамилию пациента\n";
		cin >> surname;
		cout << "Введите имя пациента\n";
		cin >> name;
		cout << "Введите отчество пациента\n";
		cin >> par;
		cout << "Введите номер мед. полиса пациента\n";
		cin >> polis;
		f.open("sch.csv", std::ios::app);
		f << per << date << zap << time << zap << surname << zap << name << zap << par << zap << polis;
		f.close();
		cout << endl;
		return 0;
	};
	int dateSchedule() {
		int n = 10;
		string dat, times, sur1, name1, par1, polis, temp;
		string date;
		cout << "\n";
		cout << "Выберите дату:\n";
		cin >> date;
		cout << "Записи на выбранный день:\n";
		fstream f;
		f.open("sch.csv");
		while (f.good()) {
			getline(f, dat, ',');
			if (dat == date) {
				getline(f, times, ',');
				getline(f, sur1, ',');
				getline(f, name1, ',');
				getline(f, par1, ',');
				getline(f, polis, '\n');
				cout << times << ":00" << " " << sur1 << " " << name1 << " " << par1 << " " << polis << "\n";
			}
			else {
				getline(f, temp, '\n');
			}
		}
		f.close();
		cout << endl;
		return 0;
	}
	int fullSchedule() {
		string dat, times, sur1, name1, par1, polis;
		fstream f;
		f.open("sch.csv");
		while (f.good()) {
			getline(f, dat, ',');
			getline(f, times, ',');
			getline(f, sur1, ',');
			getline(f, name1, ',');
			getline(f, par1, ',');
			getline(f, polis, '\n');
			cout << dat << " " << times << ":00" << " " << sur1 << " " << name1 << " " << par1 << " " << polis << "\n";
		}
		cout << endl;
		return 0;
	}
	int deleteRec() {
		string dat, times, sur1, name1, par1, polis, zap = ",", per = "\n";
		int i = 1, j = 0, number;
		fstream f;
		f.open("sch.csv");
		fstream COPY;
		COPY.open("copy.csv");
		while (f.good()) {
			getline(f, dat, ',');
			getline(f, times, ',');
			getline(f, sur1, ',');
			getline(f, name1, ',');
			getline(f, par1, ',');
			getline(f, polis, '\n');
			cout << i << ". " << dat << " " << times << ":00" << " " << sur1 << " " << name1 << " " << par1 << " " << polis << "\n";
			i++;
		}
		f.close();
		f.open("sch.csv");
		cout << "Укажите номер записи пациента, которую надо удалить\n";
		cin >> number;
		i = 1;
		while (f.good()) {
			getline(f, dat, ',');
			getline(f, times, ',');
			getline(f, sur1, ',');
			getline(f, name1, ',');
			getline(f, par1, ',');
			getline(f, polis, '\n');
			if (number == i) {
				cout << "\nСтрока номер " << i << ". " << dat << " " << times << ":00" << " " << sur1 << " " << name1 << " " << par1 << " " << polis << " Удалена\n";
			}
			else {
				if (j == 0) {
					COPY << dat << zap << times << zap << sur1 << zap << name1 << zap << par1 << zap << polis;
					j++;
				}
				else {
					COPY << per << dat << zap << times << zap << sur1 << zap << name1 << zap << par1 << zap << polis;
				}
			}
			i++;
		}
		f.close();
		COPY.close();
		rename("sch.csv", "copy1.csv");
		rename("copy.csv", "sch.csv");
		rename("copy1.csv", "copy.csv");
		return 0;
	}
};

