#ifndef YESNOQUESITON_H
#define YESNOQUESTION_H
#include"Question.h"
class YesNoQuestion : public Question {
private:
	std::string question;
	std::string answer;
	unsigned points;
public:
	YesNoQuestion(const std::string& q, unsigned p, const std::string& a);
	void ask() override;
	double grade(const std::string& answerToGrade) const override;
	void print() const override;
};
#endif
