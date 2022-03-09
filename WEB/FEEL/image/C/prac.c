#include <stdio.h>
#include <math.h>
void main(){
	char s[5000];  +
	int i,j=0,h,k,add_result,a[5000],c[5000],u,g,t,l,b,q,o,z=1,p=1,r=1,v[5000],lw,mz,str_int ,str_int2,x;
    float  div_result, div_result2, tr_resu,multiply_result,of_result;
	gets(s);
   // WHEN WE WILL MEET FROM BRACKETS 
       for(i=0;s[i]!='\0';i++){ 
         if(s[i]==40 || s[i]==123){
         while(s[i]!=41 || s[i]!=125){
          c = 0;                                   // c works like a flag variable here 
          // STRING TO INTEGER 
           if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                   str_int  = a[k-1]; 
                    if(k>0)
                    c = 1;}  

            // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
            while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
              // FOR SINE 
            if(s[i]=='s'|| s[i]=='S')
            { h = 0;
              h++;  }     
            if((s[i]=='i'|| s[i]=='I') && h==1)  
            h++; 
             if((s[i]=='n'|| s[i]=='N') && h==2)                                  
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   }    
                //FOR COSINE
            
             if(s[i]=='c'|| s[i]=='C')
               { z =0; 
                  z++; }
             if((s[i]=='o'|| s[i]=='O') && z==1)
               z++;
             if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
               { lw =0;
                  lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
              {  t =0;
                 t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
               {  b =0;
                 b++; } 
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++; 
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
               {   q =0; 
                   q++; }
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } 
                    } }
                  // OF 
                  while(s[i++]=='o' || s[i]=='F'){
                    if(s[i]=='f' || s[i]=='F')
                     x = 1;       
                     else
                     break;                // it's check that whether it's has a of or not 
                  // OF IMPLEMENTATION
                  if(x == 1){
                   if(c)
                      of_result = str_int;
                   else
                   of_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       of_result = tr_resu* of_result;
                      else
                      of_result = of_result*str_int;}   }
                
                
                
                
                   //  division in brackets
                  for(;s[i]!='\0';i++){
                     if(s[i++]==47) {
                   if(c)
                   div_result = str_int;
                   else
                   div_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(c)
                   div_result = div_result /str_int;
                   else
                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3)
                   div_result = div_result/tr_resu;  } }

                   // For Multipication
                   for(;s[i]!='\0';i++){
                  if(s[i++] == 42)
                  { if(c)
                      multiply_result = str_int;
                   else
                   multiply_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = cosec(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = cot(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = sec(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       multiply_result = tr_resu* multiply_result;
                      else
                      multiply_result = multiply_result*str_int;}
                      break; }  
                       
                       
                       
                    // addition  in brackets
                    for(;s[i]='\0';i++)
                   { if(s[i++]==43){ 
                    if(c)
                      add_result = str_int;
                   else
                   add_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       add_result = tr_resu + add_result;
                      else
                      multiply_result = add_result + str_int;} break;  }
                       
                       
                    // subtraction in brackets 
                     for(;s[i]!='\0';i++){
                      
                       if(s[i++]==45){ 
                    if(c)
                      sub_result = str_int;
                   else
                   sub_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu =  sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       sub_result = sub_result - tr_resu ;
                      else
                      sub_result = sub_result - str_int;}  } }} break;}  
               


               ////////////////////////AFTER SOLVE BRACKETS /////////////////////////////////////////////
              // check is there any element after brackets 
              for(i=0;s[i]!='\0';i++){
                if(s[i]!=40 || s[i]!=123)
                 {if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                   str_int  = a[k-1]; 
                    if(k>0)
                    c = 1;} } 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                    if(s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')
                    break; }

               // IF STRING IS IN THE FORM OF TRIGONOMETRIC   
            while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
              // FOR SINE 
            if(s[i]=='s'|| s[i]=='S')
            { h = 0;
              h++;  }     
            if((s[i]=='i'|| s[i]=='I') && h==1)  
            h++; 
             if((s[i]=='n'|| s[i]=='N') && h==2)                                  
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   }    
                //FOR COSINE
            
             if(s[i]=='c'|| s[i]=='C')
               { z =0; 
                  z++; }
             if((s[i]=='o'|| s[i]=='O') && z==1)
               z++;
             if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
               { lw =0;
                  lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
              {  t =0;
                 t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
               {  b =0;
                 b++; } 
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
               {   q =0; 
                   q++; }
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } 
                    } }



                // if it's present AFTER SOLVE brackets " OF "
                for(;s[i]!='\0';i++)
                 { while(s[i++]=='o' || s[i]=='F' && (s[i]!=40  || s[i]!=123)){
                    if(s[i]=='f' || s[i]=='F')
                     x = 1;       
                     else
                     break;                // it's check that whether it's has a of or not 
                  // OF IMPLEMENTATION
                  if(x == 1){
                   if(c)
                      of_result = str_int;
                   else
                   of_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       of_result = tr_resu* of_result;
                      else
                      of_result = of_result*str_int;}  }  }

                     
                   //  ASB IN CASE OF DIV
                  for(;s[i]!='\0';i++){

                     if(s[i++]==47) {
                   if(c)
                   div_result = str_int;
                   else
                   div_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(c)
                   div_result = div_result /str_int;
                   else
                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3)
                   div_result = div_result/tr_resu;  } break; }




                   //ASB  in case of multiply_result
                
                   for(;s[i]!='\0';i++){
                  if(s[i++] == 42)
                  { if(c)
                      multiply_result = str_int;
                   else
                   multiply_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]);
                    tr_resu = 1/tr_resu; 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       multiply_result = tr_resu* multiply_result;
                      else
                      multiply_result = multiply_result*str_int;} 
                    break; }

            
            // ASB of addition  
                    for(;s[i]='\0';i++)
                   { if(s[i++]==43){ 
                    if(c)
                      add_result = str_int;
                   else
                   add_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;   
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       add_result = tr_resu + add_result;
                      else
                      multiply_result = add_result + str_int;}   break; }



              
              
                    // ASB of subtraction 
                     for(;s[i]!='\0';i++){
                      
                       if(s[i++]==45){ 
                    if(c)
                      sub_result = str_int;
                   else
                   sub_result = tr_resu;
                   c = 0;
                  // STRING TO INTEGER 
                  if(s[i]<='9'&& s[i]>='0'){
                   k = 0;  
                   a[k]=0;                  
                   while(s[i]<='9'&& s[i]>='0')
                   { a[k]=(a[k]*10)+( s[i++]-48);   
                   k++; } 
                    if(k>0) c =1;
                   str_int  = a[k-1];
                   }  

                  // IF STRING IS IN THE FORM OF TRIGONOMETRIC THEN   
                  while((s[i]>='a'|| s[i]>='A') && (s[i]<='z'|| s[i]<='Z')) { 
                  // FOR SINE 
                  if(s[i]=='s'|| s[i]=='S')
                   { h =0;
                      h++;  }    
                   if((s[i]=='i'|| s[i]=='I') && h==1)  
                   h++; 
                    if((s[i]=='n'|| s[i]=='N') && h==2)                                  
                   { i++;
                   while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(str_int); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                   } 
                //FOR COSINE
            
                 if(s[i]=='c'|| s[i]=='C')
                  { z =0; 
                     z++; }
                 if((s[i]=='o'|| s[i]=='O') && z==1)
                 z++;
                if((s[i]=='s'|| s[i]=='S') && z==2)
               {  i++;
                  while(s[i]!=41){
                    k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                  tr_resu = cos(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                  }
            
            // FOR TAN

             if(s[i]=='t'|| s[i]=='T')
              { lw =0;
                 lw++; }
             if((s[i]=='a' || s[i]=='A') && lw==1)
               lw++;
             if((s[i]=='n'|| s[i]=='N') && lw==2)
               { while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                   
                    tr_resu = tan(a[k-1]); 
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; } }
            
            //FOR COSEC

            if(s[i]=='c'|| s[i]=='C')
             { t=0;
               t++; }
            if((s[i]=='o'|| s[i]=='O') && t==1)
               t++;
            if((s[i]=='s' || s[i]=='S') && t==2)
               t++;
            if(( s[i]=='E'||s[i]=='e') && t==3)
               t++;
            if((s[i]=='c'|| s[i]=='C') && t==4)
               { i++;
                 while(s[i]!=41){
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = sin(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; 
                   } }

            // FOR COT
             if(s[i++]=='C' || s[i]=='C')
              { b = 0;
               b++; }
             if((s[i]=='o' || s[i]=='O') && b==1)
               b++;
             if((s[i]=='t'|| s[i]=='T') && b==2)
               { i++;
                 while(s[i]!=41){    
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }
                    tr_resu = tan(a[k-1]); 
                    tr_resu = 1/tr_resu;  
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break;  }  }
                    

           //FOR SEC
              if((s[i]=='s' || s[i]=='S') )
              { q =0;
               q++;}
              if(( s[i]=='E'||s[i]=='e') && q==2)
               q++;
              if((s[i]=='c'|| s[i]=='C') && q==3)
               {while(s[i]!=41){
                   i++;     
                   k=0;
                   if(s[i]<='9'&& s[i]>='0'){
                   a[k]=0;  
                   while(s[i]<='9'&& s[i]>='0')
                   {a[k]=(a[k]*10)+(s[i++]-48);
                   k++;
                   } str_int = a[k-1]; }   
                    tr_resu = cos(a[k-1]); 
                    tr_resu = 1/tr_resu;
                    if(s[i]==42 || s[i]==47 || s[i]==45 || s[i]==94 || s[i]==43 )
                    break; }
                    }   } 

                   if(h==2 || z==2 || lw==2 || t==4 || q==3 || b==3 )
                       sub_result = sub_result - tr_resu ;
                      else
                      sub_result = sub_result - str_int;} break; } 











 





        
        
        
               
           














         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
        