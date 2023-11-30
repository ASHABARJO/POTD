  int count1=0;
        while(n>0)
        {
            if(n%3==0)
            {
                n=n/3;
            }
            else
            {
                n--;
            }
                count1++;
        }
        return count1-1;
