#include "str_easy.h"

string itc_reverse_str(string str){
    long long len = itc_len(str);
    string result;
    for(int i = len - 1; i >= 0; i--){
        result = result + str[i];
    }
    return result;
}
