#include"Question.h"
#include"OpenQuestion.h"
#include<iostream>

OpenQuestion::OpenQuestion(const std::string& t, double p) {
	text = t;
	points = p;
}

double OpenQuestion::grade(const std::string& answerToGrade) const {
	if (answerToGrade.length() == 0) {
		return 0;
	}
	double ev;
	std::cout << "Question: " << text << std::endl;
	std::cout << "Answer: " << answerToGrade << std::endl;
	std::cout << "Evaluation: ";
	std::cin >> ev;
	return ev;

}

void OpenQuestion::ask() const {
	std::string answer;
	std::cout << "Text: " << text << std::endl;
	std::cout << "Points: " << points << std::endl;
	std::cout << "Your answer: " << std::endl;
	std::cin >> answer;
	grade(answer);
	 
}

void OpenQuestion::print() const {
	std::cout << "Text: " << text << std::endl;
	std::cout << "Points: " << points << std::endl;
}