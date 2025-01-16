#include <iostream>
using namespace std;

bool legalBrackets(string line){

		string log = "";


	for(int i = 0; i < line.length(); i++){
		if(line[i] == '('){
			log.append("(");

		}else if(line[i] == '['){
			log.append("[");

		}else if(line [i] == '{'){
			log.append("{");

		}else if(line[i] == ')'){
			if(log[log.length() - 1] != '('){
				return 0;
			}else{
				log = log.substr(0, log.length() - 1);
			}
			
		}else if(line[i] == ']'){
			if(log[log.length() - 1] != '['){
				return 0;
			}else{
				log = log.substr(0, log.length() - 1);
			}

		}else if(line[i] == '}'){
			if(log[log.length() - 1] != '{'){
				return 0;
			}else{
				log = log.substr(0, log.length() - 1);
			}
		}
	}

	if(log == ""){
		return 1;
	}else{
		return 0;
	}

}

int main(int argc, char* argv[]){
	string str_in;
	cin >> str_in;

	if(legalBrackets(str_in)){
		cout << "legal" << endl;
	}else{
		cout << "illegal" << endl;
	}

	return 0;
}