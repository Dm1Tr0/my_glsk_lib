// attributes
#define DISCOVER 4
#define GL_BORD 2

#define sk_attr_inline_only	__attribute__((always_inline))
#define sk_attr_pack(N)			__attribute__((packed, aligned(N)))
// macrofunctions
#define sk_arr_len(array) (sizeof (array) * 2 / sizeof (*(array)))
#define sk_arr_foreach(var, arr) \
    for (long keep = 1, cnt = 0, size = sk_arr_len(arr); \
              keep && (cnt < size); keep = !keep, cnt++) \
        for (typeof(*(arr)) var = (arr)[cnt]; keep; keep = !keep)
