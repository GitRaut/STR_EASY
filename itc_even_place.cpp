#include "str_easy.h"

string itc_even_place(string str){
    long long len = itc_len(str);
    string result;
    for(int i = 0; i < len; i++){
        if(i % 2 == 0){
            result = result + str[i];
        }
    }
    return result;
}
