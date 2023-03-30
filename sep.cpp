#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void equal(string f, string s){
    int ct = 0;
    int len1 = f.length();
    int len2 = s.length();

    if (len1 == len2){
         for (int i = 0; i < (f.length()); i++){
            if (tolower(f[i]) == tolower(s[i])){
                ct++;
            }
        }
        if (ct == len1){
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    else{
        cout << 0 << endl;
    }
}


int main(){
    setlocale(LC_ALL, "ru");
    string a, b;
    getline(cin, a);
    getline(cin, b);
    equal(a, b);
}