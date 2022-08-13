# 키오스크 만들기 프로젝트 (독수리 프로젝트 이후에 시작)

## 학습 목표

1. 클래스들을 활용할 것
2. 포인터를 적극적으로 활용할 것
3. 더 효율적인 코드를 지향할 것
4. UI도 활용해 볼 것

<hr>

## 시나리오 및 요구사항들

### 시나리오

- 한 프랜차이즈 햄버거집에 키오스크를 들이려 한다. 손님이 앞에 섰을 때 메인 화면이 나오게 하고, 메인 화면을 터치하게 되면 메뉴를 정할 수 있는 표로 이동하게 된다.
- 표는 **"행사 메뉴/세트 메뉴/단품/사이드 메뉴/음료 및 추가 사항"** 5가지로 이루어지게 된다.
- 손님이 메뉴를 선택하게 되면 아래에 선택한 메뉴들이 리스트로 이루어져 보이게 되며, 가장 아래쪽에는 가격 총합이 나오게 된다.
- 리스트 오른쪽에 있는 x 버튼을 누르게 되면 메뉴를 제외할 수 있으며, 제외 한 다음 다시 넣게 되면 맨 아래쪽에 추가 된다.
- 결제 버튼을 누르게 되면 카드 결제, 현금 결제를 선택할 수 있다.
- 결제가 완료되면 번호표가 주어지게 된다.


### 요구사항

1. 5가지 종류는 상단에서 선택할 수 있게 했으면 좋겠습니다. **(행사 메뉴/세트 메뉴/단품/사이드 메뉴/음료 및 추가 사항)**
2. 행사 메뉴는 실행 시에 메뉴 중에서 랜덤으로 선택하여 세팅할 것(4~6개 세팅하는 개수도 랜덤)
3. 메뉴 버튼은 사진이 위로 오고, 메뉴 이름이 밑에 왔으면 좋겠습니다.
4. 메뉴를 선택하면 **"메뉴 사진, 메뉴 이름, 메뉴에 대한 설명, 가격, 선택하기 버튼"** 으로 구성되었으면 좋겠습니다.
5. 선택한 메뉴 리스트 맨 오른쪽에 X 버튼을 넣었으면 좋겠습니다.
6. 번호표는 순차적으로 더해지되, 끄게 되면 초기화 되었으면 좋겠습니다.

