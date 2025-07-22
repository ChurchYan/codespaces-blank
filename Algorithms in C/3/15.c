#define N 1000

//这道题看不懂, 我认为注释掉 if(a[i]) 这一行没有任何影响
//这是正确答案吗?
//连带16题


int main(void)
{
  int i,j, a[N];
  for (i=2; i<N; i++) {a[i] = 1;}
  
  for (i=2; i<N; i++) {
    // if(a[i])
      for(j=i;i*j<N;j++) {a[i*j] = 0;}
  }
  for (i=2; i<N; i++)
  {
    if (a[i]) 
      printf("%4d\n", i);
  }
  printf("\n");
  
  return 0;
}

