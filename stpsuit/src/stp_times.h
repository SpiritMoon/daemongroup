#ifndef _STP_TIMES_H__
#define _STP_TIMES_H__
/*����BPDU��������ֹ�ļ��㣬ÿ��configuration message��
* ������һ��message age��max age��message ageÿ����һ��
* ��������һ����message age>Maxageʱ������������
* һ�µ���Щֵ������root���á�
*/
typedef struct timevalues_t {
  unsigned short MessageAge;
  unsigned short MaxAge;
  unsigned short ForwardDelay;
  unsigned short HelloTime;
  unsigned char  RemainingHops;  /*mstp*/
  unsigned char  Reserved[3]; /*mstp*/
} TIMEVALUES_T;

int
stp_times_compare (IN TIMEVALUES_T* t1, IN TIMEVALUES_T* t2);

void
stp_times_get (IN BPDU_BODY_T* b, OUT TIMEVALUES_T* v);

void
stp_times_set (IN TIMEVALUES_T* v, OUT BPDU_BODY_T* b);

void
stp_times_copy (OUT TIMEVALUES_T* t, IN TIMEVALUES_T* f);

#endif /* _RSTP_TIMES_H__ */



