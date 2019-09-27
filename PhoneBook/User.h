#pragma once
class User
{
private:
	size_t lenghtName;
	size_t lenghPhone;
	char *name = nullptr;
	char *phone = nullptr;
public:
	User();
	char * GetName();
	bool SetName(char * name, size_t lenght);
	char * GetPhone();
	bool SetPhone(char * phone, size_t lenght);
	bool IsName();
	bool IsPhone();
	~User();
};

