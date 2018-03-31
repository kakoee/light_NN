#include "stdafx.h"
#include "Node.h"



Node::Node(int input_lenght, int output_lenght)
{
	input_nodes = new Node*[input_lenght];
	output_nodes = new Node*[output_lenght];
	current_num_in_nodes = 0;
	current_num_out_nodes = 0;
}

Node::Node()
{
}


Node::~Node()
{
}

void Node::AddInputNode(Node *in)
{
	if(current_num_in_nodes<input_nodes_lenght)
		input_nodes[current_num_in_nodes++] = in;


}

void Node::AddOutputNode(Node *out)
{
	if (current_num_out_nodes < output_nodes_lenght)
		output_nodes[current_num_out_nodes++] = out;
}

Node * Node::GetInNode(int idx)
{
	if (idx < current_num_in_nodes)
		return input_nodes[idx];
	else
		return nullptr;
}

Node * Node::GetOutNode(int idx)
{
	if (idx < current_num_out_nodes)
		return output_nodes[idx];
	else
		return nullptr;

}

int Node::GetNumInNodes()
{
	return current_num_in_nodes;
}

int Node::GetNumOutNodes()
{
	return current_num_out_nodes;
}

void Node::SetValue(float v)
{
	value = v;
}

float Node::GetValue()
{
	return value;
}

float Node::Dot(float* X, float* W, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + X[i] * W[i];
	}

	return sum;
	

}

void Node::Forward()
{
	return;
}

void Node::Backward()
{
	return;
}

