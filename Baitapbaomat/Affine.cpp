#include <iostream>
using namespace std;

// Hàm tính nghịch đảo modulo
int modInverse(int a, int m){
    for(int x=1; x<m; x++)
        if((a*x)%m==1) return x;
    return 1;
}

string affineEncrypt(string text, int a, int b){
    string result = "";
    for(char c: text){
        if(isalpha(c)){
            char base = isupper(c)? 'A':'a';
            result += char((a*(c-base)+b)%26 + base);
        } else result += c;
    }
    return result;
}

string affineDecrypt(string text, int a, int b){
    string result = "";
    int a_inv = modInverse(a,26);
    for(char c: text){
        if(isalpha(c)){
            char base = isupper(c)? 'A':'a';
            result += char((a_inv*((c-base)-b+26))%26 + base);
        } else result += c;
    }
    return result;
}

int main(){
    string text;
    int a,b;
    cout<<"Nhap van ban: "; getline(cin,text);
    cout<<"Nhap khoa a (cung nguyen to voi 26) va b: "; cin>>a>>b;
    string encrypted = affineEncrypt(text,a,b);
    cout<<"Ma hoa: "<<encrypted<<endl;
    cout<<"Giai ma: "<<affineDecrypt(encrypted,a,b)<<endl;
}
