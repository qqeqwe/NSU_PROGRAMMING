#include <stdio.h>

int main() {
	int z=0;
	int t=0;
	int p=0;
	int k=0;
	int v=0;
	int x=0;
	int s=0;
    char c;
	char l;
	int m;
	int d=1;
	int f=0;
	int i=0;
	int j=0;
	char a[1023];
	char b[6];
	//printf("pack ili unpack");
	//printf("\n");
	while((l = getchar()) != '\n')
        {    
			b[f]=l;

			f++;

		}
	if(b[0]=='P'&&b[1]=='A'&&b[2]=='C'&&b[3]=='K'){
		m=1;

	}
	else if(b[0]=='U'&&b[1]=='N'&&b[2]=='P'&&b[3]=='A'&&b[4]=='C'&&b[5]=='K'){
		m=2;

	}
	else{
		printf("OSHIBKA\n");
		return 0;
	}

 
        //printf("Enter string: ");
       // printf("\n");
 
        while((c = getchar()) != '\n'&&c!=EOF)
        {    
			a[j]=c;
		//	printf("%c",a[j]);
			j++;
			if(j>=1023){
				printf("OSHIBKA\n");
				return 0;
			}

		}

    //printf("\n");
		switch(m){
		case 1:
		 for(i=0;i<=j-1;i++){
			
		    if(a[i]==a[i+1]){
				d++;
			}
			
			
			if(a[i]!=a[i+1]&&d==1){
				printf("%c",a[i]);
			}
			if(a[i]!=a[i+1]&&d==2){
			printf("%c%c",a[i],a[i-1]);
			d=1;
			}
			if(a[i]!=a[i+1]&&d>=3){
				printf("(%d)%c",d,a[i]);
				d=1;
			}
				
				
			
				
		 }
			break;
		case 2:
			for(i=0;i<=j-1;i++){
				if(a[i]=='('){
					if(a[i+2]!=')'){
						int v=i;
						while(a[v+1]!=')'){
							t=a[v+1]-48;
							z=z*10+t;
							v++;
							
										}
						int s=s+z;
						
										
						for(p=0;p<=z-2;p++){
							printf("%c",a[i+v+2]);
										}
									i=v;
}
					else{
						t=a[i+1]-48;
						for(k=0;k<=t-2;k++){
							printf("%c",a[i+3]);
						};
							}
				}	
				
				
				if(a[i]!='('&&a[i]!=')'&&a[i-1]!='('&&a[i+1]!=')'){
					printf("%c",a[i]);
					x++;
					
				}
			if((s+x)>=1024){
			printf("OSHIBKA\n");
			 return 0;
			}
			}	
			break;
	}
    return 0;
}