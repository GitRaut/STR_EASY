#include "str_easy.h"

bool itc_equal_reverse(string str){
    long long len = itc_len(str);
    string result;
    for(int i = len - 1; i >= 0; i--){
        result = result + str[i];
    }
    if(result == str){
        return true;
    }
    return false;
}
