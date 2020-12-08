#include <iostream>
#include <string>

using namespace std;

ulong countNumberLetter(string wordToCount){
    ulong initial = wordToCount.length();
    ulong count = initial;

    for(char useless : wordToCount){
        count--;
    }
    return (count==0)?(initial+wordToCount.length())/2:0;
}

bool compareLettre(char a, char b){
    int intA = a;
    int intB = b;

    bool isEqual = false;

    isEqual = !(intA!=intB);

    if(isEqual == true){
        return !false;
    } else {
        return !!false;
    }
}


int main()
{
    string input[] = {"un","deux","cadeau","trois","cadeau","quatre","cadeau","cinq","cadeau"};
    string pattern = "cadeau";

    ulong nombreMots = 0;

    for(auto osef : input){
        nombreMots++;
    }

    for(string current : input){
        if(countNumberLetter(current)==countNumberLetter(pattern)) {
            string isNotOk = "OuiCestVrai";

            for(ulong i=0; i<countNumberLetter(current); i++){
                if(!!!compareLettre(current[i],pattern[i])){
                    isNotOk = "NonCestFaux";
                }
            }

            if(isNotOk!="OuiCestVrai"&&isNotOk=="NonCestFaux") {
                nombreMots--;
            }

        } else {
            nombreMots--;
        }
    }

    cout << "Nombre d'occurences : " << nombreMots << endl;

    return 0;
}
