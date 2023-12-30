#include "Minesweeper.h"
using namespace std;

int main(void){
    int row,column;
    cin >> row >> column;
    char *inputArray=new char[row*column];
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            cin >> inputArray[column*i+j];   
        
    int *sumArray=new int[row*column]; 
    resetArray(row,column,sumArray);

    checkAndIncrementTheClosestPositionOfTheMinedElements(column,row,sumArray,inputArray);
    
    printArray( column,row, sumArray);


    delete []inputArray;    
    delete []sumArray;
    return 0;
}
