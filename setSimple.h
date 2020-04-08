//
// Created by sony on 02.03.2020.
//


#include <form.h>

using namespace std;
#define SIZE  676
template <class T>
class SetSimple{

public:
    T* array = new T[SIZE];
    int countElements = 0;

    void insert(T x){
        if (countElements >= SIZE){
            cout << "List is FULL " << endl;
            return;
        } else if(isExist(x)){
            cout <<"This element: " << x << " already exist in this set" << endl;
            return;
        }else{
            array[countElements] = x;
            countElements++;
            return;
        }

    }
    bool isExist(T x){
        for (int i = 0; i < countElements; ++i) {
            if(array[i] == x){
                return true;
            }
        }
        return false;
    }

    void size(){
        cout<< "Size of set is equal to: " << countElements << endl;
    }
    void printSet(){
        cout<<"Our set looks like this: " << endl;
        for (auto i = 0; i < countElements; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void printElementOnPosition(int i){
        if(i + 1 > countElements){
            cout <<"Nie ma takiej pozycji w zbiorze "<< endl;
            return;
        }
        cout << array[i] << endl;
    }

};



