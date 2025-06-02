#include "kato/log.hpp"
#include "link/zmq_link.hpp"

int main()
{
    ZMQLink link;
    link.setupLink();
    link.isListening.store(true);
    return 0;
}