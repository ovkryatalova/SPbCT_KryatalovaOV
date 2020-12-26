#pragma once
#include "MathLibrary.h"
#include <iostream>
#include <mutex>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <chrono>
#include <locale.h>
#include <Windows.h>


namespace UP_KryatalovaOV {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Threading;
	


	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DateTime datetime = DateTime::Now;
			this->label2->Text = datetime.ToString(); //Вывод текущей даты
			
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	//Ïîòîêè
	private: Thread^ myThread1;
	private: Thread^ myThread2;
	private: Thread^ myThread3;
	private: Thread^ myThread4;
	private: Thread^ myThread5;
	


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;


	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Êðÿòàëîâà Îëüãà, 590 ãðóïïà";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(244, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Äàòà";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(101, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ïîêàçàòü èñõîäíûé ôàéë";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox1->Location = System::Drawing::Point(12, 72);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(222, 120);
			this->textBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(247, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 43);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Ñîðòèðîâêà";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(70, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Èñõîäíûé ôàéë";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox2->Location = System::Drawing::Point(248, 72);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(222, 120);
			this->textBox2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(283, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Îòñîðòèðîâàííûé ôàéë";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 281);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"ÓÏ_ÊðÿòàëîâàÎÂ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	//Чтение и вывод исходного файла
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ name = "before.txt";
	StreamReader^ file = File::OpenText(name); 
	textBox1->Text = file->ReadToEnd(); 
	button2->Enabled = true;
	
}
	
	//Функции потоков
public: void sort1() {
	char letter;
	ifstream f;
	std::vector<char> v1, v2;
	f.open("before.txt"); 
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v1.push_back(letter); //Запись содержимого исходного файла в вектор
	}
	sort(v1.begin(), v1.end());  //Сортировка по возрастанию
	reverse(v1.begin(), v1.end()); //Переворот (сортировка по убыванию)
	addToFile(v1); //Запись в итоговый файл
	
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v2.push_back(letter);
	}
	sort(v2.begin(), v2.end());
	reverse(v2.begin(), v2.end());
	addToFile(v2);
	f.close();
}

public: void sort2() {
	char letter;
	ifstream f;
	std::vector<char> v3, v4;
	f.open("before.txt");
	for (int i = 0; i < 20; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v3.push_back(letter);
	}
	sort(v3.begin(), v3.end());
	reverse(v3.begin(), v3.end());
	addToFile(v3);
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v4.push_back(letter);
	}
	sort(v4.begin(), v4.end());
	reverse(v4.begin(), v4.end());
	addToFile(v4);
	f.close();
}

public: void sort3() {
	char letter;
	ifstream f;
	std::vector<char> v5, v6;
	f.open("before.txt");
	for (int i = 0; i < 40; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v5.push_back(letter);
	}
	sort(v5.begin(), v5.end());
	reverse(v5.begin(), v5.end());
	addToFile(v5);
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v6.push_back(letter);
	}
	sort(v6.begin(), v6.end());
	reverse(v6.begin(), v6.end());
	addToFile(v6);
	f.close();
}

public: void sort4() {
	char letter;
	ifstream f;
	std::vector<char> v7, v8;
	f.open("before.txt");
	for (int i = 0; i < 60; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v7.push_back(letter);
	}
	sort(v7.begin(), v7.end());
	reverse(v7.begin(), v7.end());
	addToFile(v7);
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v8.push_back(letter);
	}
	sort(v8.begin(), v8.end());
	reverse(v8.begin(), v8.end());
	addToFile(v8);
	f.close();
}

public: void sort5() {
	char letter;
	ifstream f;
	std::vector<char> v9, v10;
	f.open("before.txt");

	for (int i = 0; i < 80; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v9.push_back(letter);
	}
	sort(v9.begin(), v9.end());
	reverse(v9.begin(), v9.end());
	addToFile(v9);

	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v10.push_back(letter);
	}
	sort(v10.begin(), v10.end());
	reverse(v10.begin(), v10.end());
	addToFile(v10);
	f.close();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ofstream filestream("after.txt");
	filestream.close();
	
	//создание потоков
	myThread1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort1));
	myThread2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort2));
	myThread3 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort3));
	myThread4 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort4));
	myThread5 = gcnew Thread(gcnew ThreadStart(this, &MyForm::sort5));
	
	//запуск потоков
	myThread1->Start();
	myThread1->Join();
	myThread2->Start();
	myThread2->Join();
	myThread3->Start();
	myThread3->Join();
	myThread4->Start();
	myThread4->Join();
	myThread5->Start();
	myThread5->Join();


	//считывание итогового файла
	String^ name = "after.txt";
	StreamReader^ file = File::OpenText(name);
	
	//вывод на экран
	textBox2->Text = file->ReadToEnd();
	file->Close();
}
};
}
