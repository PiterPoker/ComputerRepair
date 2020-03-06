#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::ComponentModel;
using namespace System::IO;

namespace TxtDataBaseLib {
	public ref class CommandsTableTxt
	{
	private:
		static List<String^>^ listDTableTxt;
		static String^ textFile;
	public:
		CommandsTableTxt();
		static List<String^>^ ReadRwos(String^ name);
		static int WriteRowsList(List<String^>^ listData, String^ name);
		static int AddNewRowsList(List<String^>^ listData, String^ name);
		static int WriteRow(String^ Data, String^ name);
		static int AddNewRow(String^ Data, String^ name);
		static List<String^>^ Search(String^ nameSearch, String^ nameTable);
		static List<String^>^ DeleteRow(String^ strDelete, String^ nameTable);
	};
}
