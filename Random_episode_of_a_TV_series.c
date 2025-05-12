#include<stdlib.h>
struct episode{//данные эпизода
	int index;//индекс эпизода
	int first;//номер первой серии эпизода
	int last;//номер последней серии эпизода
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
#define episode_table_count (sizeof episodes/sizeof episodes[0])
void search_episode(void){
	
}
int main(){
	printf("%f",1.0f/episode_table_count);
	return EXIT_SUCCESS;
}