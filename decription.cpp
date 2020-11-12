//
// Created by SovesT on 07/11/2020.
//

#include "tasks.hpp"

string vvod(const string &file_name){  //считывает строку из файла
    ifstream fin(file_name, ios_base::in);
    string str;
    getline(fin, str);
    return str;
}

string voz(string str) {
    string str2;
    for (unsigned char st : str) {
        unsigned short bin = st;
        bin = bin << 2 | bin >> 6;
        st = bin;
        str2 += st;
    }
    str = str2;
    return str;
}

string deg(string str, unsigned int n){
    string str2;
    srand(n);
    for (char i : str){
        str2 += (i ^ rand());
    }
    return str2;
}

void dec(const string &file_name){
    unsigned int n;
    cout << "Введите ключ-пароль: ";
    cin >> n;
    string str = vvod(file_name);
    str = voz(str);
    str = deg(str, n);
    cout << "Ваш текст: " << str << endl;
}

