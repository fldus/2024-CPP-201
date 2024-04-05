#include <stdio.h>

void main(void) {
	char str[100] = "Juyoung";
	char str2[100];

	// str에 있는 내용을 str2에 복사하기
	/* str2[0] = str[0];
	str2[1] = str[1];
	str2[2] = str[2];
	str2[3] = str[3];
	str2[4] = str[4];
	str2[5] = str[5];
	str2[6] = str[6];
	*/	
	int i = 0;
	for (; str[i] != '\0'; i++) {
		str2[i] = str[i]; // i = 0 ~ 6 
	}// i = 7
	str2[i] = str[i];	// 널 문자('\0') 없으면 에러 발생.
	
	printf("%s", str2);
}