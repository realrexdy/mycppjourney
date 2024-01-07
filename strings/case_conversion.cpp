#include<iostream>
#include<string>
using std::cin, std::cout, std::string, std::getline;

string uprcse(string mixcse){
	size_t leng = size(mixcse);
	for(int i=0; i<leng; i++){
		if(mixcse[i]>96 && mixcse[i]<123){
			mixcse[i]-= 32;
		}
	}
	return mixcse;
}
string lwrcse(string mixcse){
	size_t leng = size(mixcse);
	for(int i=0; i<leng; i++){
		if(mixcse[i]<91 && mixcse[i]>64){
			mixcse[i]+= 32;
		}
	}
	return mixcse;
}
string snkcse(string mixcse){
	size_t leng = size(mixcse);
	mixcse = lwrcse(mixcse);
	for(int i=1; i<leng; i++){
		if(mixcse[i]!=' '&& (mixcse[i]<65 || (mixcse[i]>90&&mixcse[i]<97) || mixcse[i]>122)){
			for(int j=i; j<leng; j++){
				mixcse[j]=mixcse[j+1];
			}
			i-=1;
			leng--;
		}
	}
	for(int i=1; i<leng; i++){
		if(mixcse[i]==' '&&mixcse[i+1]==' '){
			for(int j=i; j<leng; j++){
				mixcse[j]=mixcse[j+1];
			}
			i-=1;
			leng--;
		}
	}
	for(int i=0; i<leng; i++){
		if((mixcse[i]<65 || (mixcse[i]>90 && mixcse[i]<97) || mixcse[i]>122)){
			mixcse[i]='_';
		}
	}
	return mixcse;
}
string kbbcse(string mixcse){
	size_t leng = size(mixcse);
	mixcse = lwrcse(mixcse);
	for(int i=1; i<leng; i++){
		if(mixcse[i]!=' '&& (mixcse[i]<65 || (mixcse[i]>90&&mixcse[i]<97) || mixcse[i]>122)){
			for(int j=i; j<leng; j++){
				mixcse[j]=mixcse[j+1];
			}
			i-=1;
			leng--;
		}
	}
	for(int i=1; i<leng; i++){
		if(mixcse[i]==' '&&mixcse[i+1]==' '){
			for(int j=i; j<leng; j++){
				mixcse[j]=mixcse[j+1];
			}
			i-=1;
			leng--;
		}
	}
	for(int i=0; i<leng; i++){
		for(int i=0; i<leng; i++){
		if((mixcse[i]<65 || (mixcse[i]>90 && mixcse[i]<97) || mixcse[i]>122)){
			mixcse[i]='-';
		}
	}
	}
	return mixcse;
}
string cmlcse(string mixcse){
	size_t leng = size(mixcse);
	mixcse = lwrcse(mixcse);
	for(int i=1; i<leng; i++){
		if(mixcse[i]==' '&&mixcse[i+1]==' '){
			for(int j=i; j<leng; j++){
				mixcse[j]=mixcse[j+1];
			}
			i-=1;
			leng--;
		}
	}
	for(int i=1; i<leng; i++){
		if(mixcse[i-1]==' '){
			if(mixcse[i]>96 && mixcse[i]<123){
				mixcse[i]-=32;
			}
			else if(mixcse[i]>64 && mixcse[i]<91){
				mixcse[i]+=32;
			}
		}
	}
	for(int i=1; i<leng; i++){
		if(mixcse[i]==' '|| (mixcse[i]<65 || (mixcse[i]>90&&mixcse[i]<97) || mixcse[i]>122)){
			for(int j=i; j<leng; j++){
				mixcse[j]=mixcse[j+1];
			}
			i-=1;
			leng--;
		}
	}
	return mixcse;
}

int main(){
	cout << "Enter a string: ";
	string mixcse;
	getline(cin, mixcse);
	string uppercase=uprcse(mixcse);
	cout << "\n Uppercase:  " << uppercase << "\n";
	string lowercase=lwrcse(mixcse);
	cout << "\n Lowercase:  " << lowercase << "\n";
	string snakecase=snkcse(mixcse);
	cout << "\n Snakecase:  " << snakecase << "\n";
	string kebebcase=kbbcse(mixcse);
	cout << "\n Kebabcase:  " << kebebcase << "\n";
	string camelcase=cmlcse(mixcse);
	cout << "\n Camelcase:  " << camelcase << "\n";
}