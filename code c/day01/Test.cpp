#define MAXLEN 255//预定义最大串长为225
typedef struct{
    char ch[MAXLNE];//每个分量存储一个字符
    int length;//串的实际长度
}SString;
typedef struct{
    char *ch;//按串长分配存储区
    int length;//串的长度
}HString;
HString s;
S.ch = (char *)malloc(sizeof(char));
S.length = 0;
//求子串
bool SubString(SString &sub,SString S,int len,int pos);{
    //子串范围越界
    if(pos + len > s.length){
return false;
}
    for(int i = pos;i < len + pos;i++){
        Sub.ch[i - pos + 1] = S.ch[i];
    }
    Sub.length = len;
    return true;
}
//index(s,t)定位操作
int Index(SString S,SString T){
    int i = 1,n = StrLength(S),m = StrLength(T);
    SString SubString;
    while (i <= n - m + 1){
        SubString(SubString,S,i,m)
        if(StrCompare(SubString,T)!=0){
            else return i;
        }
        return 0;
    }
}
