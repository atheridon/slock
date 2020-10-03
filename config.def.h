/* user and group to drop privileges to */
static const char *user  = "atheridon";
static const char *group = "atheridon";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password to unlock"; 

/* text color */
static const char * text_color = "#ffff00";

/* font (slock -f to get list of available fonts) */
static const char * font_name = "-ibm-ibm plex mono semibold-semibold-r-normal--0-0-0-0-m-0-iso8859-5";

/* Enable blur */
#define BLUR

/* Set blur radius */
static const int blurRadius=10;

/* Enable Pixelation */
//#define PIXELATION

/* Set pixelation radius */
static const int pixelSize=0;
