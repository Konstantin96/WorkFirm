#include "WorkHuman.h"

Work_Human::Work_Human(int _zpl, int _age, int _weight, string _name)
{
	zarplata = _zpl;
	age = _age;
	weigth = _weight;
	name = _name;
}

void Work_Human::Show()
{
	cout << "\n                age: " << age;
	cout << ";\n                name: " << name;
	cout << ";\n                weigth: " << weigth;
	cout << ";\n                zarplata: " << zarplata << "$.";
	cout << endl;
}

int Work_Human::GetZarplata()
{
	return zarplata;
}

void Work_Human::SetZarplata(int _zpl)
{
	zarplata = _zpl;
}

int Work_Human::GetAge()
{
	return age;
}

void Work_Human::SetAge(int _age)
{
	age = _age;
}

int Work_Human::GetWeight()
{
	return weigth;
}

void Work_Human::SetWeight(int _weight)
{
	weigth = _weight;
}

string Work_Human::GetName()
{
	return name;
}

void Work_Human::SetName(string _name)
{
	name = _name;
}

void Work_Human::reset()
{
	zarplata = 0;
	age = 0;
	name = "";
	weigth = 0;
}
