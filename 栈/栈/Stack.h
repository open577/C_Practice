//∂®“Â
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
void STPrint(ST* pst);
void STInit(ST* pst);
void STPush(ST* pst, int x);
void STPop(ST*pst);
STDataType STTop(ST*ST);