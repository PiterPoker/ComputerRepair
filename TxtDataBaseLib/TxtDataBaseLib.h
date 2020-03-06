// TxtDataBaseLib.h

#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace TxtDataBaseLib {

	public ref class JobTxtDB
	{
	private:
		static void buldPath();
		static List<String^>^ listPath;
		static String^ textFile;
		static String^ pathDataBase;
	public:
		static int CreateDTTxt(String^ name);
		static int CreateDTableTxt(String^ name);
		static int DropDTTxt();
		static int DropDTableTxt(String^ name);
		static List<String^>^ ListTablseAndDTTxt();
	};
}
