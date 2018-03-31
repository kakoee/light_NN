#include "stdafx.h"
#include "InputX.h"



InputX::InputX()
{
	return;
}

InputX::InputX(float  In)
{
	value = In;
	return;
}

InputX::~InputX()
{
}

void InputX::SetValue(float  In)
{
	value = In;
}


float InputX::GetValue()
{
	return value;
}


void InputX::Forward()
{
	return;
}

void InputX::Backward()
{
	float grad = 1;
	Node* outnode;
	for (int i = 0; i < current_num_out_nodes; i++) {
		outnode = GetOutNode(i);
		if (outnode) {
			grad = grad 

		}

	}

}

