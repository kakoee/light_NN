#include "stdafx.h"
#include "ActivationFunc.h"
#include <cmath>

ActivationFunc::ActivationFunc()
{
	alpha = 0.01; // default to 0.01 for leaky Relu
	activation = 0; // default activation set to Relu

}


ActivationFunc::~ActivationFunc()
{
}

void ActivationFunc::Forward()
{
	switch(activation)
	{
	case 0:
		Relu();
		break;
	case 1:
		Sigmoid();
		break;
	case 2: 
		LeakyRelu();
		break;
	default:
		Relu();
	}


}

void ActivationFunc::Backward()
{
}

float ActivationFunc::Relu()
{
	float x = 0;
	//activation function has only one input
	if (input_nodes[0] != nullptr)
		x = input_nodes[0]->GetValue();
	
	//Relu 	implementation
	if (x > 0)
		SetValue(x);
	else
		SetValue(0);

	return value;
}

float ActivationFunc::Sigmoid()
{
	float x = 0;
	float exp_x;
	float sigmoid;
	//activation function has only one input
	if (input_nodes[0] != nullptr)
		x = input_nodes[0]->GetValue();

	//Sigmoid 	implementation
	exp_x = exp(-1 * x);
	sigmoid = 1 /(1+exp_x);
	
	SetValue(sigmoid);
	return value;

}

float ActivationFunc::LeakyRelu()
{
	float x = 0;
	//activation function has only one input
	if (input_nodes[0] != nullptr)
		x = input_nodes[0]->GetValue();

	//Leaky Relu implementation
	if (x > 0)
		SetValue(x);
	else
		SetValue(alpha * x);

	return value;
}

void ActivationFunc::SetAlpha(float al)
{
	alpha = al;
	return ;

}

void ActivationFunc::SetActivation(short act)
{
	activation = act;
}

short ActivationFunc::GetActivation()
{
	return activation;
}
