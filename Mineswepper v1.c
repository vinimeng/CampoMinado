#include <stdio.h>
#include <stdlib.h>

int main(){
    int l, c, i, j;
    scanf("%d %d", &l, &c);
    char campo[l][c];
    int campoi[l][c];
    for(i=0;i<l;i++){
            scanf("%s", campo[i]);
            }
    for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                    switch(campo[i][j]){
                                        case '.': 
                                             campoi[i][j]= 0;
                                             break;
                                        case '*': 
                                             campoi[i][j]= -1;
                                             break;
                                             }
                    }
    }
 for (i = 0; i < l; i++) {
	for (j = 0; j < c; j++) {
		if (campoi[i][j] == -1) {
			if ((i - 1) >= 0) {
				if (campoi[i - 1][j] != -1) campoi[i - 1][j] += 1;
			}
			if ((i - 1) >= 0 && (j - 1) >= 0) {
				if (campoi[i - 1][j - 1] != -1) campoi[i - 1][j - 1] += 1;
			}
			if ((i - 1) >= 0 && (j + 1) < c) {
				if (campoi[i - 1][j + 1] != -1) campoi[i - 1][j + 1] += 1;
			}
			if ((j - 1) >= 0) {
				if (campoi[i][j - 1] != -1) campoi[i][j - 1] += 1;
			}
			if ((j + 1) < c) {
				if (campoi[i][j + 1] != -1) campoi[i][j + 1] += 1;
			}
			if ((i + 1) < l && (j - 1) >= 0) {
				if (campoi[i + 1][j - 1] != -1) campoi[i + 1][j - 1] += 1;
			}
			if ((i + 1) < l) {
				if (campoi[i + 1][j] != -1) campoi[i + 1][j] += 1;
			}
			if ((i + 1) < l && (j + 1) < c) {
				if (campoi[i + 1][j + 1] != -1) campoi[i + 1][j + 1] += 1;
			}
		}
	}
}                                   
for(i=0;i<l;i++){
                  for(j=0;j<c;j++){
                  					  if(campoi[i][j] == -1) printf("* ");
                                      else printf("%d ", campoi[i][j]);
                  }
                  printf("\n");
}                                                   
    system("PAUSE");
    return 0;
}
