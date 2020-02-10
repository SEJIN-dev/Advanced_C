#include <stdio.h>

int main(void)
{
       char name[100];
       char address[100];
       char address2[100];

       printf("이름을 입력하시오: ");
       gets(name);
       printf("현재 거주하는 주소를 입력하시오: ");
       gets(address);
       printf("본가 주소를 입력하시오:")
       scanf("%s", address2);
       puts(name);
       puts(address);
       puts(address2); // scanf 로 입력되었기때문에 puts로 출력할 수 없다. 
       return 0;
}
