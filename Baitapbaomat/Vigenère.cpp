#include <iostream>
using namespace std;

string vigenereEncrypt(string text, string key){
    string result="";
    int n=key.size();
    for(int i=0,j=0;i<text.size();i++){
        char c=text[i];
        if(isalpha(c)){
            char base = isupper(c)? 'A':'a';
            char k = isupper(key[j%n])?'A':'a';
            result += char((c-base + key[j%n]-k)%26 + base);
            j++;
        } else result+=c;
    }
    return result;
}

string vigenereDecrypt(string text, string key){
    string result="";
    int n=key.size();
    for(int i=0,j=0;i<text.size();i++){
        char c=text[i];
        if(isalpha(c)){
            char base = isupper(c)? 'A':'a';
            char k = isupper(key[j%n])?'A':'a';
            result += char((c-base - (key[j%n]-k) +26)%26 + base);
            j++;
        } else result+=c;
    }
    return result;
}

int main(){
    string text,key;
    cout<<"Nhap van ban: "; getline(cin,text);
    cout<<"Nhap khoa: "; cin>>key;
    string encrypted=vigenereEncrypt(text,key);
    cout<<"Ma hoa: "<<encrypted<<endl;
    cout<<"Giai ma: "<<vigenereDecrypt(encrypted,key)<<endl;
}
