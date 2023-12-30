#include "incrementTheClosestElementInArray.h"
void incrementTheClosestElementsInArray(int *pointerToTheOuputArray,int currentColumn,int currentRow,int allRows,int allColumns){
    pointerToTheOuputArray[currentColumn*allColumns+currentRow]++;      
    if(currentColumn>0 && currentRow>0){        
        pointerToTheOuputArray[(currentColumn-1)*allColumns+(currentRow-1)]++; 
        pointerToTheOuputArray[(currentColumn-1)*allColumns+currentRow]++;  
        pointerToTheOuputArray[currentColumn*allColumns+currentRow-1]++; 
    }
    else if (currentRow==0)  
        pointerToTheOuputArray[(currentColumn-1)*allColumns+currentRow]++;
    else if (currentColumn==0)  
        pointerToTheOuputArray[currentColumn*allColumns+currentRow-1]++;


    if(currentColumn<(allRows-1) && currentRow<(allColumns-1)){     
        pointerToTheOuputArray[(currentColumn+1)*allColumns+(currentRow+1)]++;  
        pointerToTheOuputArray[(currentColumn+1)*allColumns+currentRow]++;   
        pointerToTheOuputArray[currentColumn*allColumns+currentRow+1]++;   
    }
    else if (currentColumn<(allRows-1))
        pointerToTheOuputArray[(currentColumn+1)*allColumns+currentRow]++;
    else if (currentRow<(allColumns-1))
        pointerToTheOuputArray[currentColumn*allColumns+currentRow+1]++;
    if(currentColumn!=0 && currentRow<(allColumns-1))   
        pointerToTheOuputArray[(currentColumn-1)*allColumns+currentRow+1]++;
    if(currentRow!=0 && currentColumn<(allRows-1))  
        pointerToTheOuputArray[(currentColumn+1)*allColumns+currentRow-1]++;  
}