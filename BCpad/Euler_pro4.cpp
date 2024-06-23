//2つの3桁の数字の積からできた最大の回文
//完成版
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
	int x;
	int y;
	int ppap;
	
	x = 999;
	ppap = 0;
	
	while(x >= 1){
		y = 999;
		while(x-100 <= y){
			it = x * y;
			
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
			printf("x = %d, y = %d  ", x, y);
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
				
				
				/*桁が小さい方*/
				smlke = 1;
				for(lp3 = 1; lp3 <= lp2; lp3++){
					smlke = smlke * 10;
				}
				small = it % smlke;
				smlke = smlke / 10;
				small = small / smlke;
				
				
				
				keta = keta - 1;
				lp2 = lp2 + 1;
				
				/*結論*/
				if(big != small){
					printf("%dは回文ではありません。\n\n", it);
					break;
				}
				if(bigke == smlke || bigke / smlke == 10){
					printf("「%d」は回文です。\n\n", it);
					ppap = 1;
					break;
				}
				
			}
			if(ppap == 1){
				break;
			}
			y--;
		}
		if(ppap == 1){
			break;
		}
		x--;
	}
	return (0);
}