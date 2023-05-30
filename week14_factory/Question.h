#ifndef QUESTION_H
#define QUESTION_H
#include<iostream>
class Question {
protected:
	static bool validYesNoAnswer(const std::string& ans);
	static bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes);
	static const std::string YES;
	static const std::string NO;
public:
	virtual void ask() = 0;
	//malko promenyam grade, inache nyama logika
	virtual double grade(const std::string& answerToGrade) const = 0;
	virtual void print() const = 0;
};
#endif
