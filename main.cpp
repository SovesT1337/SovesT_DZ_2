#include "tasks.hpp"


int main() {
    setlocale(LC_ALL,"Russian");
    string mode, file_name;// Режим работы
    cout << "Напишите 1, если вы хотите закодировать текст и 2, если вы хотите раскодировать текст: ";
    cin >> mode;
    cout << "Введите название файла: ";
    cin >> file_name;
    if (mode == "1") {     // Режим шифрование
        enc(file_name);
    }
    else if (mode == "2") {    // Режим расшифрования
        dec(file_name);
    }
    return 0; }
