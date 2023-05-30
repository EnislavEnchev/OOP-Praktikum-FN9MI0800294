#include"QuestionFactory.h"
#include"Question.h"
#include"YesNoQuestion.h"
#include"MultipleChoiceQuestion.h"
#include"OpenQuestion.h"
#include<iostream>
#include<vector>

Question* QuestionFactory::createQuestion(const std::string& type) {
	if (type == "YesNoQuestion") {
		std::string question;
		unsigned points;
		std::string answer;
		std::cout << "Create Question: " << std::endl;
		std::cin >> question >> points >> answer;
		return new YesNoQuestion(question, points, answer);
	}
	else if (type == "OpenQuestion") {
		std::string text;
		double points;
		std::cout << "Create Question: " << std::endl;
		std::cin >> text >> points;
		return new OpenQuestion(text, points);
	}
	else if (type == "MultipleChoiceQuestion") {
		std::string text;
		double points;
		std::vector<std::string> statements;
		std::vector<bool> answers;
		std::string state;
		bool a;
		size_t size;
		std::cout << "Create Question: " << std::endl;
		std::cin >> text >> points;
		std::cout << "Choose size: ";
		std::cin >> size;
		for (size_t i = 0; i < size; i++) {
			std::cin >> state >> a;
			statements.push_back(state);
			answers.push_back(a);
		}
		return new MultipleChoiceQuestion(text, points, statements, answers);
	}
	else {
		return nullptr;
	}
}