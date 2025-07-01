/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh = 20;               /* add an defined amount of pixels to the bar height */

static const char *fonts[] = {
	"monospace:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bdae93", "#1C2021" },
	[SchemeSel] = { "#1C2021", "#bdae93" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeCursor] = { "#fff", "#DDC7A1"},
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * -vi option; if nonzero, vi mode is always enabled and can be
 * accessed with the global_esc keysym + mod mask
 */
static unsigned int vi_mode = 1;
static unsigned int start_mode = 0;			/* mode to use when -vi is passed. 0 = insert mode, 1 = normal mode */
static Key global_esc = { XK_n, Mod1Mask };	/* escape key when vi mode is not enabled explicitly */
static Key quit_keys[] = {
	/* keysym	modifier */
	{ XK_q,		0 }
};
