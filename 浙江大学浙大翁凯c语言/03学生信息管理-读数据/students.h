#ifndef __TTUDENTS_H__
#define __STUDENTS_H__


#define STR_LEN 20	
/**	const int STR_LEN1 = 20; 
	1.����Error�� variably modified 'name' at file scope 
	2.��C�����У������Ƕ���һ��ȫ�ֱ�����������̬����static�ͳ���const���Լ���ͨ������ʱ��
	�����ڴ�ռ���ڳ��� ����ʱ �Զ����䣬��˱�������Ҫȷ����������Ĵ�С��
	3.�ڱ���ʱ������name����Ĵ�СSTR_LEN��ֵ��֪��������һ������ʱ����������˱������޷�ȷ����������Ĵ�С���ʱ�������� 
	4.Ԥ����ָ��#define������һ������ʱ���������Խ������
	5.����ʱ����-->ֵ�ڱ���ʱȷ�� 
	6.ȫ�ֱ�����������̬����static�ͳ���const���Լ���ͨ������-->ֵ������ʱȷ�� 
*/
void read(FILE *fp,int index);

typedef struct _student{
	char name[STR_LEN];
	int gender;
	int age;
} Student;



#endif
