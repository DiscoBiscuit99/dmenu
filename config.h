/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

 /* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Noto Sans Mono:size=15",
    "JoyPixels:pixelsize=15:antialias=true:autohint=true"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL; 
static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] =  { "#eeeeee", "#005577" },
	[SchemeOut] =  { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
//static unsigned int lines = 51;
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
