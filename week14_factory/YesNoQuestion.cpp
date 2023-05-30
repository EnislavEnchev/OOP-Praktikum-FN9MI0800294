#include"Question.h"
#include"YesNoQuestion.h"
#include<iostream>

void YesNoQuestion::print()const {
	std::cout << "Question: " << question << std::endl;
	std::cout << "Points: " << points << std::endl;
	std::cout << "Answer: " << answer << std::endl;
	std::cout << "=========" << std::endl;
}

double YesNoQuestion::grade(const std::string& answerToGrade) const {
	if (answerToGrade == answer) return points;
	return 0;
}

void YesNoQuestion::ask() const  {
	std::cout << "The question is: " << question << std::endl;
	std::cout << "Please write your answer: ";
	std::string userAnswer;
	std::cin >> userAnswer;
	std::cout << "Your points: " << grade(userAnswer);
}