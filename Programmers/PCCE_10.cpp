#include<iostream>
#include<string>

using namespace std;

string Solution(string text, int* anagram, int sw) {

	string answer = "";
	char* imsi = new char[text.length()]{ '.' };

	if (sw == 1) { // 암호화
		for (int i = 0; i < sizeof(anagram) / sizeof(*anagram); i++) {
			imsi[anagram[i]] = text[i];
		}
		for (int i = 0; i < text.length(); i++) {
			answer += imsi[i];
		}
	}
	else { // 복호화
		for (int i = 0; i < sizeof(anagram) / sizeof(*anagram); i++) {
			imsi[i] = text[anagram[i]];
		}
		for (int i = 0; i < text.length(); i++) {
			answer += imsi[i];
		}
	}

	return answer;
}
