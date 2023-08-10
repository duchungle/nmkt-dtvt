#Khai báo hàm tính tổng và hiệu
def tinhTongHieuHaiSo(a,b):
    tong = a + b
    hieu = a - b
    return tong, hieu

#Gọi hàm
ketQuaTong, ketQuaHieu = tinhTongHieuHaiSo(10,5)
print('Tong hai so: ', ketQuaTong)
print('Hieu hai so: ', ketQuaHieu)

