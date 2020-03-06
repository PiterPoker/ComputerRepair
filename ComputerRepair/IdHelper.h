#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
ref struct User
{
	int Id;
	String^ LastName;
	String^ FirstName;
	String^ Phone;
};
ref struct Order
{
	int Id;
	String^ NameComputer;
	double Lvl;
	double Cost;
	DateTime BeginDate;
	DateTime EndDate;
	int UserId;
};
ref class IdHelper
{
public:
	
	static int SaveAllId(int UserId, int OrderId) {
			StreamWriter^ pwriter = gcnew StreamWriter("configID");
		try
		{
			pwriter->WriteLine("UserId|"+UserId);
			pwriter->WriteLine("OrderId|"+OrderId);
			pwriter->Close();
			return 0;
		}
		catch (System::Exception^ e)
		{
			pwriter->Close();
			return -1;
		}
	}
	static int GetUserId() {
			array<String^>^ str;
			StreamReader^ reader = gcnew StreamReader("configID");
		try
		{
			do
			{
				str = reader->ReadLine()->Split((char)'|');
				if (str[0] == System::Convert::ToString("UserId")) {
					reader->Close();
					return System::Convert::ToInt32(str[1]);
				}
			} while (reader->Peek() != -1);
		}
		catch (System::Exception^ e)
		{
			reader->Close();
			return 0;
		}
	}
	static int GetOrderId() {
			array<String^>^ str;
			StreamReader^ reader = gcnew StreamReader("configID");
		try
		{
			do
			{
				str = reader->ReadLine()->Split((char)'|');
				if (str[0] == System::Convert::ToString("OrderId")) {
					reader->Close();
					return System::Convert::ToInt32(str[1]);
				}
			} while (reader->Peek() != -1);
		}
		catch (System::Exception^ e)
		{
			reader->Close();
			return 0;
		}
	}
	static List<User^>^ GetUsersList(String^ nameTable) {
		List<User^>^ userList = gcnew List<User^>();
		StreamReader^ reader = gcnew StreamReader(nameTable);
		try
		{
			do
			{
				array<String^>^ str = reader->ReadLine()->Split((char)'|');
				if (str != nullptr) {
					User^ user = gcnew User();
					user->Id = Convert::ToInt32(str[0]);
					user->LastName = str[1];
					user->FirstName = str[2];
					user->Phone = str[3];
					userList->Add(user);
					str = nullptr;
				}
			} while (reader->Peek() != -1);
			reader->Close();
			return userList;
		}
		catch (System::Exception^ e)
		{
			reader->Close();
			return userList=nullptr;
		}
	}
	static List<Order^>^ GetOrdersList(String^ nameTable) {
		List<Order^>^ orderList = gcnew List<Order^>();
		StreamReader^ reader = gcnew StreamReader(nameTable);

		try
		{
			do
			{
				array<String^>^ str = reader->ReadLine()->Split((char)'|');
				if (str != nullptr) {
					Order^ order = gcnew Order();
					order->Id = Convert::ToInt32(str[0]);
					order->NameComputer = str[1];
					order->Lvl = Convert::ToDouble(str[2]);
					order->Cost = Convert::ToDouble(str[3]);
					order->BeginDate = Convert::ToDateTime(str[4]);
					order->EndDate = Convert::ToDateTime(str[5]);
					order->UserId = Convert::ToInt32(str[6]);
					orderList->Add(order);
					str = nullptr;
				}
			} while (reader->Peek() != -1);
			reader->Close();
			return orderList;
		}
		catch (System::Exception^ e)
		{
			reader->Close();
			return orderList = nullptr;
		}
	}
};