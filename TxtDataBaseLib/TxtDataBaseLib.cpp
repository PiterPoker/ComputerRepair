// Главный DLL-файл.

#include "stdafx.h"

#include "TxtDataBaseLib.h"
#include "CommandsTableTxt.h"
#include <list>

using namespace System;
using namespace System::IO;


void TxtDataBaseLib::JobTxtDB::buldPath()
{
	try 
	{
		int index = 0;
		listPath = gcnew List<String^>();
		StreamReader^ reader = gcnew StreamReader("configDatabase");
		do
		{
			listPath->Add(reader->ReadLine());
		} while (index++, reader->Peek() != -1);
		reader->Close();
		pathDataBase = String::Concat(listPath[0],"\\");
	}
	catch (FileNotFoundException^ ex)
	{
		listPath->Add("Файл не найден");
	}
	catch (System::Exception^ e)
	{
		listPath->Add("-1");
	}
}

int TxtDataBaseLib::JobTxtDB::CreateDTTxt(String ^ name)
{
	try
	{
		StreamWriter^ pwriter = gcnew StreamWriter("configDatabase");
		pwriter->WriteLine(name);
		pwriter->Close();
		Directory::CreateDirectory(name);
		return 0;
	}
	catch (System::Exception^ e)
	{
		return -1;
	}
}

int TxtDataBaseLib::JobTxtDB::CreateDTableTxt(String ^ name)
{
	try
	{
		buldPath();
		StreamWriter^ pwriter = gcnew StreamWriter(pathDataBase + name);
		pwriter->Close();
		pwriter = gcnew StreamWriter("configDatabase", true);
		pwriter->WriteLine(pathDataBase + name);
		pwriter->Close();
		return 0;
	}
	catch (System::Exception^ e)
	{
		return -1;
	}
}

int TxtDataBaseLib::JobTxtDB::DropDTTxt()
{
	try 
	{
		buldPath(); 
		for (int index = listPath->Count-1; index > 0; index--) 
		{
			File::Delete(listPath[index]);
		}
		Directory::Delete(listPath[0]);	
		File::Delete("configDatabase");
		return 0;
	}
	catch (System::Exception^ e) 
	{
		return -1;
	}
}

int TxtDataBaseLib::JobTxtDB::DropDTableTxt(String ^ name)
{
	try 
	{
		File::Delete(name);
		listPath->Remove(name);
		StreamWriter^ pwriter = gcnew StreamWriter("configDatabase");
		for each (String^ var in listPath)
		{
			pwriter->WriteLine(var);
		}
		pwriter->Close();
		return 0;
	}
	catch (System::Exception^ e) 
	{
		return -1;
	}
}

List<String^>^ TxtDataBaseLib::JobTxtDB::ListTablseAndDTTxt()
{
	try 
	{
		buldPath();
		return listPath;
	}
	catch (System::Exception^ e) 
	{
		return listPath;
	}
}
