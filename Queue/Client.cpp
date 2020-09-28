#include <iostream>
#include <string>
#include <vector>
#include "Queue.h"

using namespace std;


int main()
{

    cin.tie(0);

    cin.sync_with_stdio(0);

    Queue que;
    string order = "";
    int num = 0;
    int num2 = 0;



    cin >> num;



    for (int i = 0; i < num; i++)
    {
        cin >> order;

        if (order == "push")
        {
            cin >> num2;
            que.push(num2);
        }

        else if (order == "front")
            que.front();

        else if (order == "back")
            que.back();

        else if (order == "size")
            que.size();

        else if (order == "empty")
            que.empty();

        else if (order == "pop")
            que.pop();



    }



    return 0;
}
