#include "str_easy.h"

int itc_max_char_on_end(string str){
    long long len = itc_len(str);
    int count = 0, max = 0;
    for(int i = 0; i < len; i++){
        for(int j = i; str[j] >= '0' and str[j] <= '9'; j++){
            count++;
        }
        if(count > max){
            max = count;
        }
        count = 0;
    }
    return max;
}
