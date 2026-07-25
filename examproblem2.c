#include<stdio.h>
int lengthoflongestsubsstring;(char* s);
{
int last[256];
int i; 
 for(i = 0;i < 256; i++)
 last[i] = -1;

 int start = 0 
 int maxlen = 0
 for( i =0; s[i]!='\0';i++)
 {
    unsigned char ch = s[i];
     if (last[ch]>=start)
     start last [ch]+1;
     last [ch] = i;

     int len = i-start +;
     if(len>maxlen)
     maxlen=len;
 }
return maxlen;
}
int main()
{
    char s*="abcabcbb"
     printf("%d\n,lengthoflongestsubsstring(s)")
     return 0 ;

}


     