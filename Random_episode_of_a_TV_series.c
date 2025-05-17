#include<stdlib.h>
struct episode{//данные эпизода
	int index;//индекс эпизода
	int first;//номер первой серии эпизода
	int last;//номер последней серии эпизода. Надо поменять? Для пропущенных эпизодов одинаковой длительности (в количестве серий)
	char*name;//название сезона для эпизода
}episodes[]={//таблица для быстрого поиска данных по индексу эпизода
	{0,1,4,"1 сезон "},
	{1,5,5,"1 сезон "},
	{16,1,1,"2 сезон "},
	{40,1,1,"3 сезон "},
	{64,1,1,"4 сезон "},
	{84,1,2,"НОВОГОДНЕЕ ЧУДО "},
	{85,1,1,"5 сезон "},
	{105,1,1,"6 сезон "}
};
void search_episode(void){
	int search_index=54;
	struct episode*begin=episodes;
	struct episode*next=(&episodes)[1];
	printf("%u %u",((next-(struct episode*)0)+(begin-(struct episode*)0))/2+(struct episode*)0,&episodes[4]);
}
int main(){
	search_episode();
	return EXIT_SUCCESS;
}