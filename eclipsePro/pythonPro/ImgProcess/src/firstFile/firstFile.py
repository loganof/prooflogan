#coding=utf-8 
from numpy import *
from scipy import *
import numpy as np
import cv2

def SaltAndPepper(src,percetage):   #定义添加椒盐噪声的函数
    SP_NoiseImg=src
    SP_NoiseNum=int(percetage*src.shape[0]*src.shape[1])
    for i in range(SP_NoiseNum):
        randX=random.random_integers(0,src.shape[0]-1)
        randY=random.random_integers(0,src.shape[1]-1)
        if random.random_integers(0,1)==0:
            SP_NoiseImg[randX,randY]=0
        else:
            SP_NoiseImg[randX,randY]=255          
    return SP_NoiseImg 

def addGaussianNoise(image,percetage):  #定义添加高斯噪声的函数
    G_Noiseimg = image
    G_NoiseNum=int(percetage*image.shape[0]*image.shape[1])
    for i in range(G_NoiseNum): 
        temp_x = np.random.randint(0,image.shape[0])
        temp_y = np.random.randint(0,image.shape[1])
        G_Noiseimg[temp_x][temp_y] = 255
    return G_Noiseimg

if __name__ == "__main__":
    srcImage = cv2.imread("G:\\lena.jpg", 1)
    cv2.namedWindow("Original image")  
    cv2.imshow("Original image", srcImage)  

    grayImage = cv2.cvtColor(srcImage,cv2.COLOR_BGR2GRAY)  #灰度变换
    cv2.imshow("grayimage", grayImage)

    gauss_noiseImage = addGaussianNoise(grayImage,0.1)  #添加10%的高斯噪声
    cv2.imshow("Add_GaussianNoise Image",gauss_noiseImage)

    SaltAndPepper_noiseImage = SaltAndPepper(grayImage,0.1)  #再添加10%的椒盐噪声
    cv2.imshow("Add_SaltAndPepperNoise Image",SaltAndPepper_noiseImage)

    equalizeHist_Image = cv2.equalizeHist(grayImage)   #对图片进行直方图均衡化
    cv2.imshow("Histogram equalization image",equalizeHist_Image)

    Denoising_img = cv2.blur(grayImage,(5,5)) #对图片进行均值滤波
    cv2.imshow("Denoisiedimg", Denoising_img)

    cv2.putText(srcImage, 'My example', (10,50), 0, 0.5, (255,255,255),1) #在图片上方加上字符
    cv2.imshow("Added studentID Image",srcImage)

    cv2.waitKey (0)  
    cv2.destroyAllWindows() 