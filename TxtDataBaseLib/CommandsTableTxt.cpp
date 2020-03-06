#include "stdafx.h"
#include "CommandsTableTxt.h"

TxtDataBaseLib::CommandsTableTxt::CommandsTableTxt()
{
}

List<String^>^ TxtDataBaseLib::CommandsTableTxt::ReadRwos(String ^ name)
{
	listDTableTxt = gcnew List<String^>();
	StreamReader^ reader = gcnew StreamReader(name);
	try
	{
		do
		{
			listDTableTxt->Add(reader->ReadLine());
		} while (reader->Peek() != -1);
		return listDTableTxt;
	}
	catch (System::Exception^ e)
	{
		reader->Close();
		return listDTableTxt = nullptr;
	}
}

int TxtDataBaseLib::CommandsTableTxt::WriteRowsList(List<String^>^ listData, String ^ name)
{
	StreamWriter^ pwriter = gcnew StreamWriter(name);
	try
	{
		for each (String^ var in listData)
		{
			pwriter->WriteLine(var);
		}	
		pwriter->Close();
		return 0;
	}
	catch (System::Exception^ e)
	{
		pwriter->Close();
		return -1;
	}
}

int TxtDataBaseLib::CommandsTableTxt::AddNewRowsList(List<String^>^ listData, String ^ name)
{
	StreamWriter^ pwriter = gcnew StreamWriter(name, true);
	try
	{
		for each (String^ var in listData)
		{
			pwriter->WriteLine(var);
		}
		pwriter->Close();
		return 0;
	}
	catch (System::Exception^ e)
	{
		pwriter->Close();
		return -1;
	}
}

int TxtDataBaseLib::CommandsTableTxt::WriteRow(String ^ Data, String ^ name)
{
	StreamWriter^ pwriter = gcnew StreamWriter(name);
	try
	{
		pwriter->WriteLine(Data);
		pwriter->Close();
		return 0;
	}
	catch (System::Exception^ e)
	{
		pwriter->Close();
		return -1;
	}
}

int TxtDataBaseLib::CommandsTableTxt::AddNewRow(String ^ Data, String ^ name)
{
	StreamWriter^ pwriter = gcnew StreamWriter(name, true);
	try
	{
		pwriter->WriteLine(Data);
		pwriter->Close();
		return 0;
	}
	catch (System::Exception^ e)
	{
		pwriter->Close();
		return -1;
	}
}

List<String^>^ TxtDataBaseLib::CommandsTableTxt::Search(String ^ nameSearch, String ^ nameTable)
{
	listDTableTxt = gcnew List<String^>();
	StreamReader^ reader = gcnew StreamReader(nameTable);
	try
	{
		do
		{
			textFile = String::Concat(reader->ReadLine());
			if(textFile->Contains(nameSearch)==true)
				listDTableTxt->Add(textFile);
		} while (reader->Peek() != -1);
		reader->Close();
		return listDTableTxt;
	}
	catch (System::Exception^ e)
	{
		reader->Close();
		return listDTableTxt = nullptr;
	}
}

List<String^>^ TxtDataBaseLib::CommandsTableTxt::DeleteRow(String ^ strDelete, String ^ nameTable)
{
	listDTableTxt = gcnew List<String^>();
	StreamReader^ reader = gcnew StreamReader(nameTable);
	try
	{
		do
		{
			textFile = String::Concat(reader->ReadLine());
			if (textFile->Contains(strDelete)!=true)
				listDTableTxt->Add(textFile);
		} while (reader->Peek() != -1);
		reader->Close();
		WriteRowsList(listDTableTxt, nameTable);
		return listDTableTxt;
	}
	catch (System::Exception^ e)
	{
		reader->Close();
		return listDTableTxt = nullptr;
	}
}
