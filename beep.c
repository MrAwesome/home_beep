#include <fcntl.h>
#include <dev/isa/spkrio.h>
#include <sys/ioctl.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: beep frequency duration\n");
    return 1;
  }
  // Take command line arguments for frequency and duration:
  int frequency = atoi(argv[1]);
  int duration = atoi(argv[2]);
  int spkr;
  tone_t tone;
  tone.frequency=frequency;
  tone.duration=duration;
  spkr = open("/dev/speaker", O_WRONLY, 0);
  ioctl(spkr, SPKRTONE, &tone);
  return 0;
}
