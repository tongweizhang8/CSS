//朴素模式匹配算法
int Index(SString S,SString T){
    int k = 1;
    int i = k,j = 1;
    while(i < S.length() && j < T.length){
        if(S[i] == T[j]){
            ++i;
            ++j;
        }else{
            k++;
            i = k;
            j = 1;
        }
    }
    if(j > T.length()){
        return k;
    }else{
        return 0;
    }
}
//kmp算法
int Index_KMP(SString S, SString T, int next[]) {
    int i = 1,j = 1;
    while(i <= T.length() && j <= S.length()){
        if(j == 0||S.ch[i] == T.ch[j]){
            ++i;
            ++j;//继续比较后继字符
        }else{
            j = next[j];//模式串右移
        }
        if(j > T.length){
            return i - T.length;//匹配成功
        }else{
            return 0;
        }
    }
}
