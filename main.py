import csv
from Perceptron import Perceptron

with open('Breast_cancer_data.csv', newline='') as csvFile:
  read = csv.reader(csvFile, delimiter=" ", quotechar='|')
  trainingSet = []
  labels = []
  run = 0
  for line in read:
    if run > 0:
      temp = [float(x) for x in line[0].split(",")]
      trainingSet.append(temp[:len(temp) - 1])
      labels.append(temp[len(temp) - 1])
    run += 1

perceptron = Perceptron(len(trainingSet[0]))
perceptron.train(trainingSet, labels)

'''
inputs:
- mean radius 
- mean texture
- mean perimeter
- mean area
- mean smoothness
'''
inputs = [11.2, 14.43, 82.43, 437.4, 0.089]
print(perceptron.weights)
if perceptron.predict(inputs):
  print("Breast Cancer")
else:
  print("Calcium")