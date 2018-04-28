#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;
int mon1, mon2, d1, d2;
int h1, h2, min1, min2;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
void datecmp(void);
void timecmp(void);

int main(void)
{
	filestat1();
	filestat2();
	filetime1();
	filetime2();
	sizecmp();
	blockcmp();
	datecmp();
	timecmp();
}

//파일 1의 정보를 가져오는 함수 작성
void filestat1(void)
{
}

//파일 2의 정보를 가져오는 함수 작성
void filestat2(void)
{
}

//파일 1의 시간 정보를 가져오는 함수 작성
void filetime1(void)
{
}

//파일 2의 시간 정보를 가져오는 함수 작성
void filetime2(void)
{
}

//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(void)
{
}

//두 개의 파일 블락 수를 비교하는 함수 작성
void blockcmp(void)
{
}

//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(void)
{
    int result = 0;

    if(d1 < d2) result = 1;
    if(d1 > d2) result = 2;
    if(mon1 < mon2) result=1;
    if(mon1 > mon2) result=2;

    if(result ==0)
	printf("same time\n");
    else if(result==1)
	printf("text1 is early\n");
    else
	printf("text2 is early\n");
}

//두 개의 파일 수정 시간을 비교하는 함수 작성
void timecmp(void)
{
    int result = 0;

    if(min1 < min2) result = 1;
    if(min1 > min2) result = 2;
    if(h1 < h2) result=1;
    if(h1 > h2) result=2;

    if(result ==0)
	printf("same time\n");
    else if(result==1)
	printf("text1 is early\n");
    else
	printf("text2 is early\n");

}
