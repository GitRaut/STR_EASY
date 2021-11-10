#include "str_easy.h"

void itc_first_end_three(string str){
    long long len = itc_len(str), i;
    if(len > 5){
        for(i = 0; i < 3; i++){
            cout << str[i];
        }
        for(i = len - 3; i < len; i++){
            cout << str[i];
        }
    } else {
        for(int i = 0; i < len; i++){
           cout << str[0];
        }
    }
}
