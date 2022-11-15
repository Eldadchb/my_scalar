#include <stdio.h>

#define GET_LENGTH_MSG "Please insert the length of the vectors:\n"
#define GET_VECTOR_MSG "Please insert the scalars of vector number %d, use ENTER in between:\n"
#define RESULT_MSG "\nThe scalar product is: %d \n"

int scalar_product(int[],int[],int);
int get_length();

int main() {

    int i;  /* Counter for the FOR loops */
    int len_of_vec = get_length();  /* Gets the length of Vectors form the user */
    int vec_1[100];
    int vec_2[100];

    printf(GET_VECTOR_MSG, 1);
    for (i=0;i<len_of_vec;i++){ /* Gets scalars of the 1st vector */
        scanf("%d",&vec_1[i]);
    }

    printf(GET_VECTOR_MSG, 2);
    for (i=0;i<len_of_vec;i++){ /* Gets scalars of the 2nd vector */
        scanf("%d",&vec_2[i]);
    }
    /* Calculates the Scalar product. uses scalar_product function */

    printf(RESULT_MSG, scalar_product(vec_1,vec_2,len_of_vec)); /* Prints the result */

    return 0;
}

int get_length(){
    /* This function asks length of vectors from user and returns it */
    
    int len_of_vec = 0;
    printf(GET_LENGTH_MSG);
    scanf("%d",&len_of_vec);

    return len_of_vec;
}


int scalar_product(int vec_1[],int vec_2[], int len_of_vec){
    /* This function gets two vectors and the length of them,
       calculates the scalar product and returns it */
       
    int i;
    int sca_product = 0;

    for (i = 0; i < len_of_vec; i++){
        sca_product += vec_1[i] * vec_2[i];
    }
    return sca_product;
}
