
#include <iostream>
#include <stdexcept>
using namespace std;
# include "PhoneticFinder.hpp"

namespace phonetic{
  string find(string text, string word){
	int ans;
	int l = text.length();
	string tempWord;
	cout <<l <<endl;
	if(l==0 || word.length() == 0 || text.empty() || word.empty()){
		throw std::out_of_range("The text is empty");
		}
	
    for (int i = 0; i < l; i++) { 
	if(text.at(i) == ' ' || i == l-1){
		if(i==l-1){
			 tempWord+=text.at(i);
		}
	 ans=compareWord(tempWord,word);
	  if(ans ==0){
	  return tempWord;
	 }
	 else if(i== l-1 && ans !=1){
		throw std::out_of_range("The word is not in the text");
	 }
	 else{
		tempWord="";  
	 }
	 
		 }
	else{	 
		 tempWord+=text.at(i);
	}
		 
	}
	
  return 0;}
  
  int compareWord(string tempWord, string word){
	  int l=tempWord.length();
	  if(l != word.length()){
		  return 1;
	  }
	  for (int i = 0; i < l;) {
	   if(tempWord.at(i) ==word.at(i) || tempWord.at(i) ==word.at(i)+32 || tempWord.at(i) ==word.at(i)-32 ){
	   i++;
	   }
	   else if(word.at(i) == 't' || word.at(i) == 'd' ||word.at(i) == 'T' || word.at(i) == 'D' ){
		   if(tempWord.at(i) == 'T' || tempWord.at(i) == 'D' || tempWord.at(i) == 't' || tempWord.at(i) == 'd'){
				i++;
				
			}
		   else return 1;
	   }
	   
	    else if(word.at(i) == 'v' || word.at(i) == 'w' ||word.at(i) == 'V' || word.at(i) == 'W'){
		   if(tempWord.at(i) == 'V' || tempWord.at(i) == 'W' || tempWord.at(i) == 'v' || tempWord.at(i) == 'w'){
				i++;
			}
		   else return 1;
	   }
	   
	    else if(word.at(i) == 'g' || word.at(i) == 'j' ||word.at(i) == 'G' || word.at(i) == 'J' ){
		   if(tempWord.at(i) == 'G' || tempWord.at(i) == 'J' || tempWord.at(i) == 'j' || tempWord.at(i) == 'g'){
				i++;
				
			}
		   else return 1;
	   }
	    else if(word.at(i) == 's' || word.at(i) == 'z' ||word.at(i) == 'Z' || word.at(i) == 'S' ){
		   if(tempWord.at(i) == 'S' || tempWord.at(i) == 'Z' || tempWord.at(i) == 's' || tempWord.at(i) == 'z'){
				i++;
			}
		   else return 1;
	   }
	    else if(word.at(i) == 'o' || word.at(i) == 'u' ||word.at(i) == 'U' || word.at(i) == 'O'){
		   if(tempWord.at(i) == 'O' || tempWord.at(i) == 'U' || tempWord.at(i) == 'o' || tempWord.at(i) == 'u'){
				i++;
			}
		   else return 1;
	   }
	    else if(word.at(i) == 'i' || word.at(i) == 'y' ||word.at(i) == 'I' || word.at(i) == 'Y'){
		   if(tempWord.at(i) == 'I' || tempWord.at(i) == 'Y' || tempWord.at(i) == 'i' || tempWord.at(i) == 'y'){
				i++;
			}
		   else return 1;
	   }
	    else if(word.at(i) == 'b' || word.at(i) == 'f' || word.at(i)=='p' || word.at(i) == 'B' || word.at(i) == 'F' || word.at(i)=='P'){
		   if(tempWord.at(i) == 'B' || tempWord.at(i) == 'F' || tempWord.at(i) == 'P' || tempWord.at(i) == 'b' || tempWord.at(i) == 'f' || tempWord.at(i) == 'p'){
				i++;
			}
		   else return 1;
	   }
	   
	    else if(word.at(i) == 'c' || word.at(i) == 'k' || word.at(i)=='q' || word.at(i) == 'C' || word.at(i) == 'K' || word.at(i)=='Q'){
		   if(tempWord.at(i) == 'C' || tempWord.at(i) == 'K' || tempWord.at(i) == 'Q' || tempWord.at(i) == 'c' || tempWord.at(i) == 'k' || tempWord.at(i) == 'q'){
				i++;
			}
		   else return 1;
		   
	   }
	   else{
		   return 1;
	   }
	   
	    }
	return 0;}
};