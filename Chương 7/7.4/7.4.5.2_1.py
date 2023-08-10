import cv2

img = cv2.imread('green_leaf.jpg') # Chỉ ra nơi lưu ảnh
cv2.imshow('image', img) # Hiển thị hình ảnh
cv2.waitKey(0) # Đợi phím nhắn bất kì từ bàn phím
cv2.destroyAllWindows() #Sẽ tắt cửa sổ đó