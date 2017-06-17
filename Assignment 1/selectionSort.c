void intSelectionSort(int array[], int size){
    int minimum;
    int i;
    int j;
    int temp; //for swap

    //loop throught the array
    for (i = 0; i < size; i++)
    {
        //set min
        minimum = i;

        //find min in rest of array by comparing to min
        for (j = i + 1; j < size; j++)
            if (array[j] < array[minimum])
                minimum = j;

        //swap
            temp = array[minimum];
            array[minimum] = array[i];
            array[i] = temp;
        }
}

void floatSelectionSort(float array[], int size){
    int minimum;
    int i;
    int j;
    float temp; //for swap

    //loop throught the array
    for (i = 0; i < size; i++)
    {
        //set min
        minimum = i;

        //find min in rest of array by comparing to min
        for (j = i + 1; j < size; j++)
            if (array[j] < array[minimum])
                minimum = j;

        //swap
            temp = array[minimum];
            array[minimum] = array[i];
            array[i] = temp;
        }
}