#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string result;
    long long len1 = itc_len(str1), len2 = itc_len(str2);
    for(int i = 0; i < num; i++){
        result = result + str1[i];
    }
    for(int i = 0; i < len2; i++){
        result = result + str2[i];
    }
    for(int i = num; i < len1; i++){
        result = result + str1[i];
    }
    return result;
}
