#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	//0���Ἥ ���Ǿ��ϸ� �������� ������, �������̽��� ���
	virtual void BefinPlay() ;
	virtual void Tick() ;
	virtual void Render() ;


};

