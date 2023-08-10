import cv2

vid = cv2.VideoCapture(0) # 0,1 hoặc nguồn video
while True:
    ret, frame = vid.read() # đọc video theo từng khung hình
    cv2.imshow('frame', frame) # Hiển thị khung ảnh đó
    # Kí tự 'q' được lấy làm nút thoát
    # có thể thay đổi bất kì nút nhấn nào
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

vid.release() # Sau vòng lặp, trả camera về trạng thái đầu tiên (tắt)
cv2.destroyAllWindows() # Xóa mọi cửa sổ