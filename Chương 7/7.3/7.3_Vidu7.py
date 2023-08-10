#Khai báo hàm tính tổng 2 số
#Hàm trả kết quả về biến ketQua
def tinhTongHaiSo(a,b):
    ketQua = a + b
    return ketQua

#Khai báo 3 số nguyên
a=1
b=2
c=3
#Gọi hàm tính tổng 2 số và lưu kết quả vào biến tongAvaB
tongAvaB=tinhTongHaiSo(a,b)
#Tính tổng 3 số
tongABC=tinhTongHaiSo(tongAvaB,c)
print('ket qua: ', tongABC)

