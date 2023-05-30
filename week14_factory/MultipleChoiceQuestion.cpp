#include"Question.h"
#include"MultipleChoiceQuestion.h"
#include<iostream>
#include<vector>



double MultipleChoiceQuestion::grade(const std::vector<std::string>& answersToGrade) const {
	size_t correct = 0;
	size_t wrong = 0;
	size_t size = answersToGrade.size();
	for (size_t i = 0; i < size; i++) {
		if (correctYesNoAnswer(answersToGrade[i], answers[i])) {
			correct++;
		}
		else {
			wrong++;
		}
	}
	return ((points / correct) - (points / wrong));
}

void MultipleChoiceQuestion::ask() {
	size_t correct = 0;
	size_t wrong = 0;
	size_t size = statements.size();
	std::cout << "Text: " << text << std::endl;
	std::cout << "Points: " << points << std::endl;
	for (size_t i = 0; i < size; i++) {
		std::cout << "Statement" << i + 1 << ": " << statements[i] << std::endl;
	}
	std::vector<std::string> tempAnswers;
	for (size_t i = 0; i < size; i++) {
		std::cout << "Answer to " << i + 1 << ": ";
		std::string currentAnswer;
		std::cin >> currentAnswer;
		tempAnswers.push_back(currentAnswer);
	}
	grade(tempAnswers);
}

void MultipleChoiceQuestion::print() const {
	size_t size = statements.size();
	std::cout << "Points: " << points << std::endl;
	for (size_t i = 0; i < size; i++) {
		std::cout << "Statement " << i + 1 << ": " << statements[i] << std::endl;
	}
}

MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string& t, double p, const std::vector<std::string>& state, const std::vector<bool>& ans) {
	text = t;
	points = p;
	size_t stateSize = state.size();
	size_t ansSize = ans.size();
	for (size_t i = 0; i < stateSize; i++) {
		statements[i] = state[i];
	}
	for (size_t i = 0; i < ansSize; i++) {
		answers[i] = ans[i];
	}
	if ( stateSize > ansSize) {
		statements.resize(ansSize);
	}
	else if (stateSize < ansSize) {
		answers.resize(stateSize);
	}
}