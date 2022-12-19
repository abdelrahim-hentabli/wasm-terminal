#define KEEPALIVE __attribute__((used))

static char string_buffer[2048];
static unsigned int  string_length = 0;

void KEEPALIVE string_start_js(void) {}
void KEEPALIVE string_final_js(void) {}

extern void string_start_cpp(void);
extern void string_final_cpp(void);
extern void string_fetch(char *pointer, int length);

int run_command(){
    return string_length;
}

char * KEEPALIVE string_ensure(unsigned int length) 
{ 
  // ensure that the buffer is long enough
  if (length <= string_length) return string_buffer;

  // remember
  string_length = length;

  // done
  return string_buffer;
}

int KEEPALIVE string_handle(unsigned int length)
{
  // sanity
  if (length > string_length) {return -1;}

  // terminate
  string_buffer[length] = 0;

  // work with the string characters, store/process it 

  return run_command();
}

void KEEPALIVE string_clear(void)
{

  // remember
  string_buffer[0] = 0;
  string_length = 0;
}