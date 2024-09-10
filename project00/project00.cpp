#include <iostream>
#include <conio.h>

void dMenu();
void mPertama();

int main() {
    std::cout << "hello world" << std::endl;
    char p1;
    do
{
    dMenu();
    p1=getch();

    switch (p1) {
    case '1':
   mPertama();
   break;
    case '5':
   break;
default:
   system("cls");
   std::cout << "Pilihan tidak tersedia" << std::endl;
    getch();
break;
    }
} while (p1!='5'); 
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

void mPertama(){
    system("cls");
    std::cout<<"hallo saya menu pertama";
    getch();
}