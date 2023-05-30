#ifndef QUESTIONFACTORY_H
#define QUESTIONFACTORY_H
#include"Question.h"
#include"YesNoQuestion.h"
#include"MultipleChoiceQuestion.h"
#include"OpenQuestion.h"

class QuestionFactory {
public:
	Question* createQuestion(const std::string& type);

};

#endif