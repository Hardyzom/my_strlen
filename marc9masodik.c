#include <stdio.h>
#include "prog1.h"
#include <string.h>

int my_strlen(string szoveg){

int i=0;
while(szoveg[i] != '\0'){
    i++;

}
return i;
}

int main(){

string szoveg= "Hello";
printf("A string hossza: %d\n",my_strlen(szoveg));
return 0;

}