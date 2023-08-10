##Threshold (6)
import cv2

img = cv2.imread('text.jpg')
# Công thức ngưỡng tuân theo nguyên tắc sau:
# threshold (ảnh, giá trị ngưỡng, giá trị max, loại ngưỡng)
# giá trị ngưỡng được chọn là 8, chọn cao hơn sẽ xử lí tốt hơn
# nhưng dễ mất thông tin, giá trị max chọn là 255, loại ngưỡng
# chọn là ngưỡng nhị phân
retval, threshold = cv2.threshold(img, 8, 255, cv2.THRESH_BINARY)
cv2.imshow('Original', img)
cv2.imshow('Threshold', threshold)
cv2.waitKey(0)
cv2.destroyAllWindows()
