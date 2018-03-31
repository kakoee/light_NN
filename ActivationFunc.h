#pragma once
#include "Node.h"
class ActivationFunc :
	public Node
{
public:
	ActivationFunc();
	~ActivationFunc();
	virtual void Forward();
	virtual void Backward();
	void SetAlpha(float al);
	void SetActivation(short act);
	short GetActivation();

private:
	float alpha; // use for leaky Relu
	short activation; // activation function: 0=Relu, 1=Sigmoid, 2= LeakyRelu, others = Relu
	float Relu();
	float Sigmoid();
	float LeakyRelu();

};

