#include "kato/log.hpp"
#include "link/serial_link.hpp"

int main()
{
    SerialLink link("/dev/ttyGS0", B115200, onError);
    return 0;
}