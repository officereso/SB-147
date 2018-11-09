#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003,             K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, K018, K019, K020, K021, K022, K023, K024, K025, K026, K027, \
	K100, K101, K102, K103, K104,       K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, K117, K118, K119,       K121, K122, K123, K124, K125, K126, K127, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217, K218,             K221, K222, K223, K224, K225, K226, K227, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317, K318, K319,             K322,       K324, K325, K326, K327, \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, K416, K417,       K419,       K421, K422, K423, K424, K425, K426,       \
	K500, K501, K502, K503, K504,       K506, K507, K508, K509,       K511, K512,             K515, K516, K517,       K519,             K522,             K525, K526, K527  \
) { \
	{ K000,  K001,  K002,  K003,  KC_NO, KC_NO, K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017,  K018,  K019,  K020,  K021,  K022,  K023,  K024,  K025,  K026,  K027 }, \
	{ K100,  K101,  K102,  K103,  K104,  KC_NO, K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  K117,  K118,  K119,  KC_NO, K121,  K122,  K123,  K124,  K125,  K126,  K127 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  K217,  K218,  KC_NO, KC_NO, K221,  K222,  K223,  K224,  K225,  K226,  K227 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316,  K317,  K318,  K319,  KC_NO, KC_NO, K322,  KC_NO, K324,  K325,  K326,  K327 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416,  K417,  KC_NO, K419,  KC_NO, K421,  K422,  K423,  K424,  K425,  K426,  KC_NO}, \
	{ K500,  K501,  K502,  K503,  K504,  KC_NO, K506,  K507,  K508,  K509,  KC_NO, K511,  K512,  KC_NO, KC_NO, K515,  K516,  K517,  KC_NO, K519,  KC_NO, KC_NO, K522,  KC_NO, KC_NO, K525,  K526,  K527 }  \
}

#endif