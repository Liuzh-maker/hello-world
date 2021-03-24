class test
{
  public:
     void bubble_sort_demo(int n,int a[])
     {
       for(int i=0;i<n-1;i++)
       {
         bool flag=false;
         for(int j=n-1;j>i;j--)
         {
           if(a[j-1]>a[j])
           {
             swap(a[j-1],j[j]);
             flag=ture;
           }
           if(flag==false)
             return;

         }
            
       }

     }
}
