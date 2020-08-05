#include<stdio.h>
#include<string.h>
void displaypathtoprincess(int n,char grid[101][101]){
        int i,j,up,left;
        short m[2],p[2];
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                if(grid[i][j]=='m')
                {
                    m[0]=i;
                    m[1]=j;
                }
                if(grid[i][j]=='p')
                {
                    p[0]=i;
                    p[1]=j;
                }
            }
        }
        if((up=p[0]-m[0])<0)
        {
            for(;up<0;++up)
                printf("UP\n");
        }
        else{
            for(;up>0;--up)
                printf("DOWN\n");
        }
        if((left=p[1]-m[1])<0)
        {
            for(;left<0;++left)
                printf("LEFT\n");
        }
        else{
            for(;left>0;--left)
                printf("RIGHT\n");
        }
}
int main(void) {

    int m,i;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displaypathtoprincess(m,grid);
    return 0;
}
