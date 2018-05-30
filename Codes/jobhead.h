#ifndef JOBHEAD_H_INCLUDED
#define JOBHEAD_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<memory.h>
#include<string.h>
#define Pcross 0.9                            //�ӽ���
#define Pmutate 0.3                           //������
extern int chronum;                           //Ⱦɫ����
extern int age;                               //��������
extern int Nextgen;                           //��һ��Ⱦɫ�����
extern int **Ma;                              //��¼����
extern int **Ti;                              //��¼ʱ��
extern int N;                                 //��¼������
extern int M;                                 //��¼������
extern int *n_num;                            //��¼ÿ�������Ĺ�����
extern int ProcedureTotal;                    //��¼�ܹ�����
extern int **ChroOne;                         //Ⱦɫ��Ⱥ1
extern int **ChroTwo;                         //Ⱦɫ��Ⱥ2
extern int **ChroSon;                         //�Ӵ�Ⱦɫ��
extern int *FitFather;                        //������Ӧ��
extern int *FitSon;                           //�Ӵ���Ӧ��
extern int average;                          //��Ӧ��ƽ��ֵ
extern int generation;                        //���¶��ٴ�
extern clock_t start;                         //ʱ�䳤��
//��̼�¼
extern int GreatGeneNum;                      //���ʱ��
extern int* GreatGeneChain;                   //���ʱ���Ⱦɫ��
//ΪȾɫ�����ռ�
void Allocate();
void Allocate2();
void freepointer();
//Ⱦɫ���һϵ�в���
void GetGreatGene();                          //�����û���
int decode(int* NormalGeneChain);             //����
int Gene_initialize();                        //��ʼ����Ⱥ
//ѡ���㷨
void Roulette();                              //���̶�
void Championships();                         //������
//�����������
int addChro();                                //����Ⱦɫ��
int evolve(int re);                                 //����
int cross(int flag);                          //�ӽ�
int mcross(int flag);
int mcross2(int a,int b,int flag);
int mutate2(int flag);
int mutate(int flag);                         //����
int check(int *a,int recent);                 //һ����⺯������������
int dfs1(int flag,int step);                  //������������ȫ����
int dfs2(int flag,int step);
int dfs3(int flag,int step);
void freethem();                              //�ͷ�ָ��
//�������
struct Result{
	int start;
	int stop;
	int times;
	int tool;
	struct Result* next;

};                                            //�����洢�Ľṹ��
void OutPut(int* NormalGeneChain);            //�������
void Freestruct(struct Result* rr);           //�ͷ�ָ��
//��������
void Fitness();                     //��Ӧ�Ⱥ���
int Max(int a,int b);               //�Ƚϴ�С
int input();                        //���뺯��
int input2();
void Table(int* NormalGeneChain);   //���
#endif // JOBHEAD_H_INCLUDED
