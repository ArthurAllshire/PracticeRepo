#include "ArthurMove.h"

ArthurMove::ArthurMove() {
    motor = new Victor(1);
}

ArthurMove::Initialize() {
    motor->Set(1);
}

ArthurMove::Execute() {
    motor->Set(1);
}

ArthurMove::IsFinished() {
    return false;
}

ArthurMove::Interrupted() {
    motor->Set(0);
}

