#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";

string encrypt(string plainText, int shiftkey) {
    transform(plainText.begin(), plainText.end(), plainText.begin(), ::tolower);
    string cipherText = "";
    for(int i = 0; i<plainText.length(); i++) {
        size_t charInd = alphabet.find(plainText[i]);
        int key = (shiftkey + int(charInd)) % 26;
        char replaceAlp = alphabet[key];
        cipherText = cipherText + replaceAlp;

    }
    return cipherText;

}

string decrypt(string cipherText, int shiftKey) {
    transform(cipherText.begin(), cipherText.end(), cipherText.begin(), ::tolower);
    string plainText = "";
    for(int i = 0; i<cipherText.length(); i++) {
        size_t charInd = alphabet.find(cipherText[i]);
        int key = (int(charInd) - shiftKey) % 26;
        if(key < 0) {
            key = alphabet.length() + key;
        }
        char replaceAlp = alphabet[key];
        plainText = plainText + replaceAlp;

    }
    return plainText;
}


int main() {
    int shift;
    cout<<"Enter the shifting size for the ciphertext\n";
    cin>>shift;
    string regularText;
    cout<<"Enter your text\n";
    cin>>regularText;
    string encrytedText;
    string ciphertext = encrypt(regularText, shift);
    cout<<"Your encrypted text is "<<ciphertext<<endl;
    cout<<"Enter some encrypted text\n";
    cin>>encrytedText;
    string decryptedText = decrypt(encrytedText, shift);
    cout<<"Your decrypted text is "<<decryptedText<<endl;    


}