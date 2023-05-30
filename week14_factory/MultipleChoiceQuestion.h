#ifndef MULTIPLECHOICEQUESTION_H
#define MULTIPLECHOICEQUESTION_H
#include "Question.h"
#include<iostream>
#include<vector>
class MultipleChoiceQuestion : public Question {
private:
	std::string text;
	double points;
	std::vector <std::string> statements;
	std::vector <bool> answers;
	void resize(size_t count,  std::vector<std::string>& state);
	void resize(size_t count,  std::vector<bool>& ans);

public:
	MultipleChoiceQuestion(const std::string& t, double p, const std::vector<std::string>& state, const std::vector<bool>& ans);
	void ask() const override;
	double grade(const std::vector<std::string>& answersToGrade) const ;
	double grade(const std::string& answerToGrade)const override;
	void print() const override;
};
#endif