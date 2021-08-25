#include <iostream>

using namespace std;

class hangHoa{
public:
  char maHang[2];
  char tenHang[20];
  char donViTinh[10];
  float donGia, soLuong, thanhTien;

  void Input();
};

void hangHoa::Input(){
  cout << "Nhap ma hang: "; cin >> maHang;
  cout << "Nhap ten hang: "; cin >> tenHang;
  cout << "Nhap don vi tinh: "; cin >> donViTinh;
  cout << "Nhap don gia: "; cin >> donGia;
  cout << "Nhap so luong: "; cin >> soLuong;
}

class newHangHoa : public hangHoa {
public:
  float donGiaVanChuyen, congVanChuyen;

  void tinhCongVanChuyen();
  void tinhThanhTien();
};

void newHangHoa::tinhCongVanChuyen(){

}

void newHangHoa::tinhThanhTien(){
  
}


int main() {
  std::cout << "Hello World!\n";
}