#include <stdio.h>

int main(void) {
    
    int arr[8];
    int idx_arr[8];
    
    for (int i=0; i<8; i++){
        scanf("%d", &arr[i]);
        idx_arr[i] = i;
    }

    

    for (int i=0; i<7; i++){
        int mx_idx = i;
        int temp;

        for (int j=i+1; j<8; j++){
            if(arr[j] > arr[mx_idx]){
                mx_idx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[mx_idx];
        arr[mx_idx] = temp;

        temp = idx_arr[i];
        idx_arr[i] = idx_arr[mx_idx];
        idx_arr[mx_idx] = temp;
    }

    int total = 0; 
    for (int i=0; i<5; i++){
        total += arr[i];
    }
    
    for (int i=0; i<4; i++){
        for (int j=i+1; j<5; j++){
            if (idx_arr[i] > idx_arr[j]) {
                
                int tmp = idx_arr[i];
                idx_arr[i] = idx_arr[j];
                idx_arr[j] = tmp;
                
            }
        }
}

    printf("%d \n", total);



    for (int i=0; i<5; i++){
        printf("%d ", idx_arr[i] + 1);
    }

    return 0;
}