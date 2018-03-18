#include <iostream>
#include <map>

using namespace std;

void Begin() {
    map<char, int> mymap;
    mymap['a'] = 100;
    mymap['b'] = 500;
    mymap['c'] = 600;

    map<char, int>::iterator it = mymap.begin();
    while (it != mymap.end()) {
        cout << it->first << " => " << it->second << endl;
        it++;
    }
}

int main() {

    Begin();

    return 0;

}
