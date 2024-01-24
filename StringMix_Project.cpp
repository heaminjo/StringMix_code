#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LENG 20
char* solution(const char* str1, const char* str2) {
	int str1len = strlen(str1);  //str1의 문자 개수 구하기

	char* answer = (char*)malloc(str1len * 2 + 1); //문자열이 섞이면 늘어나기때문에 
	             //사이즈를 2배로 초기화
	int idx = 0;

	for (int i = 0; i < str1len; i++) {
		answer[idx++] = str1[i];  //0부터 시작하여 인덱스가 증가하며 저장
		answer[idx++] = str2[i];
	}
	answer[idx] = NULL; //마지막 인덱스인 10에는 NULL저장
	return answer;
}

int main(void) {
	printf("%s", solution("aaaaa", "bbbbb"));
	return 0;
}