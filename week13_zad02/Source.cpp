#include"BasePerson.h"
#include"Teacher.h"
#include"Student.h"
#include"Person.h"
#include"Assistant.h"
#include<iostream>
#include<vector>
#include"Library.h"

int main() {
	Library l;
	Person p("Michael", "plumber");
	Teacher t("Tihomir", "Algebra");
	Student s("Ivan", "sapokzx");
	Assistant a("Rado", "azxc", "Geometry");
	t.addDis("Linear Algebra");
	l.addMember(&p);
	l.addMember(&t);
	l.addMember(&s);
	l.info();
	std::cout << std::endl;
	l.addMember(&a);
	l.info();
}