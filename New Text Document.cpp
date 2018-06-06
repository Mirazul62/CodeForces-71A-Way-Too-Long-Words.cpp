
#	Author	Problem	Lang	Verdict	Time	Memory	Sent	Judged
27605523	Practice:
Miraz07	71A - 13	GNU C	Accepted	30 ms	4 KB	2017-06-06 08:20:37	2017-06-06 08:20:37	 Add to favourites	Compare

→ Source Copy
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int len,i,n,j;
    //printf("Enter a character: ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    scanf("%s", &ch);
    len=strlen(ch);
    // printf("%d\n", len);
    if(len<=10)
    {
        printf("\n%s\n", ch);
    }
    else
    {
        for(i=1;i<len-1;i++)
        {
            printf("%c%d%c\n",ch[0],len-2,ch[strlen(ch)-1] );
            break;
        }
        // printf("%c%d%c",ch[0],len-2,ch[strlen(ch)-1] );
    }
    }
}
