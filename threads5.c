// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
//#include <string>

class WorkerThread {
public:
	WorkerThread(std::string threadName) {
		m_threadName = threadName;
		m_error = 0;
		m_running = false;
	}

	~WorkerThread() {
		stop();
	}

	bool start() {
		m_running = true;
		m_error = pthread_create(&m_thread, NULL, _exec, (void *)this);
		if( m_error != 0 ) return false;
	}

	void stop() {
		m_running = false;
	}

	static void *_exec(void *instance) {

		WorkerThread *pThis = reinterpret_cast<WorkerThread *>(instance);
		bool exitRet=true;
		while( (exitRet = pThis->run()) && pThis->isRunning() ) {
			;
		}

		void *ret;
		ret = (void *)(exitRet?0:-1);
		pthread_exit(ret);

	}

	virtual bool run()=0;

	__inline useconds_t isRunning() { return m_running; }

private:

	std::string m_threadName;
	pthread_t m_thread;
	int m_error;
	bool m_running;

};

class ThreadHello : public WorkerThread
{
public:

ThreadHello(int num) : WorkerThread("ThreadHello")
{
	m_num = num;
}

bool run() {

	//Repare que aqui não temos while!
	printf("Thread num: %d\n", m_num);
	if( m_num == 0 ) return false;

	sleep(m_num);
	return true;
}

private:
	int m_num;
};

int main (int argc, char *argv[])
{

	ThreadHello t1(0);
	ThreadHello t2(1);
	ThreadHello t3(2);
	ThreadHello t4(3);
	ThreadHello t5(4);
	ThreadHello t6(5);

	printf("pressione qquer tecla para sair\n");

	t1.start();
	t2.start();
	t3.start();
	t4.start();
	t5.start();
	t6.start();
	getchar();
	t1.stop();
	t2.stop();

return 0;  }
