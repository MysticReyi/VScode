#pragma once
#define MAX_INFO_NUM    50
#define MAX_DATA_NUM    50000

//��ȡ�ļ������������buff��
//buffΪһ��ָ�����飬ÿһ��Ԫ����һ���ַ�ָ�룬��Ӧ�ļ���һ�е����ݡ�
//specΪ������������������
int read_file(char ** const buff, const unsigned int spec, const char * const filename);

//��result�������е�����д���ļ���д�뷽ʽΪ����д��
void write_result(const char * const buff, const char * const filename);

//�ͷŶ��ļ��Ļ�����
void release_buff(char ** const buff, const int valid_item_num);

//��ӡʱ�䡣���Ϊ��ӡ��Ϣͷ
void print_time(const char * const head);
