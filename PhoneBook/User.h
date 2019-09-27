#pragma once
class User
{
private:
	unsigned int lenghtName;
	unsigned int lenghPhone;
	char *name = nullptr;
	char *phone = nullptr;
public:
	User();
	char * GetName();
	bool SetName(char * name, unsigned int lenght);
	char * GetPhone();
	bool SetPhone(char * phone, unsigned int lenght);

	~User();
};

