// building program to calculate the midium score of a student
#include <iostream>

int main(){
    float diemToan, diemLy, diemHoa, diemTrungBinh;
    std::cout << "Nhập điểm Toán: ";
    std::cin >> diemToan;
    std::cout << "Nhập điểm Lý: ";
    std::cin >> diemLy;
    std::cout << "Nhập điểm Hóa: ";
    std::cin >> diemHoa;
    diemTrungBinh = (diemToan + diemLy + diemHoa) / 3;
    std::cout << "Điểm trung bình của sinh viên là: " << diemTrungBinh << std::endl;
    return 0;
}