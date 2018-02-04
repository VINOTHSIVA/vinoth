#include<stdio.h>
int volume(float *rad,float *ht);
void main()
{
    float vol,radius,height;
    volume(&radius,&height);
}
int volume(float *rad,float *ht)
{float vol;
    printf("enter the values of radius and cylinder");
    scanf("%f%f",&(*rad),&(*ht));
    vol=((3.14)*(*rad)*(*rad)*(*ht));
    printf("%f",vol);
}

