#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string result = "";
    long long len1 = itc_len(str1), len2 = itc_len(str2), count = 0;
    if(str2 == ""){
        return str1;
    }
    for(int i = 0; i < num; i++){
        result = result + str1[i];
    }
    for(int i = 0; i < len1 - num; i++){

        result = result + str2[i];
    }
    for(int i = itc_len(result); i < len1; i++){
        result = result + str1[i];
    }
    return result;
}
