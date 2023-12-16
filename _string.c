#include <stdint.h>

uint32_t len(char *s){
uint32_t count=0;
while(*s!='\0'){
count++;
s++;
}
return count;
}

