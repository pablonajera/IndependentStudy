/*
Write functions for implementing sorting algorithms on an array (Insertion Sort, Selection Sort and Quick Sort).
Do this for an array of ints, an array of floats and an array of structs.

Also make a driver program that runs tests and prints results.
    -Ex: for an array containing [1,7,2,9,3] the ouput would be
    "The first array is 1,7,2,9,3 and after sorting it is 1,2,3,7,9
*/

void intInsertionSort (int arr[], int size){
	int key;
	int j;

	//loop though array
	for (int i = 0; i < size; i++ ){
		key = arr[i];
		j = i-1;

		//move items greater than next item up
		while (j >= 0 && key < arr[j]){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = key;
	}
}

int main(){
	//define array & size
	int arrayOfInts[] = {1,7,2,9,3};
	int size = sizeof(arr)/sizeof(arr[0]);

	//Print original array
	printf("Originally, the array is: ");
	for (int i = 0; i < size; i++){
		printf("%d,", arr[i]);
	}
	printf("\n");

	//Sort
	insertionSort(arrayOfInts, size);

	//Print New Array
	printf("After insertionSort, it is: ");
	for (int i = 0; i < size; i++){
		printf("%d,", arr[i]);
	}
	printf("\n");
}