#include "pch.h"
#include "UsersPhone.h"
using namespace std;

void UsersPhone::InitiolaseArrays()
{
	row = 1;
	this->phoneUsers = new char**[row];
	for (size_t i = 0; i < row; i++)
	{
		phoneUsers[i] = new char *[col];
	}
}

UsersPhone::UsersPhone()
{
	this->phoneUsers = nullptr;
	row = 0;
	col = 2;
}

void UsersPhone::AddContact(User &user)
{
	try {
		if (user.IsName() && user.IsPhone()) {
			if (this->phoneUsers == nullptr)
			{
				InitiolaseArrays();
			}
			this->phoneUsers[row - 1][0] = user.GetName();
			this->phoneUsers[row - 1][1] = user.GetPhone();
		} 
		else
		{
			throw exception("user have null");
		}
	}
	catch (exception ex)
	{
		throw ex;
	}
}


UsersPhone::~UsersPhone()
{
	if (this->phoneUsers != nullptr)
	{
		for (size_t i = 0; i < row; i++)
		{
			delete[] this->phoneUsers[i];
		}
		delete[] phoneUsers;
		phoneUsers = nullptr;
	}
}
