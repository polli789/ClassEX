#pragma once
class UWorld;
//전방선언 = 나중에 인클루드 할때 찾아봐
//헤더엔 인클루드 잘 안함

class SimpleEnginee
{
public:
	SimpleEnginee();
	virtual ~SimpleEnginee();

	//엔진초기화 인스턴스개념
	void Init();

	void Run();

	
	void Stop();

	void Term(); //끌때
	inline UWorld* GetWorld() const { return World; };

protected:
	UWorld* World;

	bool IsRunning
};

