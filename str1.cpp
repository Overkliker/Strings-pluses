#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void CountWords(string sentence)
{
    char separator = ' ';
    int i = 0;
    
    string s; 
    int ct = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != ',' && sentence[i] != '.' && 
        sentence[i] != '?' && sentence[i] != '!') {
            s += sentence[i]; 
        } 
        else {
            if (s != ""){
            cout << s << endl;
            s.clear();
            ct++;
            }
        }
        i++;
    }
    cout << ct << endl;
}

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

void number(string str){
    string text{"0123456789"};
    int f = str.find_first_of(text);
    int s = str.find_last_of(text);
    cout << str.substr(f, s) << endl;
}

void podstr(string f, string s, string fd){
    int f1 = f.find_first_of(s);
    int s2 = f.find_last_of(s) + 1;
    
    cout << f.replace(f1, s2, fd) << endl;
}

int main(){
    setlocale(LC_ALL, "");
    string a, b, c, d , e, f, g;
    cout << "Ведите первую строку: ";
    getline(cin, a);

    cout << "Ведите вторую строку: ";
    getline(cin, b);

    cout << "Ведите третью строку: ";
    getline(cin, c);

    cout << "Ведите четвёртую строку: ";
    getline(cin, d);

    cout << "Ведите пятую строку: ";
    getline(cin, e);

    cout << "Ведите шестую строку: ";
    getline(cin, f);

    cout << "Ведите седьмую строку: ";
    getline(cin, g);

    CountWords(a);
    number(b);
    equal(c, d);
    podstr(e, f, g);
    return 0;
}



