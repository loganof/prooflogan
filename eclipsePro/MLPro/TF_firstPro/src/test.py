#coding=utf-8

from tensorflow.examples.tutorials.mnist import input_data
mnist = input_data.read_data_sets("MNIST_data/", one_hot = True)

print(mnist.train.images.shape, mnist.train.labels.shape)
