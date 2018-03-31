#pragma once
// base clase for all the nodes
class Node
{
public:
	Node(int input_lenght,int output_lenght);
	Node();
	~Node();
	void AddInputNode(Node *in);
	void AddOutputNode(Node *out);
	Node* GetInNode(int idx);
	Node* GetOutNode(int idx);
	int GetNumInNodes();
	int GetNumOutNodes();
	virtual void  SetValue(float v);
	virtual float GetValue();
	virtual void Forward(); // virtual function as it will be implmented per child nodes. forward path
	virtual void Backward(); // virtual function as it will be implmented per child nodes. backward for backprob 
	static float Dot(float* X, float* W,int n); // W x X for the perceptron. comes before activation function. declare as static to be called independently of the object

	
	
protected:
	Node **input_nodes; // each nodes can have multple input nodes
	Node **output_nodes; // each nodes can have multple output nodes
	int input_nodes_lenght; // the total/final size of inputs to this nodes
	int output_nodes_lenght; // the total/final number of nodes that this node is connected at output
	int current_num_in_nodes; // to keep track of number of input nodes currently added
	int current_num_out_nodes; //to keep track of number of output nodes currently added

	float value; // the values . mostly for input node
	float gradient; // the gradient of this node
};

