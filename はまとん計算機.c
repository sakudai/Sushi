/*�͂܎��i���g���g���p*/
#include<stdio.h>
main(void)
{
	int s;
	while(1){
	printf("�͂܎��i�Ȃ�1���A�g���g���Ȃ�0����͂��Ă��������F");
	scanf("%d",&s);
	
		if(s==1){/*�͂܎��i�̏ꍇ*/
		int holiday,normal,a,b,total;
		double tax;
		holiday=100;
		normal=90;
		tax=1.08;
			while(1){
		printf("�����Ȃ�1���A�x���Ȃ�0����͂��Ă��������F");
		scanf("%d",&a);
				if(a==0 || a==1){
				printf("�M������͂��Ă��������F");
				scanf("%d",&b);

				if(a==1){total=b*normal*tax;}else{total=b*holiday*tax;}
					break;
				}
	

	else{printf("�����Ȑ��l�ł�\n");}
		}
	printf("���v���z��%d�~�ł�",total);
	break;
	}
	
	else if(s==0){/*�g���g���̏ꍇ*/
		int m1,m2,m3,m4,m5,m6,a,b,c,d,e,f,g;
	m1=130;	m2=140;	m3=194;
	m4=246;	m5=339;	m6=442;
	printf("%d�~�̎M������͂��Ă��������F",m1);
	scanf("%d",&a);
	printf("%d�~�̎M������͂��Ă��������F",m2);
	scanf("%d",&b);
	printf("%d�~�̎M������͂��Ă��������F",m3);
	scanf("%d",&c);
	printf("%d�~�̎M������͂��Ă��������F",m4);
	scanf("%d",&d);
	printf("%d�~�̎M������͂��Ă��������F",m5);
	scanf("%d",&e);
	printf("%d�~�̎M������͂��Ă��������F",m6);
	scanf("%d",&f);

	g=a*m1+b*m2+c*m3+d*m4+e*m5+f*m6;
	printf("���v���z��%d�~�ł��F",g);
	break;
	}
	else{
		/*�L���Ȑ��l���`�F�b�N*/
		printf("�����Ȑ��l�ł�\n");
		}
	}
	return 0;
}