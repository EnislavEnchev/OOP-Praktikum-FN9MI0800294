#ifndef VEHICLE_H
#define VEHICLE_H
class Vehicle {
private:
	int power;
	int weight;
public:
	virtual void startEngine() const = 0;
	int getPower() const;
	int getWeight() const;
	//test functions
	void setPower(int p);

};
#endif