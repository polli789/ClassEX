#pragma once
class UWorld;
//���漱�� = ���߿� ��Ŭ��� �Ҷ� ã�ƺ�
//����� ��Ŭ��� �� ����

class SimpleEnginee
{
public:
	SimpleEnginee();
	virtual ~SimpleEnginee();

	//�����ʱ�ȭ �ν��Ͻ�����
	void Init();

	void Run();

	
	void Stop();

	void Term(); //����
	inline UWorld* GetWorld() const { return World; };

protected:
	UWorld* World;

	bool IsRunning
};

