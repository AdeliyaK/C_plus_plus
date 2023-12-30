#include "checkAndIncrementTheClosestPositionOfTheMinedElements.h"

void checkAndIncrementTheClosestPositionOfTheMinedElements(int column,int row, int *ouputArray, char *inputArray){
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            if(inputArray[column*i+j]=='!')  
                incrementTheClosestElementsInArray(ouputArray,i,j,row,column);
}