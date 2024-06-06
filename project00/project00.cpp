#include <iostream>

void dMenu();

int main() {
    std::cout << "hello world" << std::endl;
    dMenu();  // Call dMenu function
    return 0;
}

void dMenu() {
    system("cls");
    std::cout << "Aplikasi Template Menu" << "\n";
    std::cout << "1. Menu pertama" << "\n";
    std::cout << "2. Menu kedua" << "\n";
    std::cout << "3. Menu ketiga" << "\n";
    std::cout << "4. Menu keempat" << "\n";
    std::cout << "5. Exit" << "\n";
    std::cout << "Masukkan angka :";
}