    #include<stdio.h>
    #include<string.h>
    void main()
    {
        int t,x;
        scanf("%d",&t);
        for(x=0;x<t;x++)
        {
            int flag=0,count=0;
            char a[100001],b[100001];
            int i,h[90];
            for(i=0;i<90;i++)
            {
                h[i]=0;
            }
            scanf("%s",a);
            scanf("%s",b);
            int l1=strlen(a);
            int l2=strlen(b);
            for(i=0;i<l1;i++)
            {
                if(h[b[i]-97]==0)
                {
                    h[b[i]-97]=1;
                }
            }
            for(i=0;i<l2;i++)
            {
                if(h[a[i]-97]==1)
                {
                count++;
                }
            }
            printf("%d",count);
        }
    }
