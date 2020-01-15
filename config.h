/* See LICENSE file for copyright and license details. */
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeSel] = { "#000000", "#ffffff" },
	[SchemeNorm] = { "#000000", "#e8e8e8" /* "#004292" */ },

	[SchemeSelHighlight] = { "#c40000", "#ffffff" },
	[SchemeNormHighlight] = { "#c40000", "#e8e8e8" },
	//000099

	[SchemeOut] = { "#000000", "#ffffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
