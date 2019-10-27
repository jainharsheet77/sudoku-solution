import cv2
import numpy as np
image = cv2.imread("/home/harsheet/Desktop/sudoku/proto2.jpeg")
image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
print(image.shape[1],image.shape[0])

fromcenter=False

 
scale_percent = 60 # percent of original size
width = int(image.shape[1] * scale_percent / 100)
height = int(image.shape[0] * scale_percent / 100)
dim = (width, height)
image = cv2.resize(image, dim, interpolation = cv2.INTER_AREA)

r = cv2.selectROI("ROI",image,fromcenter)
imcrop = image[int(r[1]):int(r[1]+r[3]), int(r[0]):int(r[0]+r[2])]

cv2.imshow("original",image)
cv2.imshow("Image", imcrop)
N =int(9.1)
h=int(imcrop.shape[0])
w=int(imcrop.shape[1])
hd=h/N
wd=w/N


g1=0
g2=0
for i in range(0,h,int(hd)):
    g1=0
    for j in range(0,w,int(wd)):
        img=imcrop[int(j):int(j+wd),int(i):int(i+hd)]
        print(g1,g2,sep=' ',end='\n')
        g1=g1+1;
        
        cv2.imshow("cropped",img)
        cv2.waitKey(250)
        cv2.destroyWindow("cropped")
    g2=g2+1
        

cv2.waitKey(0)
