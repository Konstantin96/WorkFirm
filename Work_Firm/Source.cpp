#include "WorkHuman.h"
#include "Administrator.h"
#include "Manager.h"
#include "Programmer.h"

int main() {
	Work_Human* rab[3];

	rab[0] = new Administrator(1200, 16, 65, "Kostya");
	rab[1] = new Manager(980, 55, 52, "Sasha");
	rab[2] = new Programmer(800, 52, 48, "Dasha");

	rab[2]->reset();
	rab[0]->SetAge(22);
	rab[0]->SetZarplata(100000);
	rab[2]->SetName("Grisha");

	for (int i = 0; i < 3; i++)
	{
		rab[i]->Show();
	}

	for (int i = 0; i < 3; i++)
	{
		delete rab[i];
	}

	system("pause");
	return 0;
}