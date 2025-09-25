#include <iostream>
using namespace std;

string caesarEncrypt(string text, int key) {
    string result = "";
    for(char c : text){
        if(isalpha(c)){
            char base = isupper(c) ? 'A' : 'a';
            result += char(int(base + (c - base + key) % 26));
        } else {
            result += c;
        }
    }
    return result;
}

string caesarDecrypt(string text, int key){
    return caesarEncrypt(text, 26 - key); // Giải mã bằng cách mã hoá với 26-key
}

int main() {
    string text;
    int key;
    cout << "Nhap van ban: ";
    getline(cin, text);
    cout << "Nhap khoa (0-25): ";
    cin >> key;
    string encrypted = caesarEncrypt(text, key);
    cout << "Ma hoa: " << encrypted << endl;
    cout << "Giai ma: " << caesarDecrypt(encrypted, key) << endl;
    return 0;
}
