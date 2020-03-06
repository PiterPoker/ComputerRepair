#pragma once
#include "MainForm.h"
namespace ComputerRepair {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ProfileForm
	/// </summary>
	public ref class ProfileForm : public System::Windows::Forms::Form
	{
	public:
		ProfileForm(MainForm^ _form1)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			IdOrder = _form1->IdOrder;
			IdUser = _form1->IdUser;
		}
	private: MainForm ^ MainForm1;
	private: int IdOrder;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: int IdUser;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(131, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Форма оформления услуги";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(270, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"№ услуги";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(346, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Фамилия";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Имя";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Номер телефона";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 172);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Имя компьютера";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(31, 208);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Уровень поломки";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(31, 245);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Стоимость";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(232, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(232, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(232, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(157, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(232, 242);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(157, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &ProfileForm::textBox5_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Уровень 1", L"Уровень 2", L"Уровень 3" });
			this->comboBox1->Location = System::Drawing::Point(232, 200);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(157, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ProfileForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(314, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProfileForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(203, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ProfileForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(294, 268);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(95, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Доп. затраты";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ProfileForm::checkBox1_CheckedChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(232, 135);
			this->maskedTextBox1->Mask = L"000-0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(157, 20);
			this->maskedTextBox1->TabIndex = 3;
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 333);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(420, 360);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(420, 360);
			this->Name = L"ProfileForm";
			this->Text = L"Форма оформления услуги";
			this->Load += gcnew System::EventHandler(this, &ProfileForm::ProfileForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: User ^ user = gcnew User();
	private: Order ^ order = gcnew Order();
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked)
			textBox5->ReadOnly = false;
		if (!checkBox1->Checked)
			textBox5->ReadOnly = true;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();
	List<String^>^ listTable = TxtDataBaseLib::JobTxtDB::ListTablseAndDTTxt();
	String^ userString;
	String^ orderString;
	user->LastName = textBox1->Text;
	user->FirstName = textBox2->Text;
	user->Phone = maskedTextBox1->Text;
	order->NameComputer = textBox4->Text;
	order->BeginDate = DateTime::Now;
	order->Cost = System::Convert::ToInt32(textBox5->Text);
	userString = String::Concat(user->LastName,"|", user->FirstName);
	if (TxtDataBaseLib::CommandsTableTxt::Search(userString, listTable[1])== nullptr||
		TxtDataBaseLib::CommandsTableTxt::Search(userString, listTable[1])->Count == 0) {
		user->Id = IdUser += 1;
		order->Id = IdOrder += 1;
		MainForm1->Set(IdOrder, IdUser);
		userString = String::Concat(user->Id, "|", user->LastName, "|", user->FirstName, "|", user->Phone);
		orderString = String::Concat(order->Id, "|", order->NameComputer, "|", order->Lvl, "|", order->Cost, "|", order->BeginDate, "|", order->EndDate, "|", user->Id);
		TxtDataBaseLib::CommandsTableTxt::AddNewRow(userString, listTable[1]);
		TxtDataBaseLib::CommandsTableTxt::AddNewRow(orderString, listTable[2]);
	}
	else
	{
		List<String^>^ searchlist = TxtDataBaseLib::CommandsTableTxt::Search(userString, listTable[1]);
		array<String^>^ coloms = searchlist[0]->Split((char)'|');
		order->Id = IdOrder += 1;
		user->Id = System::Convert::ToInt32(coloms[0]);
		MainForm1->Set(IdOrder);
		orderString = String::Concat(order->Id, "|", order->NameComputer, "|", order->Lvl, "|", order->Cost, "|", order->BeginDate, "|", order->EndDate, "|", user->Id);
		TxtDataBaseLib::CommandsTableTxt::AddNewRow(orderString, listTable[2]);
	}
}
private: System::Void ProfileForm_Load(System::Object^  sender, System::EventArgs^  e) {
	label3->Text = System::Convert::ToString(MainForm1->IdOrder);
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch (System::Convert::ToInt32(comboBox1->SelectedIndex))
	{
	case 0:
		order->Lvl = 1.0;
		order->Cost = order->Lvl * 100;
		textBox5->Text = System::Convert::ToString(order->Cost);
		break;
	case 1:
		order->Lvl = 1.99;
		order->Cost = order->Lvl * 100;
		textBox5->Text = System::Convert::ToString(order->Cost);
		break;
	case 2:
		order->Lvl = 2.49;
		order->Cost = order->Lvl * 100;
		textBox5->Text = System::Convert::ToString(order->Cost);
		break;
	default:
		break;
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
