static char ans[100000];
    long int i,j=0,count=0,temp=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            continue;
        }
        count++;
        i++;
    }
  float row1=sqrt(count);
  int col=ceil(row1);
  int row=floor(row1);
  
  i=0;
  while(i<col)
  {
     for(j=i;j<count;j+=col)
     {
         
         if(s[j]==' ')
         {
             if(j+1<count)
             {
                 ans[temp]=s[j+1];
                 temp++;
             }
         }
         else
         {
        ans[temp]=s[j];
                 temp++;
         }
     }  
    ans[temp]=' ';
    temp++;
   i++;   
  }
return ans;