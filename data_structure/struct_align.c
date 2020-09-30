/* align structure & get size of structure
*/

#include <stdio.h>

struct PacketHeader {
    char flags;
    int seq;
};

struct Packet {
    char flags1;
    int seq1;
} __attribute__((aligned(1), packed));

int main()
{
    struct PacketHeader header;

    printf("%ld\n", sizeof(header.flags));
    printf("%ld\n", sizeof(header.seq));
    printf("%ld\n", sizeof(header));
    printf("%ld\n", sizeof(struct PacketHeader));

    // total size of struct is 8 not 5.
    // because C align struct by the largest data type.
    // so, 1+3 4 = 8. the rest (3byte) is "padding"


    // now we align struct with more smaller byte

    struct Packet pac;

    printf("%ld\n", sizeof(pac.flags1));
    printf("%ld\n", sizeof(pac.seq1));
    printf("%ld\n", sizeof(pac));
    
 
    return 0;
}
