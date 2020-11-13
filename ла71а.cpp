#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> myfnc(vector <string> string);

int main()
{
    int k = 0;
    vector<string> str;
    string a;
    string word;
    getline(cin, a);
    for (int i = 0; i <= size(a); i++)
    {
        if (a[i] != ' ' && a[i] != '\0')
            word.push_back(a[i]);
        else
        {
            str.push_back(word);
            word = "";
            k++;
        }
    }
    vector<string> nstr = myfnc(str);
    for (int i = 0; i < size(nstr); i++)
        cout << nstr[i] << " ";
}
vector<string> myfnc(vector <string> str)
{
    vector<string> nstr;
    for (string x : str) {
        int i = size(x) - 1;
        for (int j = 0; j < i; j++, i--)
        {
            char t = x[j];
            x[j] = x[i];
            x[i] = t;
        }
        nstr.push_back(x);
    }
    return nstr;
}