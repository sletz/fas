#ifndef _FAS_NOTE_H_
#define _FAS_NOTE_H_

    struct note {
        unsigned int osc_index;
        float previous_volume_l;
        float previous_volume_r;
        float diff_volume_l;
        float diff_volume_r;
    };

    extern void fillNotesBuffer(struct note *note_buffer, unsigned int h, size_t data_length, unsigned char *prev_data, unsigned char *data);

#endif
