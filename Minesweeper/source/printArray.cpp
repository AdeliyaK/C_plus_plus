#include "printArray.h"
using namespace std;
void printArray(int column,int row,int *array){
    for(int i=0;i<row;i++,cout << endl)
        for(int j=0;j<column;j++)
            cout << array[i*column+j];

}