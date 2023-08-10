#Khai báo 3 chuyên ngành trong khoa Điện tử - Viễn thông
listChuyenNganh=['Dien tu', 'May tinh - he thong Nhung', 'Vien thong']

#Khai báo hàm thay đổi tên các chuyên ngành
def thayDoiListChuyenNganh():
    listChuyenNganh = ['Electronics', 'Computers and Embedded systems', 'Communications' ]
def thayDoiTungPhanTuListChuyenNganh():
    listChuyenNganh[0] = 'Electronics'
    listChuyenNganh[1] = 'Computers and embedded systems'
    listChuyenNganh[2] = 'Communications'
    
#Gọi hàm thay đổi list chuyên ngành
thayDoiListChuyenNganh()
print('Thay doi list:')
print(listChuyenNganh)
#Gọi hàm thay đổi từng phần tử list chuyên ngành
thayDoiTungPhanTuListChuyenNganh()
print('Thay doi tung phan tu trong list:')
print(listChuyenNganh)
