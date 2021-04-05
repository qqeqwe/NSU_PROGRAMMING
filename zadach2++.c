#include <stdio.h>
#define q 1023
#include <string.h>

int main() {
	int z = 0,p = 0,t = 0,k = 0,v = 0,x = 0,s = 0,d = 1,i = 0,j = 0;
	int m;
	char a[q];
	char b[6];
	char str1[10]="PACK";
	char str2[10]="UNPACK";
	gets (b);
	if (strcmp(b,str1) == 0) {
		m = 1;

						     }
	else if (strcmp(b,str2) == 0){
		m = 2;

								 }
	else {
		printf ("OSHIBKA\n");
		return 0;
		 }
      gets (a);
	  while (a[i]!='\0'&&a[i] != EOF) {
		  j++;
		  i++;
									  }
	  i=0;
		switch (m) {
		case 1:
		 for (i=0; i <= j-1; i++) {
		    if (a[i] == a[i+1]) {
				d++;
							    }
		if (a[i] != a[i + 1] && d == 1){
				printf("%c",a[ i ]);
									   }
			if (a[i] != a[ i + 1] && d == 2) {
			printf ("%c%c",a[i],a[ i - 1]);
			d = 1;
										     }
			if (a[i]!= a[i+1]&&d >= 3) {
				printf ("(%d)%c",d,a[i]);
				d = 1;
								      }	
								   }
			break;
		case 2:
			for (i = 0; i <= j-1; i++) {
				if (a[i] == '(') {
					
						int v = i;
						while (a[v + 1]!=')') {
							t = a[v + 1] - '0';
							z = z * 10 + t;
							v++;
										      }
						int s = s + z;
						//printf("%d!!\n",z);
						for (p = 0 ; p <= z - 2;p++){
							printf("%c",a[v+2]);
												    } 
									i = v;
									z = 0;
									v = 0;
					
							      }	
				
				if (a[i] != '('&&a[i] != ')'&&a[i-1] != '('&&a[i+1] != ')') {
					printf ("%c",a[i]);
					x++;
					
																		    }			
			if((s + x) >= q + 1) {
				printf("OSHIBKA\n");
				return 0;
								 }
										}	
		break;
				   }
    return 0;
			}
