#pragma once
class UsersPhone
{
private:	
	char*** phoneUsers = nullptr;
	size_t row;
	size_t col;
	void InitiolaseArrays();
public:
	UsersPhone();
	~UsersPhone();
};

