void BubbleSort(int* inputArr, int size) {

	int imsi;
	int SwapCnt = 0;

	for (int i = 0; i < size - 1; i++) { // 마지막 지점을 줄이기 위한 i

		for (int j = 0; j < size - i - 1; j++) { // i를 뺀 지점까지 진행

			if (inputArr[j] > inputArr[j+1]) {

				imsi = inputArr[j]; // swap
				inputArr[j] = inputArr[j+1];
				inputArr[j+1] = imsi;
				SwapCnt++;

			}

		}

		if (SwapCnt == 0)
			break; // 사이클을 돌면서 바뀐 적이 한 번도 없다 -> 정렬 된 것! 끝!

	}

	for (int i = 0; i < size; i++) {
		cout << inputArr[i] << " ";
	}

	cout << "\nBubble Sort's Swap Count : " << SwapCnt << "\n";

	return;

}
