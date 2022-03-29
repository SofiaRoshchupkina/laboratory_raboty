#pragma once


typedef struct Unit //������� �������
{
	int data = 0; //��������
	Unit* prev = 0; //��������� �� ��������� �������
} Unit;

class parentQueue {

private:
	Unit* last = 0; //��������� �� "�����" �������

protected:
	int size; //������ �������
	//Unit* get_last(); //���������� ������� ������ ����� �������
	//int get_size(); //���������� ������� ������ ������� �������

public:

	parentQueue(); //����������� ��� ����������
	~parentQueue(); //����������
	Unit* get_last(); //���������� ������� ������ ����� �������
	int pop(); //�������� �������� �������
	void push(int el); //���������� �������� �������
	void print(); //����� �� ������� �������
	void merge(parentQueue& Q1); //������� ���� ��������
	void copy(parentQueue& Q); //����������� �������
	bool isEmpty(); //�������� �� �������������

};

