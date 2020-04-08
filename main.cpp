#include <iostream>
#include "setSimple.h"
#define MAX 676
using namespace std;

int main() {
    int position1,position2,position3,position4;
    SetSimple<int> firstSet;
    int n = 5,m = 10;
    for (int i = n; i < m; ++i) {
        firstSet.insert(i);
    }
    cout << "First: " << endl;
    firstSet.printSet();
    position1=4;
    cout << "Element on position: " << position1 <<" is: ";
    firstSet.printElementOnPosition(position1);
    SetSimple<int> secondSet;
    int n2 = 5, m2 = 10;
    for (int j = n2; j < m2 ; j = j + 2) {
        secondSet.insert(j);
    }
    cout << "Second: " << endl;
    secondSet.printSet();
    position2=2;
    cout << "Element on position: " << position2 <<" is: ";
    secondSet.printElementOnPosition(position2);
    SetSimple<char> thirdSet;
    for (char i = 'a'; i <= 'z'; i++) {
        thirdSet.insert(i);
    }
    cout << "Third: " << endl;
    thirdSet.printSet();
    position3=10;
    cout << "Element on position: " << position3 <<" is: ";
    thirdSet.printElementOnPosition(position3);

    cout << "Four: " << endl;
    SetSimple<string> fourSet;
    string wordsTab[MAX];
    char lettersTab[]={"abcdefghijklmnopqrstuvwxyz"};
    string tempWord;
    int howMany=0;
    for (int k = 0; k < 26; ++k) {
        for (int i = 0; i < 26 ; ++i) {
            tempWord += lettersTab[k];
            tempWord +=lettersTab[i];
            wordsTab[howMany] = tempWord;
            howMany++;
            tempWord="";
        }
    }
    for (int i1 = 0; i1 < MAX; ++i1) {
           fourSet.insert(wordsTab[i1]);
    }
    fourSet.printSet();
    position4=300;
    cout << "Element on position: " << position4 <<" is: ";
    fourSet.printElementOnPosition(position4);

    return 0;
}
 