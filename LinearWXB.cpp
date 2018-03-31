#include "stdafx.h"
#include "LinearWXB.h"


LinearWXB::LinearWXB()
{
}

LinearWXB::LinearWXB(float * W,float bias)
{
	Weights = W;
	Bias = bias;

}

LinearWXB::~LinearWXB()
{
}

void LinearWXB::SetWeights(float * W)
{
	Weights = W;
		 
}

void LinearWXB::SetBias(float bias)
{
	Bias=bias;

}


float * LinearWXB::GetWeights()
{
	return Weights;
}

void LinearWXB::SetWeightsIdx(int idx, float w)
{
	int input_lenght = GetNumInNodes();
	if (idx < input_lenght)
		Weights[idx] = w;

}

int LinearWXB::GetWeightsIdx(int idx)
{
	if(Weights!=nullptr)
	return Weights[idx];
}

void LinearWXB::Forward()
{
	int sum = 0;
	// Linear = WX + b
	for (int i = 0; i < GetNumInNodes(); i++)
	{
		sum = sum + GetInNode(i)->GetValue() * Weights[i];
	}

	SetValue(sum + Bias);

}

void LinearWXB::Backward()
{
}
