#pragma once

#include "IdHelper.h"
namespace ComputerRepair {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		static int IdOrder;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	public:
		static int IdUser;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;

	private:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(619, 323);
			this->dataGridView1->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№ Заказа";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Фамилия";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Имя";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Телефон";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"№ Компьютера";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 110;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Ур. Поломки";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Дата принятия заказа";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Дата окнончание работ";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 180;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Итого";
			this->Column9->Name = L"Column9";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->настройкиToolStripMenuItem, this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(643, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::menuItem_Setting_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::menuItem_About_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(556, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(381, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 20);
			this->textBox1->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(556, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(475, 385);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Изменить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(394, 385);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button5->Location = System::Drawing::Point(12, 385);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Отчет";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 27);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 23);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Загрузить данные";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MainForm::printDocument1_PrintPage);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 415);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Computer Repair";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: List<String^>^ tableName;
			 public: void Set(int IdO, int IdU)
			 {
				 IdOrder = IdO;
				 IdUser = IdU;
				 IdHelper::SaveAllId(IdUser, IdOrder);
			 }
			 public: void Set(int IdO)
			 {
				 IdOrder = IdO;
				 IdHelper::SaveAllId(IdUser, IdOrder);
			 }

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		IdHelper^ IdHel = gcnew IdHelper();
		IdUser = IdHelper::GetUserId();
		IdOrder = IdHelper::GetOrderId();
	}
	catch (System::Exception^ e)
	{

	}
}
		 public: static DataGridViewRow^ rowSel;
	public: void LoadDataGrid() {
		tableName = TxtDataBaseLib::JobTxtDB::ListTablseAndDTTxt();
		List<User^>^ UserList = IdHelper::GetUsersList(tableName[1]);
		List<Order^>^ OrderList = IdHelper::GetOrdersList(tableName[2]);
		User^ user = gcnew User();
		int i = 0;
		dataGridView1->Rows->Clear();
		for each (Order^ order in OrderList)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = order->Id;
			dataGridView1->Rows[i]->Cells[4]->Value = order->NameComputer;
			dataGridView1->Rows[i]->Cells[5]->Value = order->Lvl;
			dataGridView1->Rows[i]->Cells[6]->Value = order->BeginDate;
			dataGridView1->Rows[i]->Cells[7]->Value = order->EndDate;
			dataGridView1->Rows[i]->Cells[8]->Value = order->Cost;
			for each (User^ us in UserList)
			{
				if (us->Id == order->UserId) {
					dataGridView1->Rows[i]->Cells[1]->Value = us->LastName;
					dataGridView1->Rows[i]->Cells[2]->Value = us->FirstName;
					dataGridView1->Rows[i]->Cells[3]->Value = us->Phone;
					break;
				}
			}
			i++;
		}
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

private:	 System::Void menuItem_Setting_Click(System::Object ^ sender, System::EventArgs ^ e);
private:	 System::Void menuItem_About_Click(System::Object^  sender, System::EventArgs^  e);
private:	 System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
private:	 System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	LoadDataGrid();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ orderString;  
	orderString = String::Concat(dataGridView1->CurrentRow->Cells[0]->Value, "|", 
		dataGridView1->CurrentRow->Cells[4]->Value);
	TxtDataBaseLib::CommandsTableTxt::DeleteRow(orderString, tableName[2]);
	LoadDataGrid();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		dataGridView1->Rows[i]->Selected = false;
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
			if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr)
				if (dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Contains(textBox1->Text))
				{
					dataGridView1->Rows[i]->Selected = true;
					break;
				}
	}
}
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	rowSel = dataGridView1->CurrentRow;
	e->Graphics->DrawString(L"Чек на оказание услуг № " + rowSel->Cells[0]->Value, this->Font, Brushes::Black, 50, 50);
	e->Graphics->DrawString(L"Фамилия закзчика               " + rowSel->Cells[1]->Value, this->Font, Brushes::Black, 50, 90);
	e->Graphics->DrawString(L"Имя закзчика                         " + rowSel->Cells[2]->Value, this->Font, Brushes::Black, 50, 110);
	e->Graphics->DrawString(L"Номер телефона                  " + rowSel->Cells[3]->Value, this->Font, Brushes::Black, 50, 130);
	e->Graphics->DrawString(L"Номер компьютера              " + rowSel->Cells[4]->Value, this->Font, Brushes::Black, 50, 150);
	e->Graphics->DrawString(L"Уровень поломки                  " + rowSel->Cells[5]->Value, this->Font, Brushes::Black, 50, 180);
	e->Graphics->DrawString(L"Дата принятия                     " + rowSel->Cells[6]->Value, this->Font, Brushes::Black, 50, 210);
	e->Graphics->DrawString(L"Дата окончание                   " + rowSel->Cells[7]->Value, this->Font, Brushes::Black, 50, 240);
	e->Graphics->DrawString(L"Итого                                       " + rowSel->Cells[8]->Value, this->Font, Brushes::Black, 50, 270);
	e->Graphics->DrawString(L"Подпись продавца  _______________________________" , this->Font, Brushes::Black, 50, 315);
	int hight = 1027;

	Pen^ blackPen = gcnew Pen(Color::FromArgb(255, 0, 0, 255),3);
	e->Graphics->DrawRectangle(blackPen, 25, 30, 360, 420);
	
}
};
}
