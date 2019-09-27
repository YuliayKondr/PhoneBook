#include "pch.h"
#include "User.h"


User::User()
{
	name = new char[256];
	phone = new char[10];
}


User::~User()
{
	if (name != nullptr)
		delete name;
	if (phone != nullptr)
		delete phone;
}
