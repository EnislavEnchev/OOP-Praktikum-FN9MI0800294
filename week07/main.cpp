#include "Power.h"
#include "Student.h"
#include "Hogwarts.h"

void fightHouses(Hogwarts& hogwarts, const std::string& house1, const std::string& house2) {
	std::cout << "Fight between " << house1 << " and " << house2 << std::endl;
}

int main() {
	
	Power spell("Expelliarmus", 10);
	Power curse("Cruciatus", 20);
	Power charm("Lumos", 5);

	Hogwarts hogwarts;

	// Add some students
	hogwarts.addStudent(Student("Harry Potter"));
	hogwarts.addStudent(Student("Ron Weasley"));
	hogwarts.addStudent(Student("Hermione Granger"));
	hogwarts.addStudent(Student("Draco Malfoy"));
	hogwarts.addStudent(Student("Luna Lovegood"));

	// Assign them to houses
	hogwarts.assignHouse("Harry Potter", "Griffyndor");
	hogwarts.assignHouse("Ron Weasley", "Griffyndor");
	hogwarts.assignHouse("Hermione Granger", "Griffyndor");
	hogwarts.assignHouse("Draco Malfoy", "Slytherin");
	//hogwarts.assignHouse("Luna Lovegood", "Ravenclaw");

	// Give them powers
	hogwarts.givePower("Harry Potter", spell);
	hogwarts.givePower("Ron Weasley", spell);
	hogwarts.givePower("Hermione Granger", curse);
	hogwarts.givePower("Draco Malfoy", curse);
	hogwarts.givePower("Luna Lovegood", charm);

	
	fightHouses(hogwarts, "Griffyndor", "Slytherin");
	
	while (hogwarts.getHouseStudentsCount("Griffyndor") > 0 || hogwarts.getHouseStudentsCount("Slytherin") > 0) {
		Student* s1 = hogwarts.getFirstStudent("Griffyndor");
		Student* s2 = hogwarts.getFirstStudent("Slytherin");
		while (s1->getHealth() > 0 || s2->getHealth() > 0) {
			
			std::cout << s1->getName() << ' ' << s1->getHealth() << " attacks " << s2->getName() << ' ' << s2->getHealth() << std::endl;
			s2->takeDamage(s1->attack());
			if (s2->getHealth() <= 0) {
				std::cout << hogwarts.getHouseStudentsCount("Griffyndor") << std::endl;
				std::cout << hogwarts.removeStudent(s2->getName());
				std::cout << s1->getName() << ' ' << s1->getHealth() << " wins!" << std::endl;
				continue;
			}
			std::cout << s2->getName() << ' ' << s2->getHealth() << " attacks " << s1->getName() << ' ' << s1->getHealth() << std::endl;
			s1->takeDamage(s2->attack());
			if (s1->getHealth() <= 0) {
				
				std::cout << hogwarts.removeStudent(s1->getName());
				std::cout << s2->getName() << ' ' << s2->getHealth() << " wins!" << std::endl;
			}
		}
	}
	if (hogwarts.getHouseStudentsCount("Griffyndor") > 0) {
		std::cout << "Griffyndor wins!" << std::endl;
	}
	else {
		std::cout << "Slytherin wins!" << std::endl;
	}
	return 0;
}