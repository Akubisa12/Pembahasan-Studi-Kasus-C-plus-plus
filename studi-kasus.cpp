#include <iostream>

int main() {
    double angka1, angka2;
    char operasi;

    // Meminta pengguna memasukkan angka dan operasi
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan operasi (+, -, *, /): ";
    std::cin >> operasi;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    // Menghitung hasil sesuai operasi yang diminta
    double hasil;
    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0) {
                hasil = angka1 / angka2;
            } else {
                std::cout << "Error: Pembagian dengan nol tidak valid." << std::endl;
                return 1; // Keluar dari program dengan kode kesalahan
            }
            break;
        default:
            std::cout << "Error: Operasi tidak valid." << std::endl;
            return 1; // Keluar dari program dengan kode kesalahan
    }

    // Menampilkan hasil
    std::cout << "Hasil: " << hasil << std::endl;

    return 0;
}