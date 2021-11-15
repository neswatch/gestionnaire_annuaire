//
// Created by julie on 13/11/2021.
//

#ifndef SAE1_2_FIXEDSTRING_H
#define SAE1_2_FIXEDSTRING_H

typedef struct FixedString {
    char *chaine;
    int length;
} FSTRING;

FSTRING fsinit(const char *chaine);
void fsdelete(FSTRING chaine);

#endif //SAE1_2_FIXEDSTRING_H