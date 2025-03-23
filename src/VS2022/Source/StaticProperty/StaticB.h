#include "StaticA.h"
using namespace std;
#pragma once

class StaticB : public StaticA
{
public:
	StaticB() : StaticA () {}
	~StaticB() {}
};

