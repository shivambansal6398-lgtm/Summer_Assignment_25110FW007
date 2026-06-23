#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int freq[256]={0};

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }
    char maxChar;
    int maxFreq=0;
    for(int i=0;str[i]!='\0';i++){
        if(freq[(int)str[i]]>maxFreq && str[i]!='\n'){
            maxFreq=freq[(int)str[i]];
            maxChar=str[i];
        }
    }
    printf("Maximum occurring character: %c\n",maxChar);
    printf("Frequency: %d\n",maxFreq);
    return 0;
}