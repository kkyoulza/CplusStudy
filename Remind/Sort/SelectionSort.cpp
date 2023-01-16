void SelectSort(int* inputArr,int size) {

	int imsi;
	int SwapCnt = 0;

	for (int i = 0; i < size - 1; i++) { // sort

		for (int j = i + 1; j < size; j++) {

			if (inputArr[i] > inputArr[j]) {

				imsi = inputArr[i]; // swap
				inputArr[i] = inputArr[j];
				inputArr[j] = imsi;
				SwapCnt++;

			}

		}

	}

	for (int i = 0; i < size; i++) {
		cout << inputArr[i]<<" ";
	}

	cout << "\nSelect Sort's Swap Count : "<< SwapCnt << "\n";

	return;

}
