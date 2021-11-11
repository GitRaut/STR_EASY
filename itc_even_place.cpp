#include "str_easy.h"

string itc_even_place(string str){
    long long len = itc_len(str);
    string result;
    if(itc_len(str) <= 1){
        return "-1";
    }
    for(int i = 0; i < len; i++){
        if(i % 2 == 1){
            result = result + str[i];
        }
    }
    return result;
}
