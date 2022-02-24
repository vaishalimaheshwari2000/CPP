#include <stdio.h>
#include <math.h>
void main(){
	char s[5000];
	int i,j=0,h,k,d,a[5000],c[5000],u,g,t,l,b,q,o,z=1,p=1,x=1,r=1,v[5000],lw;
  float y,div_res,div_res2,tr_resu; //4th
	gets(s);	
    for(i=0;s[i]!='\0';i++){  
        if(s[i]==40  || s[i]==123){
          start:
          i++; 
         while(s[i]!=41 || s[i]!=125)
         { // FOR SINE
                      
           if(s[i]=='s'|| s[i]=='S')   
           h++;                       
           if((s[i]=='i'|| s[i]=='I') && h==2)  
           h++;                                 
           if((s[i]=='n'|| s[i]=='N') && h==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } } // string to integer 
                    tr_resu = sin(a[k-1]); 
                    }
            //FOR COSINE
            
             if(s[i]=='c'|| s[i]=='C')
               z++;
           if((s[i]=='o'|| s[i]=='O') && z==1)
               z++;
           if((s[i]=='s'|| s[i]=='S') && z==2)
               { while(s[i]!=41){
                   i++;
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } }
                    tr_resu = cos(a[k-1]); 
                      }
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
               lw++;
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   a[k]=(a[k]*10)+(s[i++]-48)
                   k++;
                   } }
                    tr_resu = tan(a[k-1]); 
                  }
             //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
               t++;
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { while(s[i]!=41){
                   i++;
                   k=0;
                   
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } }
                    tr_resu = cosec(a[k-1]);  
                   }

            // FOR COT
             if(s[i]=='C' || s[i]=='C')
               b++;
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { while(s[i]!=41){
                   i++;
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } }
                    tr_resu = cot(a[k-1]);   } 
                    i++; } 
                     }

            //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
               q++;
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               { while(s[i]!=41){
                   i++;
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){            
                   a[k] = 0;     `
                   while(s[i]<='9'&& s[i]>='0')
                   a[k]=(a[k]*10)+(s[i++]-48);  
                   k++;    
                   } }     
                    tr_resu = sec(a[k-1]);  
                     }           
                   
                   //STRING TO NUMBER  
                   //sku56nbhg5n58jkkhhbjugn6 
                   k =0;                       
                   if(s[i]<='9'&& s[i]>='0'){  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   a[k]=(a[k]*10)+(s[i++]-48);   
                   k++;
                   //goto start; 
                   } 
              
            //FOR MULTIPICATION
              if(s[i]==42)
                   o = -1;   
               
            //FOR SUBTRACTION
              else
                if(s[i]==45)
                   o = -2;
            //FOR ADDITION
            else
               if(s[i]==43)      
                  o = -3;        
            //FOR DIVISION
            else
             if(s[i]==47)   
                  o = -4;
            //FOR XOR 
            else
                if(s[i]==94) 
                  o = -5;

             if(o == (-1))
              { if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                y = y*a[k-1];
              else
              d = d*a[k-1];}

              else
               if(o ==(-3))
               {if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3  )
                y = y+a[k-1];
               else
                 d = d + a[k-1];} 

             else
             if(o ==(-4))
              { d = a[k-1];
                if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3)
                tr_resu = d/tr_resu;
              else
                 x= d/x; }

             else
             if(o==(-5)){
               v[j] = a[k-1];
               if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3  ){
               tr_resu = tr_resu^ v[j];
              else
                if(j>0)
                d = v[j-1]^v[j]; 
                j++;
              }
              

                   
               
