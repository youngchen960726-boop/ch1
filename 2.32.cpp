#include <iostream>
#include <iomanip> 

int main() {
    double weight;
    double height;
    double bmi;
    int choice; 

    std::cout << "--- 身體質量指數 (BMI) 計算器 ---\n";
    std::cout << "請選擇您要使用的單位：\n";
    std::cout << "1. 英制單位 (磅, 英寸)\n";
    std::cout << "2. 公制單位 (公斤, 公尺)\n";
    std::cout << "請輸入選擇 (1 或 2): ";
    
    if (!(std::cin >> choice) || (choice != 1 && choice != 2)) {
        std::cerr << "輸入無效\n"; 
        return 1;
    }
    if (choice == 1) { 
        std::cout << "請輸入體重 (磅): ";
        std::cin >> weight;
        std::cout << "請輸入身高 (英寸): ";
        std::cin >> height;

        if (height > 0) {
            bmi = (weight * 703) / (height * height);
        } else {
            std::cerr << "身高不能為零。\n";
            return 1;
        }
    } else { 
        std::cout << "請輸入體重 (公斤): ";
        std::cin >> weight;
        std::cout << "請輸入身高 (公尺): ";
        std::cin >> height;

        if (height > 0) {
            bmi = weight / (height * height);
        } else {
            std::cerr << "身高不能為零。\n";
            return 1;
        }
    }

    std::cout << "\n您的身體質量指數 (BMI) 為: " 
              << std::fixed << std::setprecision(2) << bmi << "\n";

    std::cout << "\n--- BMI 值類別 ---\n";
    std::cout << "Underweight: less than 18.5\n";
    std::cout << "Normal: between 18.5 and 24.9\n";
    std::cout << "Overweight: between 25 and 29.9\n";
    std::cout << "Obese: 30 or greater\n";
    std::cout << "------------------------\n";

    std::cout<<"您的狀態屬於: ";
    if (bmi < 18.5) {
        std::cout << "體重過輕 (Underweight)\n";
    } else if (bmi <= 24.9) { 
        std::cout << "標準 (Normal)\n";
    } else if (bmi <= 29.9) { 
        std::cout << "體重過重 (Overweight)\n";
    } else { 
        std::cout << "肥胖 (Obese)\n";
    }

    return 0;
}