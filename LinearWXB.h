#pragma once
#include "Node.h"
class LinearWXB :
	public Node
{
public:
	LinearWXB();
	LinearWXB(float * W, float bias);
	~LinearWXB();
	void SetWeights(float *W);
	float* GetWeights();
	void SetWeightsIdx(int idx, float w);
	int GetWeightsIdx(int idx);
	void SetBias(float bias);
	virtual void Forward();
	virtual void Backward();

private:
	float* Weights;
	float Bias;

};

