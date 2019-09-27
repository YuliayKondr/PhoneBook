#include "pch.h"
#include "User.h"
using namespace std;

User::User()
{
	name = nullptr;
	phone = nullptr;
	lenghtName = 0;
	lenghPhone = 0;
}

char * User::GetName()
{
	if (name != nullptr)
	{
		char * _name = new char[lenghtName];
		for (size_t i = 0; i < lenghtName; i++)
		{
			_name[0] = name[0];
		}
		return _name;
	}
	return nullptr;
}

bool User::SetName(char * name, unsigned int lenght)
{
	if (name != nullptr && lenght != 0)
	{
		try {
			lenghtName = lenght;
			this->name = new char[lenghtName];
			for (size_t i = 0; i < lenghtName; i++)
			{
				this->name[i] = name[i];
			}
			return true;
		}
		catch (out_of_range ex)
		{
			return false;
		}
	}
	return false;
}

char * User::GetPhone()
{
	if (this->phone != nullptr)
	{
		char * _phone = new char[this->lenghPhone];
		for (size_t i = 0; i < lenghPhone; i++)
		{
			_phone[0] = phone[0];
		}
		return _phone;
	}
	return nullptr;
}

bool User::SetPhone(char * phone, unsigned int lenght)
{
	if (phone != nullptr && lenght != 0)
	{
		try {
			lenghPhone = lenght;
			this->phone = new char[lenghPhone];
			for (size_t i = 0; i < lenghPhone; i++)
			{
				this->phone[i] = phone[i];
			}
			return true;
		}
		catch (out_of_range ex)
		{
			return false;
		}
	}
	return true;
}


User::~User()
{
	if (name != nullptr)
		delete name;
	if (phone != nullptr)
		delete phone;
}
