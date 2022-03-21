#ifndef _NEURONFACTORY_H
#define _NEURONFACTORY_H

typedef enum _neuronType {
	NEURON_AFFINENODE = 0, NEURON_AFFINE = 1, NEURON_NEURALNETWORK = 3,
	NEURON_RELUNODE = 4, NEURON_RELU = 5, NEURON_SOFTMAX = 6, NEURON_DROPOUTNODE = 7,
	NEURON_DROPOUT = 8, NEURON_CONVOLUTIONFILTER = 9, NEURON_FILTERCUBE = 10, NEURON_CONVOLUTION = 11,
	NEURON_POOLINGFILTER = 12, NEURON_POOLING = 13, NEURON_SIGMOID = 14, NEURON_SIGMOIDNODE = 15, NEURON_SPATIALTRANSFORMER = 16
} NeuronType;

class Neuron;
class NeuronFactory {
public:
	NeuronFactory();
	NeuronFactory(const NeuronFactory& source);
	~NeuronFactory();
	Neuron* Make(NeuronType type);
};

#endif // !_NEURONFACTORY_H
