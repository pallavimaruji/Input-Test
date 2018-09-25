#include <stdio.h>

int main()
{
    unsigned long n,k,t;
    int cnt,i;
    scanf("%lu %lu",&n,&k);

    for(cnt=i=0;i<n;i++)

        {
            scanf("\n%lu",&t);
            if(t%k==0)
                cnt++;
        }

    printf("%d",cnt);

    return 0;
}
