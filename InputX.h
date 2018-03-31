#pragma once
#include "Node.h"
class InputX :
	public Node
{
private:
	float value; // input node. an array of features. 

public:
	InputX();
	InputX(float In);
	~InputX();
	virtual void SetValue(float In); // initialize the input values
	virtual float GetValue(); // return the values

	virtual void Forward();
	virtual void Backward();
};

