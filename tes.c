#include <stdio.h>

typedef  struct  _Msg {
	char   name[8];
    int     dlen;
    char   data[ ];
} Msg; 
#define  HLen  ((size_t)(((Msg*)0)->data))
	void  proc1()
{
	Msg  *p_msg1 = (Msg*)malloc(HLen+8192);
	Msg  *p_msg2 = (Msg)malloc(HLen+1024);
	/*下面语句用于对上面两个Msg结构体进行初始化，请填写完整*/
    memset(p_msg1->name,0x0,8);
	p_msg1->dlen = 8192;
    memset(p_msg1->data, 0x0, [ ]);
	memset(p_msg2->name,0x0,8);
	p_msg2->dlen = [    ];
    memset(p_msg2->data, 0x0, [ ]);
}




