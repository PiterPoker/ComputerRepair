#include "MainForm.h"

#include "SettingForm.h"
#include "AboutForm.h"
#include "ReportForm.h"
#include "ProfileForm.h"
#include "EditForm.h"

namespace ComputerRepair {
	System::Void MainForm::menuItem_Setting_Click(System::Object^  sender, System::EventArgs^  e) {
		SettingForm ^Sf = gcnew SettingForm(this);
		Sf->ShowDialog();
	}
	System::Void MainForm::menuItem_About_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		AboutForm ^Af = gcnew AboutForm();
		Af->ShowDialog();
	}
	System::Void MainForm::button5_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		/*ReportForm ^Rf = gcnew ReportForm();
		Rf->ShowDialog();*/
		printPreviewDialog1->Document = printDocument1;
		printPreviewDialog1->ShowDialog();
	}
	System::Void MainForm::button4_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		ProfileForm ^Pf = gcnew ProfileForm(this);
		Pf->ShowDialog();
	}
	System::Void MainForm::button3_Click(System::Object ^ sender, System::EventArgs ^ e)
	{
		rowSel = dataGridView1->CurrentRow;
		EditForm ^Ef = gcnew EditForm(this);
		Ef->ShowDialog();
	}
}