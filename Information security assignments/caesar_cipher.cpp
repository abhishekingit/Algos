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


int main() {
    int shift;
    cout<<"Enter the shifting size for the ciphertext\n";
    cin>>shift;
    string regularText;
    cout<<"Enter your text\n";
    cin>>regularText;
    string ciphertext = encrypt(regularText, shift);
    cout<<"Your encrypted text is "<<ciphertext<<endl;

}