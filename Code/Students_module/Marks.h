#pragma once
#include "Student_base.h"

class Marks : public Student_base {
public:
	int english;
	int russian;
	int math;
	int physics;
	double avg_hum();
	double avg_tech();
	double avg();
	Marks() {};
};
