//wap to generate all permutation of a given string
#include <stdio.h>
#include <string.h>
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void perm(char s[],int l,int r){
    if(l==r){
        printf("%s\n",s);
        return;
    }
    for(int i=l;i<=r;i++){
        swap(&s[l],&s[i]);
        perm(s,l+1,r);
        swap(&s[l],&s[i]);
    }
}
int main(){
    char s[100];
    scanf("%s",s);
    int len=strlen(s);
    perm(s,0,len-1);
    
}