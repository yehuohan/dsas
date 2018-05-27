
#include "usestl.h"
#include <thread>
#include <mutex>
#include <conio.h>

int cnt = 0;
std::mutex mtx;

void func(int k)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(10));

    mtx.lock();
    PutContent("k: " << k << "  cnt: " << cnt << std::endl);
    mtx.unlock();
    cnt ++;
}


/*!
 * @brief �̴߳���
 *
 */
void thread_thread(void)
{
    PutTitle("\nThread thread begin.\n");

    std::thread* th[10];
    int k = 0;
    for (k = 0; k < 10; k ++)
    {
        th[k] = new std::thread(func, k);    // ��ֵ���ݲ���k
        //th[k]->join();        // ������ǰ�̣߳�ֱ�� *this ����ʶ���߳������ִ�С�
        th[k]->detach();        // �� thread �������ִ�е��̣߳�����ִ�ж����س�����
    }

    while (cnt < 10);

    PutTitle("\nThread thread end.\n");
}
