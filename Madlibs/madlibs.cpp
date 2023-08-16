#include <iostream>

using namespace std;
string user = "Hallo";

int main()
{
    string color, pluralNoun, celebrity;
    cout << "Please Enter a Color" << endl;
    getline(cin, color);
    cout << "Please Enter a Plural Noun" << endl;
    getline(cin, pluralNoun);
    cout << "Please Enter a Celebrity Name" << endl;
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "i Love " << celebrity << endl;
    return 0;
}
