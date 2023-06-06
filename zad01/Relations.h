#pragma once
#include<string>
#include<iostream>
template <typename T>
class RelationElement {
private:
	T subject;
	T object;
	std::string relation;
public:
	//tozi constructor e samo za test
	RelationElement() = default;
	T getS()const {
		return subject;
	}
	T getO()const {
		return object;
	}
	std::string getR()const {
		return relation;
	}
	RelationElement<T>(T s, T o, std::string r) {
		subject = s;
		object = o;
		relation = r;
	}
	void print() const {
		std::cout << subject  << relation << object;
	}
	RelationElement<T> friend operator*(const RelationElement<T>& first, const RelationElement<T>& second) {
		if (first.object == second.subject) {
			std::string newRelation = first.relation + std::to_string(first.object) + " which" + second.relation;
			RelationElement<T> newRE(first.subject, second.object, newRelation);
			return newRE;
		}
		else return first;
		
	}
	
};