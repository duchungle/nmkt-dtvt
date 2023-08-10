import cv2

img = cv2.imread('green_leaf.jpg', cv2.IMREAD_COLOR)
px = img[70, 70] # px = [151 174 170]
print(px)
img[70,70] = [255, 255, 255]
print(px) # px = [255 255 255]

##ROI
img[100:250, 100:250] = [255, 255, 255]
cv2.imshow('image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()