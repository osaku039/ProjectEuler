//2��3���̐����̐ς���ł����ő�̉�
//�񕶂̂�
#include <stdio.h>

int main(void)
{
	//�܂��񕶂̔��f�̕��@
	
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
	
	/* �������m�F���� */
	while(1){
		if(its < 10){
			keta = keta + 1;
			break;
		}
		its = its / 10;
		keta += 1;
	}
	printf("����>>%d\n", keta);
	
	/* �񕶂ɂȂ��Ă��邩�̊m�F */
	while(1){
		
		/* �����傫���� */
		bigke = 1;
		for(lp1 = 1; lp1 < keta; lp1++){
			bigke = bigke * 10;
		}
		
		big = it / bigke;
		big = big % 10;
		printf("��F%d  bigke = %d", big, bigke);
		
		
		/*������������*/
		smlke = 1;
		for(lp3 = 1; lp3 <= lp2; lp3++){
			smlke = smlke * 10;
		}
		small = it % smlke;
		smlke = smlke / 10;
		small = small / smlke;
		printf("���F%d  smlke = %d", small, smlke);
		
		
		
		keta = keta - 1;
		lp2 = lp2 + 1;
		printf("\n\n");
		
		/*���_*/
		if(big != small){
			printf("%d�͉񕶂ł͂���܂���B\n", it);
			break;
		}
		if(bigke == smlke || bigke / smlke == 10){
			printf("�u%d�v�͉񕶂ł��B\n", it);
			break;
		}
	}
	
	return (0);
}
