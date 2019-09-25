#include <iostream>
#include "Module.h"
#include "Student.h"
#include "Docent.h"

int main()
{
	//initialize
	Module* OBOPA = new Module("OBOPA", 2);
	Docent* edwin = new Docent("Edwin");
	(*OBOPA).docent = edwin; //pointer naar pointer of niet?

	Module* newTechnologies = new Module("New Technologies", 2);
	Docent* valentijn = new Docent("Valentijn");
	(*newTechnologies).docent = valentijn;

	Module* interfaceDesign = new Module("Interface Design", 2);
	Docent* dimme = new Docent("Dimme");
	(*interfaceDesign).docent = dimme;

	Student* studenten[10];

	for (int i = 0; i <= 10; i++) {
		studenten[0] = new Student("student" + i);
		if (rand() % 2) { OBOPA->AddStudent(studenten[i]); }
		if (rand() % 2) { newTechnologies->AddStudent(studenten[i]); }
		if (rand() % 2) { interfaceDesign->AddStudent(studenten[i]); }
	}

	

	//print modules
	OBOPA->printModule();
	newTechnologies->printModule();
	interfaceDesign->printModule();

	//Print student EC's
	for (int i = 0; i <= 10; i++) {
		studenten[0]->printEC();
	}

	//wijzig EC
	(*OBOPA).EC = 3;

	//Print student EC's
	for (int i = 0; i <= 10; i++) {
		studenten[0]->printEC();
	}

	//verwijder student uit module

	//Print student EC's
	for (int i = 0; i <= 10; i++) {
		studenten[0]->printEC();
	}
}