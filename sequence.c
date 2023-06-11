#include <stdio.h>

struct sequence{int max; int best_start; int best_end; };

struct sequence max_subsequence_sum(int *A, unsigned int n){
    int this_sum, max_sum, best_i, best_j, best_k;
    int i, j, k;
    struct sequence result;

    max_sum = 0; best_i = best_j = -1;
    for(i = 0; i < n; i++){
        this_sum = 0;
        for(j = i; j < n; j++){
            this_sum += A[j];
            if(this_sum > max_sum){
                max_sum = this_sum;
                best_i = i;
                best_j = j;
            }
        }
    }
    result.max = max_sum;
    result.best_start = best_i;
    result.best_end = best_j;
    return result;
}