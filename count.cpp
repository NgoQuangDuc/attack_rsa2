#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input;
    
    // Nhập chuỗi số
    std::cout << "Nhập chuỗi số: ";
    std::getline(std::cin, input);
    
    // Sử dụng stringstream để tách các số
    std::stringstream ss(input);
    std::string number;
    int count = 0;

    // Đếm số lượng từ
    while (ss >> number) {
        count++;
    }

    // In ra kết quả
    std::cout << "Số lượng từ: " << count << std::endl;

    return 0;
}
