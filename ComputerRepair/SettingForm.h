#pragma once
#include "MainForm.h"
namespace ComputerRepair {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для SettingForm
	/// </summary>
	public ref class SettingForm : public System::Windows::Forms::Form
	{
	public:
		SettingForm(MainForm^ _form1)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			MainForm1 = _form1;
		}
	private: MainForm ^ MainForm1;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SettingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Настройка БД";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(139, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите имя БД:";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(160, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Удалить БД";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SettingForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(12, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Создать БД";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SettingForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(12, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Удалить таблицу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SettingForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(139, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 20);
			this->textBox2->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Введите имя таблицы:";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(160, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Создать таблицу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SettingForm::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 180);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(268, 121);
			this->listBox1->TabIndex = 13;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(205, 309);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SettingForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(124, 309);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Сохранить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SettingForm::button6_Click);
			// 
			// SettingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 344);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SettingForm";
			this->Text = L"Настройка БД";
			this->Load += gcnew System::EventHandler(this, &SettingForm::SettingForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ name = textBox1->Text;
		int chekError = TxtDataBaseLib::JobTxtDB::CreateDTTxt(name);
	}
	private: void UpdateListBox() {
		listBox1->Items->Clear();
		List<String^>^ var = TxtDataBaseLib::JobTxtDB::ListTablseAndDTTxt();
		for (int i = 1; i<var->Count; i++)
		{
			listBox1->Items->Add(var[i]);
		}
	}

private: System::Void SettingForm_Load(System::Object^  sender, System::EventArgs^  e) {
	UpdateListBox();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	TxtDataBaseLib::JobTxtDB::DropDTTxt();
	UpdateListBox();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name = textBox2->Text;
	int chekError = TxtDataBaseLib::JobTxtDB::CreateDTableTxt(name);
	UpdateListBox();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ name = System::Convert::ToString(listBox1->SelectedItem);
	TxtDataBaseLib::JobTxtDB::DropDTableTxt(name);
	UpdateListBox();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//MainForm1->Set(TxtDataBaseLib::JobTxtDB::ListTablseAndDTTxt());
	this->Close();
}
};
}
