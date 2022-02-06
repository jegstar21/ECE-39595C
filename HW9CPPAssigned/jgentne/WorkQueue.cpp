#include "WorkQueue.h"

WorkQueue::WorkQueue(){
    std::vector<std::shared_ptr<Command>> q = {};
}

std::shared_ptr<Command> WorkQueue::get(){
    static std::mutex mute;
    
    std::lock_guard <std::mutex> lock(mute);

    if(q.empty()) {
        return nullptr;
    }

    std::shared_ptr<Command> & tmp = q.front();

    q.erase(q.begin());

    return tmp;
}

void WorkQueue::put(std::shared_ptr<Command> var) {
    static std::mutex mute;

    std::lock_guard <std::mutex> lock(mute);

    q.push_back(var);
}