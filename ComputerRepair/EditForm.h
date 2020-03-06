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
	/// Сводка для EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:
		EditForm(MainForm^ _mainF)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			MainF = _mainF;
		}
	private: System::Windows::Forms::TextBox^  textBox3;
	public:
	private: System::Windows::Forms::TextBox^  textBox6;
	private: MainForm ^ MainF;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(130, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Подтвердить готовность";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EditForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(310, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditForm::button1_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(228, 247);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(157, 20);
			this->textBox5->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(228, 174);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(157, 20);
			this->textBox4->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(228, 108);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(157, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(228, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(27, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Стоимость";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(27, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Уровень поломки";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Имя компьютера";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Номер телефона";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Имя";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(342, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(266, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"№ услуги";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(127, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Форма оформления услуги";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(228, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(157, 20);
			this->textBox3->TabIndex = 28;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(228, 210);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(157, 20);
			this->textBox6->TabIndex = 29;
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 333);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
			this->Name = L"EditForm";
			this->Text = L"EditForm";
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: DataGridViewRow ^ rowSel; 
	private: List<String^>^ tableName = TxtDataBaseLib::JobTxtDB::ListTablseAndDTTxt();
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	}
private: System::Void EditForm_Load(System::Object^  sender, System::EventArgs^  e) {
	rowSel = MainF->rowSel;
	label3->Text = rowSel->Cells[0]->Value->ToString();
	textBox1->Text = rowSel->Cells[1]->Value->ToString();
	textBox2->Text = rowSel->Cells[2]->Value->ToString();
	textBox3->Text = rowSel->Cells[3]->Value->ToString();
	textBox4->Text = rowSel->Cells[4]->Value->ToString();
	textBox6->Text = rowSel->Cells[5]->Value->ToString();
	textBox5->Text = rowSel->Cells[8]->Value->ToString();	
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ strOrder = String::Concat(rowSel->Cells[0]->Value->ToString(),"|", rowSel->Cells[4]->Value->ToString());
	List<String^>^ order = TxtDataBaseLib::CommandsTableTxt::Search(strOrder, tableName[2]);
	TxtDataBaseLib::CommandsTableTxt::DeleteRow(order[0], tableName[2]);
	strOrder = order[0];
	array<String^>^ row = strOrder->Split((char) '|');
	row[3] = textBox5->Text;
	row[5] = System::Convert::ToString(DateTime::Now);
	strOrder = String::Concat(row[0],"|", row[1], "|", row[2], "|", row[3], "|", row[4], "|", row[5], "|", row[6]);
	TxtDataBaseLib::CommandsTableTxt::AddNewRow(strOrder, tableName[2]);
	this->Close();
}
};
}
