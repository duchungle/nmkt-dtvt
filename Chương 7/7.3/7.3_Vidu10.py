#import module phepTinh theo kiểu from-import
from phepTinh import hamTinhTong, hamTinhHieu

#Sử dụng các phép toán tổng, hiệu
#Các hàm tính tích, thương không thể dùng cho chưa import
ketQuaTong = hamTinhTong(10,5)	#Gọi trực tiếp tên hàm, không cần gọi lại tên module
ketQuaHieu = hamTinhHieu(10,5)

#in kết quả ra màn hình
print(ketQuaTong)
print(ketQuaHieu)



