#include <mutex>
#include <chrono>
#include <memory>
#include <vector>

#include "Command.h"

class WorkQueue {

private: 

    std::vector<std::shared_ptr<Command>> q;

public:

    WorkQueue();
    std::shared_ptr<Command> get();
    void put(std::shared_ptr<Command>);
};