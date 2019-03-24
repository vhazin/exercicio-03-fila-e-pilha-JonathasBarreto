#include <stdio.h>
 
int main(void) {
    
    int q_num, i, k, q_rem;
    scanf("%d", &q_num);
    
    int vetor[q_num];
    
    for(i = 0; i <= q_num - 1; i++){
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &q_rem);
    int remover[q_rem];
     
    for(i = 0; i <= q_rem - 1; i++){
        scanf("%d", &remover[i]);
    }
  
    for(i = 0; i <= q_num - 1; i++){
        for(k = 0; k <= q_rem - 1; k++){
            if(remover[k] == vetor[i]) vetor[i] = -1;

        }
        
        if(vetor[i] != -1) printf("%d ", vetor[i]);
    }
}  
