
#include "types.h"
#include "stat.h"
#include "user.h"

char *string = "alarm!\n";

void
periodic(void *data)
{
  printf(1, "%s", data);
}

int
main(int argc, char *argv[])
{
  volatile int i;

  printf(1, "alarmtest starting\n");
  alarm(10, periodic, (void *)string);
  for(i = 0; i < 25*500000; i++){
    if((i % 250000) == 0)
      write(2, ".", 1);
  }
  exit();
}
