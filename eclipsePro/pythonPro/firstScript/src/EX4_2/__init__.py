import numpy as np
import sklearn.preprocessing as prep
import tensorflow as tf
from tensorflow.examples.tutorials.mnist import input_data
from tensorflow.contrib.cudnn_rnn.python.layers.cudnn_rnn import CUDNN_INPUT_AUTO_MODE

mnist = input_data.read_data_sets("G:/MNIST/", one_hot = True)

def xavier_init(fan_in, fan_out, constant = 1):
    low = - constant * np.sqrt(6.0 / (fan_in + fan_out))
    high = constant * np.sqrt(6.0 / (fan_in + fan_out))
    return tf.random_uniform((fan_in, fan_out), 
                             minval = low, maxval = high,
                             dtype = tf.float32)

class AddivtiveGaussianNoiseAutoencoder(object):
    def _init_(self, n_input, n_hidden, transfer_function = tf.nn.softplus,
               optimizer = tf.train.AdamOptimizer(), scale = 0.1):
        self.n_input = n_input 
        self.n_hidden = n_hidden
        self.transfer = transfer_function
        self.scale = tf.placeholder(tf.float32)
        self.training_scale = scale
        network_weights= self._initialize_weights()
        self.weighs = network_weights
        
        self.x = tf.placeholder(tf.float32, [None, self.n_input])
        self.n_hidden = self.transfer(tf.add(tf.matmul(
            self.x + scale * tf.random_normal((n_input,)),
            self.weights['w1']), self.weights['b1']))
        self.reconstruction = tf.add(tf.matmul(self.hidden,
                                    self.weights['w2']), self.weights['b2'])
        self.cost = 0.5 * tf.reduce_sum(tf.pow(tf.subtract(self.reconstcution,
                                                            self.x), 2.0))
        self.optimizer = optimizer.minimize(self.cost)
        
        init = tf.global_variables_initializer()
        self.sess = tf.Session()
        self.sess.run(init)
        
        
        
        
        
        
        
        
        

