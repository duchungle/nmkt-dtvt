import cv2

img = cv2.imread('green_leaf.jpg') # ảnh màu
img_color = cv2.imread('green_leaf.jpg', cv2.IMREAD_COLOR) # ảnh mặc định
img_gray = cv2.imread('green_leaf.jpg', cv2.IMREAD_GRAYSCALE) # ảnh xám
img_unchanged = cv2.imread('green_leaf.jpg', cv2.IMREAD_UNCHANGED) # kênh alpha
cv2.imshow('img_color', img_color)
cv2.imshow('img_gray', img_gray)
cv2.imshow('img_unchanged', img_unchanged)# Hiển thị hình ảnh
cv2.waitKey(0) # Đợi phím nhắn bất kì từ bàn phím
cv2.destroyAllWindows() #Sẽ tắt cửa sổ đó