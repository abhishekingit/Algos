#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char ch[] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};

string encryption(string s) {
    char ciph[s.length() + 1];
    for(int i = 0; i<s.length(); i++) {
        for(int j = 0; j<26; j++) {
            if(alphabets[j] == s.at(i)) {
                ciph[i] = ch[j];
                break;
            }
        }

        ciph[i+1] = '\0';

    }
    ciph[s.length()] = '\0';
    string convStr = ciph;
    cout<<convStr<<endl;
    return convStr;
    
}



int main() {
    string anyText;
    cin>>anyText;
    transform(anyText.begin(), anyText.end(), anyText.begin(), ::tolower);
    cout<<anyText<<endl;
    string encryptText = encryption(anyText);
    cout<<"Encrypted message is "<<encryptText<<endl;



}