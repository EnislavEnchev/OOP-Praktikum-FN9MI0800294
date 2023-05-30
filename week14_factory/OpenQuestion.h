#ifndef OPENQUESTION_H
#define OPENQUESTION_H
#include"Question.h"
#include<iostream>
class OpenQuestion : public Question {
private:
	std::string text;
	double points;
	//std::string answer;
public:
	OpenQuestion(const std::string& t, double p);
	void ask() const override;
	double grade(const std::string& answerToGrade) const override;
	void print() const override;

};
#endif