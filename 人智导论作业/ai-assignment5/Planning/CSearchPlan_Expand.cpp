/////////////////////////////////////////////////////////////////////////////////////////////
// �ļ�����		CSearchPlan_Expand.cpp
// ��  �ܣ�		չ����̽��
// �����ߣ�		��־ǿ
// ��  �ڣ�		2022��10��09��
// ��  �£�		2022��10��12��
// ��  �£�		2022��10��15��
// ��  �£�		2022��10��21��
// ��  �ȣ�		90��
/////////////////////////////////////////////////////////////////////////////////////////////
#include "CSearchPlan.h"  //���������Ĺ滮��ͷ�ļ�
#include "stdafx.h"       //MFC��׼ͷ�ļ�

// ��  �ƣ�		Expand()
// ��  �ܣ�		չ�����״̬
// ��  ����		��
// ����ֵ��		��
void CSearchPlan::Expand(NODE& curr_node, vector<NODE>& OPEN, map<CString, unsigned int>& CLOSED, map<unsigned int, EDGE>& Tr) {
    /**
    1	����(a)���еĿ��ܶ�������鶯���Ƿ���С�����ÿ����ǰ����:
    2		�������bPreCondSatisfied������ǰ�������Ƿ�����
    3		����(b)����ǰ������:
    4			��������Ƿ�����ڵ�ǰ״̬��ʹ��CSPSearchPlan::IsLiteralContained:
    5				������ֲ����������±���bPreCondSatisfiedֵ�����˳�����(b)
    6		�����ǰ������ǰ���������㣺
    7			������״̬
    8			��Ӷ���Ч��
    9			��ȡ���״̬����
    10			��������Ƿ��Ѿ�������CLOSED��
    11			���״̬�Ѿ����ֹ����Ҳ���OPEN���У�
    12				���ú�̽ڵ�
    13				����״̬/�ڵ�ID����
    14				����̽�����OPEN�б�
    15				����߲���ӱߵ�������
    **/
    /*for (ACTION& act : m_Actions) {
        bool satisfied = true;
        for (LITERAL& cond : act.precondition) {
            if (!IsLiteralContained(cond, curr_node.state)) {
                satisfied = false;
                break;
            }
        }
        if (satisfied) {
            STATE suc_state;
            EFFECT effect;
        }
    }*/
}