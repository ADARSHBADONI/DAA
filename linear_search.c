#include<stdio.h>

int main(){
int a[]={60,70,80,90,100,20,30};
for(int i=0;i<6;i++){
printf("%d  ",a[i]);
}
int key;
printf("\nenter the key element you want to search\n");
scanf("%d",&key);

int j=0;
int count=1;
while(j<6){
if(a[j]==key){
printf("element found\n");
break;
}
j++;
count++;
}
if(count==7){
printf("element not found\n");
}
else
{
printf("element found in %d searches \n",count);
}
}
