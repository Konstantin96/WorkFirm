#pragma once
#include "WorkHuman.h"

class Administrator :public Work_Human {
protected:
	string type;
public:
	Administrator(int _zpl, int _age, int _weight, string _name) : Work_Human(_zpl, _age, _weight, _name)
	{
		type = "Administrator";
	}
	virtual void Show();
};