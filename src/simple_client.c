#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include <jack/jack.h>

jack_port_t *input_port;
jack_port_t *output_port;
jack_client_t *client;

int process (jack_nframes_t nframes, void *arg)
{
    jack_default_audio_sample_t *in, *out;

    in = jack_port_get_buffer (input_port, nframes);
    out = jack_port_get_buffer (output_port, nframes);
    memcpy (out, in,
        sizeof (jack_default_audio_sample_t) * nframes);

    return 0;      
}
