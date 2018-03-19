#include <iostream>
#include <map>

using namespace std;

void printMap(map<char, int> mymap) {
  map<char, int>::iterator it = mymap.begin();
  while (it != mymap.end()) {
    cout << it->first << " -> " << it->second << endl;
    it++;
  }
}

void rprintMap(map<char, int> mymap) {
  map<char, int>::reverse_iterator rit = mymap.rbegin();
  while (rit != mymap.rend()) {
    cout << rit->first << " -> " << rit->second << endl;
    rit++;
  }
}

int main() {
  map<char, int> map1;
  map1['a'] = 100;
  map1['b'] = 500;
  map1['c'] = 600;

  printMap(map1);

  cout << "--------" << endl;

  rprintMap(map1);

  cout << "--------" << endl;

  cout << "Capacity: " << map1.size() << endl;
  cout << "Empty: " << map1.empty() << endl;

  cout << "--------" << endl;

  map1['f'] = 1000;
  cout << "f: " << map1['f'] << endl;
  map1['g'] = 1123;
  cout << "g: " << map1.at('g') << endl;

  map<char, int> map2;
  map2.insert(pair<char, int>('m', 100));
  map2.insert(pair<char, int>('n', 9000));

  cout << "--------" << endl;

  printMap(map2);

  map2.swap(map1);

  cout << "---- map1 ----" << endl;
  printMap(map1);
  cout << "---- map2 ----" << endl;
  printMap(map2);

  cout << "--------" << endl;

  map2.erase('a');
  printMap(map2);

  cout << "--------" << endl;

  map2.clear();

  printMap(map2);

  cout << "--------" << endl;

  /* 判断 map 中是否存在某元素 */
  map<char, int>::iterator it = map1.find('m');
  if (it != map1.end()) {
    cout << "in" << endl;
  } else {
    cout << "out" << endl;
  }

  cout << "--------" << endl;

  if (map1.count('m')) {
    cout << "in" << endl;
  } else {
    cout << "out" << endl;
  }
  
  return 0;
}
