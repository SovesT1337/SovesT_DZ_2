//
// Created by SovesT on 07/11/2020.
//

#include "tasks.hpp"

void vivod(const string &file_name, const string &str){
    ofstream fout;
    fout.open(file_name);
    fout << str;
}

string sdv(const string &str) {
    string str2;
    for (unsigned char st : str) {
        unsigned short bin = st;
        bin = bin >> 2 | bin << 6;
        st = bin;
        str2 += st;
    }
    return str2;
}

string gam(const string &str, unsigned int n) {
    string str2;
    srand(n);
    for (char i : str){
        str2 += (rand() ^ i);
    }
    return str2;
}

void enc(const string &file_name){
    string str;
    unsigned int n;
    cout << "Введите текст: ";
    cin.ignore();
    getline(cin, str);
    cout << "Введите ключ-пароль: ";
    cin >> n;
    str = gam(str, n);
    str = sdv(str);
    vivod(file_name, str);
    cout << "Congratulations";
}