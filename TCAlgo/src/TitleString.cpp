/*
 * TitleString.cpp
 *
 *  Created on: Jun 21, 2014
 *      Author: nrajc_000
 */
#include <string>
#include "TitleString.h"

using namespace std;

string TitleString::toFirstUpperCase(string title) {
	int i = 0;
	char* tempTitle = const_cast<char*>(title.c_str());
	bool isChanged = false;
	while(tempTitle[i] != '\0'){
		if(tempTitle[i] != ' '  && isChanged == false){
			tempTitle[i] = std::toupper(tempTitle[i]);
			isChanged = true;
			i++;
		}else if( tempTitle[i] != ' ' && isChanged == true){
			i++;
		}else if( tempTitle[i] == ' ' && isChanged == true){
			isChanged = false;
			i++;
		}else{
			i++;
		}
	}
	return tempTitle;
}
