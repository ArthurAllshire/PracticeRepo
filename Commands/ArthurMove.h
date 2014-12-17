#ifndef ARTHURMOVE
#define ARTHURMOVE

#include <WPILib.h>

class ArthurMove: public Command {
    public:
        ArthurMove();
        virtual void Initialize();
		virtual void Execute();
		virtual bool IsFinished();
		virtual void End();
		virtual void Interrupted();
    private:
        Victor* motor;
    
};

#endif
