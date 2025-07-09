#include <iostream>
using namespace std;

int main()
{
	int likeNum;
    cout << "좋아하는 숫자를 말해봅시다 : ";
    
    // 사용자가 입력한 데이터를 입력 스트림에서 추출해서 likenum에 저장
    cin  >> likeNum;
    
    cout << "당신이 좋아하는 숫자는"<< likeNum  << "입니다." << endl;
	// endl은 함수다. \n을 출력해주는 함수
	return 0;
}