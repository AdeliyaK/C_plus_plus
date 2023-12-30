#include "resetArray.h"
void resetArray(int row,int column,int *array){
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            array[column*i+j]=0;
        
}