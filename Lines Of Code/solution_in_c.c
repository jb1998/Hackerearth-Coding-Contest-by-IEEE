#include<stdio.h>
#include<math.h> // for using power function
int main() {
    int n; //no. of bottles
    scanf("%d",&n);
    int drink[n]; //defining an drink array to store quantity of each bottle..
    int i,j;
    for(i=0;i<n;i++)
        scanf("%d",&drink[i]);
    for(i=0;i<n;i++)
//sorting array in descending order to get minimum no . of lines using bitwise algorithm.....
    {
        for(j=i;j<n;j++)
        {
            if(drink[i]<drink[j])
            {
                drink[i]^=drink[j];
                drink[j]^=drink[i];
                drink[i]^=drink[j];
            }
        }
    }
    int lines=0;
    for(i=0;i<n;i++)   //finding minimum no. of lines....
    {
       lines+=(pow(2,i))*drink[i];
    }
    printf("%d",lines);
return 0;
}
