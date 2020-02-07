#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void defaultStrings(char newStr[100], char newStr2[100]);
void changeStrings(char newStr[100], char newStr2[100]);
int main(){
    char str[100], str2[100];
    cout << "Enter some string: ";
    cin.getline(str,255);
    defaultStrings(str,str2);
    changeStrings(str,str2);
    cout << endl;
    return 0;
}
void defaultStrings(char newStr[100], char newStr2[100]){
    for(int i = 0; i < strlen(newStr); i++){
        newStr2[i] = tolower(newStr[i]);
    }
}
void changeStrings(char newStr[100], char newStr2[100]){
    for(int i = 0; i < strlen(newStr); i++){
        if(newStr2[i] == ' '){
            char ltr = toupper(newStr2[i+1]);
            cout << ltr;
        } else if(i == 0){
            char ltr2 = toupper(newStr[i]);
            cout << ltr2 << newStr2[i+1];
        }else{
            cout << newStr2[i+1];
        }
    }
}
