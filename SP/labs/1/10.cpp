/*Да се напише програма во C++ која  прима три цели едноцифрени броеви од стандардниот влез, каде (a,b,c > 0 && a,b,c < 10). Вашата задача е да ги комбинирате овие броеви за да генерирате еден нов троцифрен број.
Напомена: Комбинирањето на броевите да се изврши математички. 
Дополнително: Дополнително, потребно е во нов ред да се испeчати разликата на секој од внесените броеви и генерираниот број.
Влез: 
5 8 2
Излез: 
582 
577 574 580 */
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d = a*100+b*10+c;
    int raz,raz1,raz2;
    raz = d - a;
    raz1 = d - b;
    raz2 = d - c;
    cout<<d<<endl;
    cout<<raz<<" "<<raz1<<" "<<raz2;
    return 0;
}
