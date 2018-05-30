template <typename T, size_t N>
void quick(T (&a)[N],int s,int d)
{
    if(s<d)
    {
        int p=0,i=s,j=d,aux;
        while(i<j)
          {
              if(a[i]>a[j])
                {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
                p=1-p;
                }
            i=i+p;
            j=j-1+p;
          }
        quick(a,s,i-1);
        quick(a,i+1,d);
    }
}
