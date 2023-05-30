#include <bits/stdc++.h>

using namespace std;

int main(){

    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA";

    string  secret_msg;
    cout << "Type the secret Msg:";
    getline(cin,secret_msg);
    


    string Encrypted_msg;
    cout << "......Encrypting your Message......";


    for (char c:secret_msg){
        size_t position = alphabet.find(c);
        if (position != string::npos){

            char new_char {key.at(position)};
            Encrypted_msg += new_char;

        }
        else{
            Encrypted_msg +=c;
        }
    }

    cout << "\nEncrypted msg is:" << Encrypted_msg;


    string Decrypt_msg;
    cout <<"\n......Decrypting Msg......";


    for (char c:Encrypted_msg){
        size_t position = key.find(c);

        if (position != string::npos){

            char new_char {alphabet.at(position)};
            Decrypt_msg += new_char;
        }
        else{
            Decrypt_msg +=c;
        }
    }

    cout << "\nDecrypted msg is:" << Decrypt_msg;


    return 0;
}
