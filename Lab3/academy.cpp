// building academy programs
#include <iostream>

int main(){
    double score;
    std::cout << "Enter your score: ";
    std::cin >> score;
    if (score >= 9){
        std::cout << "Học lực xuất sắc";
    }
    else if (score >= 7){
        std::cout << "Học lực giỏi";
    }
    else if (score >= 5){
        std::cout << "Học lực khá";
    }
    else if (score >= 3){
        std::cout << "Học lực trung bình";
    }
    else{
        std::cout << "Học lực yếu";
    }
    return 0;
}