  #include<stdio.h>
  int main()
  {
    int n,on,rn=0,r;
    scanf("%d", &n);
    on = n;
    while(n!=0){
        r=n%10;
        rn=rn*10+r;
        n=n/10;
    }
    if(on==rn)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
  }