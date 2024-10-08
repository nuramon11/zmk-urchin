
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │   │   │   │   │   │   │   │   │   │   │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ z │   │   │   │   │ ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ö │ ä │'#'│    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ y │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
 
#define DE_CIRC GRAVE// ^
#define DE_ss MINUS // ß 
#define DE_ACUT EQUAL // ´
#define DE_Z Y // z
#define DE_ue LBKT // ü
#define DE_PlUS RBKT // +
#define DE_oe SEMICOLON // ö
#define DE_ae QUOT // ä
#define DE_HASH NON_US_HASH // #
#define DE_LT NUBS // <
#define DE_Y Z // y
#define DE_COMMA COMMA// ,
#define DE_DOT PERIOD// .
#define DE_MINUS FSLH// - 

// Schift
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │   │"" │ § │   │   │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │ Z │   │   │   │   │ Ü │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ Ö │ Ä │'' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │ Y │   │   │   │   │   │   │';'│ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define DE_GRAD LS(GRAVE) // °
#define DE_EXCL LS(N1) // !
#define DE_DQT LS(N2) // ""
#define DE_PARAGR LS(N3) // §
#define DE_DLLR LS(N4) // $
#define DE_AMPS LS(N6) // &
#define DE_FSLH LS(N7) // /
#define DE_LPAR LS(N8) // (
#define DE_RPAR LS(N9) // )
#define DE_EQUAL LS(N0) // =
#define DE_QMARK LS(MINUS) // ?
#define DE_GRAVE LS(EQUAL) //  `
#define DE_STAR LS(RBKT) // *
#define DE_SQT LS(TILDE2)// ''
#define DE_GT LS(NUBS) // >
#define DE_SEMI LS(LT) // ';'
#define DE_COLON LS(GT) // :
#define DE_UNDER LS(FSLH) // _

// Rechts Alt
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define DE_LBRC RA(N7) // {
#define DE_RBRC RA(N0) // }
#define DE_LBKT RA(N8) // [
#define DE_RBKT RA(N9) // ]
#define DE_BSLH RA(MINUS) // '\'
#define DE_AT RA(Q) // @
#define DE_EURO RA(E) // €
#define DE_TILDE RA(RBKT) // ~
#define DE_PIPE RA(NUBS) // |
#define DE_MIKR RA(M) // µ
