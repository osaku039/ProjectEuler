//2つの3桁の数字の積からできた最大の回文
//回文のみ
#include <stdio.h>

int main(void)
{
	//まず回文の判断の方法
	
	int keta;
	int bigke;
	int big;
	int smlke;
	int small;
	int lp1;
	int lp2;
	int lp3;
	int it;
	int its;
	
	printf(">>");
	scanf("%d", &it);
	
	keta = 0;
	its = it;
	bigke = 1;
	smlke = 1;
	lp2 = 1;
	
	/* 何桁か確認する */
	while(1){
		if(its < 10){
			keta = keta + 1;
			break;
		}
		its = its / 10;
		keta += 1;
	}
	printf("桁数>>%d\n", keta);
	
	/* 回文になっているかの確認 */
	while(1){
		
		/* 桁が大きい方 */
		bigke = 1;
		for(lp1 = 1; lp1 < keta; lp1++){
			bigke = bigke * 10;
		}
		
		big = it / bigke;
		big = big % 10;
		printf("大：%d  bigke = %d", big, bigke);
		
		
		/*桁が小さい方*/
		smlke = 1;
		for(lp3 = 1; lp3 <= lp2; lp3++){
			smlke = smlke * 10;
		}
		small = it % smlke;
		smlke = smlke / 10;
		small = small / smlke;
		printf("小：%d  smlke = %d", small, smlke);
		
		
		
		keta = keta - 1;
		lp2 = lp2 + 1;
		printf("\n\n");
		
		/*結論*/
		if(big != small){
			printf("%dは回文ではありません。\n", it);
			break;
		}
		if(bigke == smlke || bigke / smlke == 10){
			printf("「%d」は回文です。\n", it);
			break;
		}
	}
	
	return (0);
}
