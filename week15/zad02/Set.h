#pragma once

class Set {

public:
	virtual ~Set();
	virtual bool checkInterval(int start, int finish) const;

};