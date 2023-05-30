#include"QuestionFactory.h"
#include"Question.h"
#include"YesNoQuestion.h"
#include"MultipleChoiceQuestion.h"
#include"OpenQuestion.h"
#include"Exam.h"
#include<iostream>
#include<vector>

void Exam::addFromFactory(QuestionFactory* question) {
	std::string some;
	std::cin >> some;
	Question* quest = question->createQuestion(some);
	questions.push_back(quest);
}

void Exam::removeQuestion(int index) {
	int size = questions.size();
	if (index >= size) {
		throw std::exception("Error");
	}
	else {
		delete questions[index];
		questions[index] = nullptr;
		questions.remove(questions.begin() + index);
	}
}

void Exam::answer()const {
	size_t size = questions.size();
	for (size_t i = 0; i < size; i++) {
		questions[i]->ask();
	}
}
//grade nyama da raboti po iskaniya nachin, ako vzemem definiciyata na grade() ot uslovieto - prosto tryabva uslovieto da se promeni
double Exam::getPoints()const {
	return pointsOnExam;
}