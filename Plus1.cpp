#include <iostream>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;

string replace(string str, const string& from, const string& to)
{
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

int main()
{
    string fword, sword, str;
    string path = "myFile.txt";
    fstream f;

    f.open(path, ios::in);
    if (!f.is_open()) {
        cerr << "error: failed to open file." << endl;
        return 1;
    }
    getline(f, str);
    f.close();

    cout << "replace from: ";
    cin >> fword;
    cout << "replace to: ";
    cin >> sword;

    f.open(path, ios::out);
    if (!f.is_open()) {
        cerr << "error: failed to open file." << endl;
        return 1;
    }
    f << replace(str, fword, sword);
    f.close();

    return 0;
}