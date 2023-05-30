#ifndef EXAM_H
#define EXAM_H
#include"QuestionFactory.h"
#include"Question.h"
#include"YesNoQuestion.h"
#include"MultipleChoiceQuestion.h"
#include"OpenQuestion.h"
#include<iostream>
#include<vector>

class Exam {
private:
	std::vector<Question*> questions;
	double pointsOnExam;
	std::vector<std::string> answers;
public:
	//ne shvashtam kak tryabva da raboti addFromFactory, zatova malko go promenyma, inachi s definiciyata v uslovieto ne stava
	void addFromFactory(QuestionFactory* question);
	void answer() const;
	void grade() const;
	double getPoints() const;
	void printQuestions() const;
	void removeQuestion(int index);
};

#endif