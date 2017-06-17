void intQuicksort(int array[], int bottom, int top){
	int pivot;
	int i;
	int j;
	int temp;

	if (bottom < top) {
		pivot = bottom; // select a pivot element
		i = bottom;
		j = top;

		while (i < j) {

			//find a number toper than pivot
			while (array[i] <= array[pivot] && i <= top)
				i++;

			//find a bottomer number than pivot
			while(array[j] > array[pivot] && j >= bottom)
				j--;

			if(i < j) {
				//swap nummbers
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		//Here we are sure that j <= i, so swap pivot num with j num
		temp = array[j];
		array[j] = array[pivot];
		array[pivot] = temp;

		//Repeat quicksort on lower and higher of j
		intQuicksort(array, bottom, j-1);
		intQuicksort(array, j+1, top);
	}
}

void floatQuicksort(float array[], int bottom, int top){
	int pivot;
	int i;
	int j;
	float temp;

	if (bottom < top) {
		pivot = bottom; // select a pivot element
		i = bottom;
		j = top;

		while (i < j) {

			//find a number toper than pivot
			while (array[i] <= array[pivot] && i <= top)
				i++;

			//find a bottomer number than pivot
			while (array[j] > array[pivot] && j >= bottom)
				j--;

			if (i < j) {
				//swap nummbers
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		//Here we are sure that j <= i, so swap pivot num with j num
		temp = array[j];
		array[j] = array[pivot];
		array[pivot] = temp;

		//Repeat quicksort on lower and higher of j
		floatQuicksort(array, bottom, j-1);
		floatQuicksort(array, j+1, top);
	}
}