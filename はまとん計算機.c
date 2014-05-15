/*はま寿司＆トリトン用*/
#include<stdio.h>
main(void)
{
	int s;
	while(1){
	printf("はま寿司なら1を、トリトンなら0を入力してください：");
	scanf("%d",&s);
	
		if(s==1){/*はま寿司の場合*/
		int holiday,normal,a,b,total;
		double tax;
		holiday=100;
		normal=90;
		tax=1.08;
			while(1){
		printf("平日なら1を、休日なら0を入力してください：");
		scanf("%d",&a);
				if(a==0 || a==1){
				printf("皿数を入力してください：");
				scanf("%d",&b);

				if(a==1){total=b*normal*tax;}else{total=b*holiday*tax;}
					break;
				}
	

	else{printf("無効な数値です\n");}
		}
	printf("合計金額は%d円です",total);
	break;
	}
	
	else if(s==0){/*トリトンの場合*/
		int m1,m2,m3,m4,m5,m6,a,b,c,d,e,f,g;
	m1=130;	m2=140;	m3=194;
	m4=246;	m5=339;	m6=442;
	printf("%d円の皿数を入力してください：",m1);
	scanf("%d",&a);
	printf("%d円の皿数を入力してください：",m2);
	scanf("%d",&b);
	printf("%d円の皿数を入力してください：",m3);
	scanf("%d",&c);
	printf("%d円の皿数を入力してください：",m4);
	scanf("%d",&d);
	printf("%d円の皿数を入力してください：",m5);
	scanf("%d",&e);
	printf("%d円の皿数を入力してください：",m6);
	scanf("%d",&f);

	g=a*m1+b*m2+c*m3+d*m4+e*m5+f*m6;
	printf("合計金額は%d円です：",g);
	break;
	}
	else{
		/*有効な数値かチェック*/
		printf("無効な数値です\n");
		}
	}
	return 0;
}