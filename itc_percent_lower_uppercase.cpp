#include "str_easy.h"

double itc_percent_lower_uppercase(string str){
    long long len = itc_len(str);
    double result, colZ = 0, colS = 0;
    for(int i = 0; i < len; i++){
        if((str[i] >= 65) and (str[i] <= 90)){
            colZ++;
        }
        if((str[i] >= 97) and (str[i] <= 122)){
            colS++;
        }
    }
    result = colS / colZ;
    return result;
}
