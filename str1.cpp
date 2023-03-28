#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int CountWords(string sentence)
{
    int numberOfWords = 0;
    size_t i;

    if (isalpha(sentence[0])) {
        numberOfWords++;
    }

    for (i = 1; i < sentence.length(); i++) {
        if ((isalpha(sentence[i])) && (!isalpha(sentence[i-1]))) {
            numberOfWords++;
        }
    }

    return numberOfWords;
}

void equal(string f, string s){
    transform(f.begin(), f.end(), f.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (f == s){
        cout << true << endl;
    }
    else{
        cout << false << endl;
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
    int s2 = f.find_last_of(s);
    
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

    cout << CountWords(a) << endl;
    number(b);
    equal(c, d);
    podstr(e, f, g);
    return 0;
}



