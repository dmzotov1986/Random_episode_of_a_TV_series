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
	struct episode*caret=&episodes[4];
	int caret_step=2;
	int ahead=search_index-caret->index;
	if(ahead>=0){
		caret+=caret_step;//нужна оптимизация в коде?
		caret_step>>=1;
		if(!caret_step){
			
		}
	}
}
int main(){
	search_episode();
	return EXIT_SUCCESS;
}