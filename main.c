#include<stdio.h>
#include<string.h>
void reversestr(char *p,int size) {
    int s = 0,e = size-1;
    char temp;
    while(s<=e) {
        temp = *(p+s);
        *(p+s) = *(p+e);
        *(p+e) = temp;
        s++;
        e--;
    }
    
}

int main() {
    char str[50],*ptr;
    ptr = str;
    printf("Enter the string \n");
    gets(str);
    reversestr(ptr,strlen(str));
    printf("%s",str);
    return 0;
}