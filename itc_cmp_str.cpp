#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    string result = "";
    long long len1 = itc_len(str1), len2 = itc_len(str2), count = 0;
    if(str2 == ""){
        return str1;
    }
    if(num > len1){
        return str1;
    }
    for(int i = 0; i < num; i++){
        result = result + str1[i];
    }
    for(int i = 0; i < len2 && i < len1; i++){
        result = result + str2[i];
    }
    int j = itc_len(result) - len2;
    for(int i = itc_len(result); i < len1; i++){
        result = result + str1[j];
        j++;
    }
    return itc_slice_str(result, 0, len1-1);
}
