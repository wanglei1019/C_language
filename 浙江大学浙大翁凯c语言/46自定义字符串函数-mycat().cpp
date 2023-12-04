#include<stdio.h>
#include<string.h>

char * mycat1(char *dst,const char *src);
char * mycat2(char *dst,const char *src);

int main(int argc,char const *argv[]){
	char dst[] = "Hello ";
	char src[] = "world!";
	
	printf("mycat1(dst,src) = %s\n",mycat1(dst,src));
	printf("mycat2(dst,src) = %s\n",mycat2(dst,src));
	return 0;
}
/**
	@�Զ�����
		mycat(),�����ַ��� 
		mycat1()  ����ķ�ʽʵ��
		mycat2() ָ��ķ�ʽʵ�� 
*/ 
char * mycat1(char *dst,const char *src){
	int inx = 0;
	
	int dstlen = strlen(dst);
	while(src[inx] != '\0'){	
		dst[dstlen+inx] = src[inx];
		inx++;	
	}
	dst[dstlen+inx] = '\0';
	return dst;	
}

char * mycat2(char *dst,const char *src){
	char *ret = dst;
	dst = dst + strlen(dst);//det->'\0' 
	while(*dst++ = *src++);
	return ret;	
}
/**
	@while(*dst++ = *src++);ѭ������ָ���ָ������
		1.��������++�����ȼ�����*����Ȼ����dst++����ȡֵ*��++֮ǰ�ĵ�ַ 
		2.ѭ������һ��ִ�е�˳��src������dst���� -> Ȼ���src����֮ǰָ���λ��ȡֵ*,��ֵ��dst����֮ǰ��ָ���λ�� 
			-> �ж�dst����֮ǰ�����λ�õ�ֵ�Ƿ�Ϊ '\0' 
		3.��Ȼ����֪src������Ǹ��ַ������һλ'\0'һ���ḳֵ��dst�����Ǹ��ַ������һλ��Ϊʲô����Ϊ��while�ж�'\0'ѭ���Ż��˳�
		4.��ʱ��ѭ���˳�ʱ��src��dst���Ѿ������� srcָ��src�Ǹ��ַ���'\0'�ĺ���һλ��dstָ��dst�Ǹ��ַ���'\0'�ĺ���һλ
		5.��ʱ���Ƿ��� src��dst �������ַ�����ָ�붼�Ѿ�Խ������ˣ�����*dst = '\0';ʱ�Ƕ���ģ�����˵�ǲ���Ҫ�� 

*/
