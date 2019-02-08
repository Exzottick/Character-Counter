#include <iostream>

int main(){

	int charCount[26] = {0}, i;
	char c;

	while(c = getchar()){
		if(c == EOF)
			break;
		else if(isalpha(c)){
				charCount[tolower(c) - 'a']++;
			}
		else{ continue; }
	}
	c = 'A';
	for(i = 0; i < 26; i++){
		std::cout << c++ << " : " << charCount[i] << std::endl;
	}

}