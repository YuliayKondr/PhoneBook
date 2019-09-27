#pragma once
#include"User.h"
class UsersPhone
{
private:	
	char*** phoneUsers = nullptr;
	size_t row;
	size_t col;
	void InitiolaseArrays();
public:
	UsersPhone();
	void AddContact(User &user);
	~UsersPhone();
};

