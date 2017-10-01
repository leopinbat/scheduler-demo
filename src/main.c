#include <stdio.h>

int main() {
  int var0, var1, var2, var3, var4, n;
  scanf("%d %d %d %d %d %d", &var0, &var1, &var2, &var3, &var4, &n);

  for (int i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
	
	
 	if((i%var0!= 0)&&(i%var1!= 0)&&(i%var2!= 0)&&(i%var3!= 0)&&(i%var4!= 0)){
		printf ("-");
	}
	
	else {
		if(i%var0 == 0)
			printf("%d", 0);

		if(i%var1 == 0)
			printf("%d", 1);

		if(i%var2 == 0)
			printf("%d", 2);

		if(i%var3 == 0)
			printf("%d", 3);

		if(i%var4 == 0)
			printf("%d", 4);
	}
	
	printf ("\n");
	
  }

  return(0);
}
