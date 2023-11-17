#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	//0을써서 정의안하면 오류나게 강제함, 인터페이스가 없어서
	virtual void BefinPlay() ;
	virtual void Tick() ;
	virtual void Render() ;


};

