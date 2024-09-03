#include <stdio.h>
#include <stdbool.h>


bool search_element(double *pTr , int size ,int element) 
{
    for(int i=0 ; i<size ; i++)
    {
        if(pTr[i] == element)
         {
            
            return 1 ;
         }
         else {
            return 0 ; 
         }
       
    }
}



int main()
{
    /* Search if an element is given in array
    */
     
     double arr[5] = {1.2 , 0.0 ,2.4 , 55.2, 11.9} ; 
     bool result = search_element(arr,5,0.7) ;
     if(result == 1) 
     printf("The number has been found in array") ; 
     if(result == 0)
     printf("The number has NOT been found in array") ;
    return 0 ; 
}