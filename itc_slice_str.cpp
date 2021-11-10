#include "str_easy.h"

string itc_slice_str(string str, int start, int end){
    long long len = itc_len(str);
    string result;
    if((end > len) and (start < len)){
        for(int i = start; i < len; i++){
            result = result + str[i];
        }
        return result;
    }
    if(start > end){
        return str;
    }
    for(int i = start; i <= end; i++){
        result = result + str[i];
    }
    return result;
}
