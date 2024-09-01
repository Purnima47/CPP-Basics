#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    // cin >> s; //it will take input untill first space is encountered.
    // so we will not use cin.
    getline(cin, s);
    cout << s << endl;

    string t = "string";
    // Indexing in string.
    cout << t[0] << endl;
    // append a character
    t.push_back('s');
    cout << t << endl;
    t.pop_back();
    cout << t << endl;
    t.clear(); // makes the string empty

    // reverse of string
    reverse(s.begin(), s.end());
    cout << s;

    // stoi --> string to integer
    // to_string()  -> int to string
}