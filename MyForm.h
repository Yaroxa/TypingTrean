#include <iostream>
#include <Windows.h>
#include <vector>

#pragma once

namespace Laba4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		System::String^ bob = "Жизнь без приколов - как кофе без сахара, скучно и немного горько. Приколы - это веселые блески в серых буднях, маленькие фейерверки смеха в тихом офисе и вдруг возникающие улыбки в метро. Они как спрятанные под подушкой сюрпризы, заставляющие нас забыть о повседневных заботах и наслаждаться моментом. Не забывайте добавлять приколы в свою жизнь - они делают ее красочнее и, безусловно, веселее!";
		int currentIndex = 0;
		int totalKeystrokes = 0; 
		int errorsCount = 0;
		int correctCount = 0; 
		double elapsedTime;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;

		   DateTime startTime;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(139, 158);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(789, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(232, 483);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 69);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(545, 483);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 69);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Стоп";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(853, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"верноневерно";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(495, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Индикатор";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ошибок";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Скорость набора";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(139, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Таймер";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(995, 566);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		timer1->Enabled = false;
		label1->Text = "";
		label2->Text = "";
		label4->Text = "";
		label5->Text = "";
		MyForm::Font = gcnew Drawing::Font(FontFamily::GenericMonospace, 9.0F);
		label3->Text = String::Empty;
		textBox1->Visible = false;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) //старт
	{

		timer1->Enabled = true;
		timer1->Interval = 100;
		label1->Text = "";
		label2->Text = "";
		label4->Text = "";
		textBox1->Visible = true;
		textBox1->Text = bob;
		currentIndex = 0;
		errorsCount = 0;
		correctCount = 0;
		label3->Text = "";
		totalKeystrokes = 0;
		startTime = DateTime::Now;
		this->ActiveControl = nullptr;
	}

	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (timer1->Enabled)
		{
			totalKeystrokes++;

			if (currentIndex < bob->Length) // проверка, что еще не весь текст введен
			{
				if (e->KeyChar == bob[currentIndex]) 
				{
					correctCount++;
					label3->Text = "Ошибок: " + errorsCount + "\nПравильных: " + correctCount;
					currentIndex++;
					label4->Text = "Верно!";
					label4->ForeColor = System::Drawing::Color::Green;

				}
				else
				{
					label4->Text = "Ошибка!";
					label4->ForeColor = System::Drawing::Color::Red;
					errorsCount++;
					label3->Text = "Ошибок: " + errorsCount + "\nПравильных: " + correctCount;
				}

				// обновление текста в textBox1
				textBox1->Text = bob->Substring(currentIndex);

				if (currentIndex == bob->Length) 
				{
					timer1->Enabled = false;
					double minutes = elapsedTime / 60.0;
					int typingSpeed = totalKeystrokes / minutes;
					int percent = ((double)errorsCount / totalKeystrokes) * 100;
					label1->Text = "Скорость набора: " + typingSpeed;
					label2->Text = "Процент ошибок: " + percent + "%";
					elapsedTime = 0;
					totalKeystrokes = 0;
					correctCount = 0;
				}
			}
		}
		
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
	{
		elapsedTime += (double)timer1->Interval / 1000;
		label5->Text = elapsedTime.ToString("F1");
		if (elapsedTime >= 60.0) // Если прошло 60 секунд
		{
			timer1->Enabled = false;

			// Вывод результатов
			double minutes = elapsedTime / 60.0;
			int typingSpeed = static_cast<int>(totalKeystrokes / minutes);
			if (totalKeystrokes == 0)
			{
				label1->Text = "Скорость набора: 0";
				label2->Text = "Процент ошибок: 0%";
			}
			else
			{
				label1->Text = "Скорость набора: " + typingSpeed;
				int percent = static_cast<int>((static_cast<double>(errorsCount) / totalKeystrokes) * 100);
				label2->Text = "Процент ошибок: " + percent + "%";
			}
			elapsedTime = 0;
			totalKeystrokes = 0;
			correctCount = 0;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		timer1->Enabled = false;
		double minutes = elapsedTime / 60.0;
		int typingSpeed = static_cast<int>(totalKeystrokes / minutes);
		if (totalKeystrokes == 0)
		{
			label1->Text = "Скорость набора: 0" ;
			label2->Text = "Процент ошибок: 0%";
		}
		else
		{
			label1->Text = "Скорость набора: " + typingSpeed;
			int percent = ((double)errorsCount / totalKeystrokes) * 100;
			label2->Text = "Процент ошибок: " + percent + "%";
		}
		elapsedTime = 0;
		totalKeystrokes = 0;
		correctCount = 0;
	}
};
}
