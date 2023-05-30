#include"Question.h"
#include<iostream>

const std::string Question::YES = "yes";
const std::string Question::NO = "no";

bool Question::validYesNoAnswer(const std::string& ans) {
	if (ans == "yes" || ans == "no") return true;
	return false;
}

bool Question::correctYesNoAnswer(const std::string& ans, bool correct_is_yes) {
	if ((correct_is_yes == true && ans == YES) || (correct_is_yes == false && ans == NO)) return true;
	return false;
}