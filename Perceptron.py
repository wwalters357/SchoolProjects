import numpy as np

class Perceptron(object):#inheritance
  def __init__(self, numInputs, threshold=100, learningRate=0.01):
    #create a weight vector of all zeros 
    self.weights = np.zeros(numInputs + 1) #number of weights
    self.threshold = threshold #number of iterations 
    self.learningRate = learningRate #magnitude to change weights 

  def predict(self, inputs):
    #preform dot product (<v, w> + b)
    summation = np.dot(inputs, self.weights[1:]) + self.weights[0]
    if summation > 0:
      return 1
    return 0
  
  #training set = list of vectors used as input for predict method 
  #labels = array of expected lables for each input 
  def train(self, trainingSet, labels):
    for i in range(self.threshold):
      #zip combines to create new iterable object
      for inputs, label in zip(trainingSet, labels):
        #trainingSet -> inputs 
        #label -> labels
        prediction = self.predict(inputs)
        #learning rule 
        #w <- w + α(y — f(x))x
        #label - prediction = error 
        for i in range(1, len(self.weights)):
          self.weights[i] += self.learningRate * (label - prediction) * inputs[i - 1]
        #self.weights[1:] += self.learningRate * (float(label) - (prediction) * inputs
        '''print("label: " + str(label))
        print(inputs)
        print(self.weights)'''
        #self.weights[0] = bias weight 
        self.weights[0] += self.learningRate * (label - prediction)

