#pragma once
#include "WorkHuman.h"

class Programmer :public Work_Human {
protected:
	string type;
public:
	Programmer(int _zpl, int _age, int _weight, string _name) :Work_Human(_zpl, _age, _weight, _name) {
		type = "Programmer";
	}
	virtual void Show();
};