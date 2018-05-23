#pragma once
#include "Libery.h"

class Work_Human {
protected:
	int zarplata;	
	int age;		
	string name;	
	int weigth;						
public:
	Work_Human(int _zpl, int _age, int _weight, string _name);
	virtual void Show();
	int GetZarplata();
	void SetZarplata(int _zpl);
	int GetAge();
	void SetAge(int _age);
	int GetWeight();
	void SetWeight(int _weight);
	string GetName();
	void SetName(string _name);
	void reset();
};
