/////////////////////////////////////////////////////////////////////////////////////////////
//�ļ�����		CSearchPlan_RunBackward.cpp
//��  �ܣ�		�������������Ĺ滮
//�����ߣ�		��־ǿ
//��  �ڣ�		2022��10��16��
//��  �£�		2022��10��21��
//��  �ȣ�		40��
/////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"									//MFC��׼ͷ�ļ�
#include "CSearchPlan.h"							//���������Ĺ滮��ͷ�ļ�


//��  �ƣ�		RunBackward()
//��  �ܣ�		��������
//��  ����		��
//����ֵ��		��
void CSearchPlan::RunBackward()
{
	//����OPEN�б�
	vector<NODE> OPEN;
	//����CLOSEDӳ��
	map <CString, unsigned int> CLOSED;			
	//���������Tr
	map<unsigned int, EDGE> Tr;


	////////////////////////////////////////////////////////////////////////
	//����1����ʼ��
	//��ʼ��OPEN����	
	NODE node;
	node.state = m_GoalState;	//���״̬
	node.nDepth = 0;			//������
	node.nID = m_nStateID;		//���ID
	OPEN.push_back(node);


	///////////////////////////////////////////////////////////////////////
	//����2����ʼ������ֱ��OPEN��Ϊ��
	//while (OPEN.size() != 0)
	//{
		/**
		1	OPEN�б��һ��Ԫ�س��ӣ������б���ɾ��
		2	�����ǰ״̬�ǳ�ʼ״̬��ʹ��CSearchPlan::IsStateEqual:
		3		���ݵõ��滮��ʹ��CSearchPlan::BackTrack_Reverse����return
		4	���򣬼�������:
		5		�����ǰ״̬��CLOSEDӳ���в�����:
		6			����ǰ�����ӵ�CLOSED
		7			������ID��0��������
		8			չ�����״̬��OPEN��ʹ��CSearchPlan::Expand
		**/

		// TODO
	//}
}