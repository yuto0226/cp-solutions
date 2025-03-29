#include <stdio.h>

char en_code[27] = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
int en_num;
char input[10];

int main() {
  scanf("%s", input);
  for (int i = 0; i < 26; i++) {
    // printf("is en_code[%d]=%c == input[0]=%c ?\n",i,en_code[i],input[0]);
    if (en_code[i] == input[0]) {
      en_num = i + 10;
      input[0] = '0' + en_num % 10;
      en_num /= 10;
      break;
    }
  }
  // printf("en_num=%d\n",en_num);
  // for(int i=0;i<10;i++){
  //     printf("%d, ",input[i]-'0');
  // }
  // printf("\n");
  int result = en_num;
  for (int i = 0; i < 10; i++) {
    if (i == 9) {
      result += input[i] - '0';
      // printf("result+= %d =%d\n",input[i]-'0',result);
    }
    result += (input[i] - '0') * (9 - i);
    // printf("result+= %d*%d =%d\n",input[i]-'0',9-i,result);
  }
  // printf("%d\n",result);
  if (result % 10 == 0)
    printf("real\n");
  else
    printf("fake\n");

  return 0;
}
