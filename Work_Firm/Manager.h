#pragma once
#include "WorkHuman.h"

class Manager :public Work_Human {
protected:
	string type;
public:
	Manager(int _zpl, int _age, int _weight, string _name) : Work_Human(_zpl, _age, _weight, _name)
	{
		type = "Manager";
	}
	virtual void Show();
};