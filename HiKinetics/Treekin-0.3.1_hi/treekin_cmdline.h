/** @file treekin_cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.5
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef TREEKIN_CMDLINE_H
#define TREEKIN_CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "treekin_hi"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "treekin_hi"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "0.2"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int absorb_arg;	/**< @brief Make a state absorbing.  */
  char * absorb_orig;	/**< @brief Make a state absorbing original value given at command line.  */
  const char *absorb_help; /**< @brief Make a state absorbing help description.  */
  char * method_arg;	/**< @brief Select method to build transition matrix:
  H ==> use Hishapes
  A ==> Arrhenius-like kinetics
  F ==> Full process kinetics (whole subopt)
  I ==> use rates from barriers (default='H').  */
  char * method_orig;	/**< @brief Select method to build transition matrix:
  H ==> use Hishapes
  A ==> Arrhenius-like kinetics
  F ==> Full process kinetics (whole subopt)
  I ==> use rates from barriers original value given at command line.  */
  const char *method_help; /**< @brief Select method to build transition matrix:
  H ==> use Hishapes
  A ==> Arrhenius-like kinetics
  F ==> Full process kinetics (whole subopt)
  I ==> use rates from barriers help description.  */
  double t0_arg;	/**< @brief Start time.  */
  char * t0_orig;	/**< @brief Start time original value given at command line.  */
  const char *t0_help; /**< @brief Start time help description.  */
  double t8_arg;	/**< @brief Stop time.  */
  char * t8_orig;	/**< @brief Stop time original value given at command line.  */
  const char *t8_help; /**< @brief Stop time help description.  */
  double Temp_arg;	/**< @brief Temperatur in Celsius.  */
  char * Temp_orig;	/**< @brief Temperatur in Celsius original value given at command line.  */
  const char *Temp_help; /**< @brief Temperatur in Celsius help description.  */
  int nstates_arg;	/**< @brief Read <int> states.  */
  char * nstates_orig;	/**< @brief Read <int> states original value given at command line.  */
  const char *nstates_help; /**< @brief Read <int> states help description.  */
  char ** p0_arg;	/**< @brief Set initial population of state <int> to <double>
  Can be given multiple times
  (NOTE: sum of <double> must equal 1).  */
  char ** p0_orig;	/**< @brief Set initial population of state <int> to <double>
  Can be given multiple times
  (NOTE: sum of <double> must equal 1) original value given at command line.  */
  unsigned int p0_min; /**< @brief Set initial population of state <int> to <double>
  Can be given multiple times
  (NOTE: sum of <double> must equal 1)'s minimum occurreces */
  unsigned int p0_max; /**< @brief Set initial population of state <int> to <double>
  Can be given multiple times
  (NOTE: sum of <double> must equal 1)'s maximum occurreces */
  const char *p0_help; /**< @brief Set initial population of state <int> to <double>
  Can be given multiple times
  (NOTE: sum of <double> must equal 1) help description.  */
  double tinc_arg;	/**< @brief Time scaling factor (for log time-scale).  */
  char * tinc_orig;	/**< @brief Time scaling factor (for log time-scale) original value given at command line.  */
  const char *tinc_help; /**< @brief Time scaling factor (for log time-scale) help description.  */
  int degeneracy_flag;	/**< @brief Consider degeracy in transition rates (default=off).  */
  const char *degeneracy_help; /**< @brief Consider degeracy in transition rates help description.  */
  int exponent_flag;	/**< @brief Use matrix-expontent routines, NO diagonalization (default=off).  */
  const char *exponent_help; /**< @brief Use matrix-expontent routines, NO diagonalization help description.  */
  int umatrix_flag;	/**< @brief Dump transition matrix U to a binary file mx.bin (default=off).  */
  const char *umatrix_help; /**< @brief Dump transition matrix U to a binary file mx.bin help description.  */
  int mathematicamatrix_flag;	/**< @brief Dump transition matrix U to Mathematica-readable file mxMat.txt (default=off).  */
  const char *mathematicamatrix_help; /**< @brief Dump transition matrix U to Mathematica-readable file mxMat.txt help description.  */
  int bin_flag;	/**< @brief assume binary input (default=off).  */
  const char *bin_help; /**< @brief assume binary input help description.  */
  int fpt_flag;	/**< @brief calculate first passage times (default=off).  */
  const char *fpt_help; /**< @brief calculate first passage times help description.  */
  int recover_flag;	/**< @brief Recover from pre-calculated Eigenvalues and Eigenvectors (default=off).  */
  const char *recover_help; /**< @brief Recover from pre-calculated Eigenvalues and Eigenvectors help description.  */
  int wrecover_flag;	/**< @brief Write recovery file containing Eigenvalues and Eigenvectors (default=off).  */
  const char *wrecover_help; /**< @brief Write recovery file containing Eigenvalues and Eigenvectors help description.  */
  int info_flag;	/**< @brief show settings (default=off).  */
  const char *info_help; /**< @brief show settings help description.  */
  char * ratesfile_arg;	/**< @brief Name of the textfile containing the (barriers) rate matrix
  (NOTE: the rate matrix must have been print out with '%10.4g' per entry otherwise treekin will calculate crap.  */
  char * ratesfile_orig;	/**< @brief Name of the textfile containing the (barriers) rate matrix
  (NOTE: the rate matrix must have been print out with '%10.4g' per entry otherwise treekin will calculate crap original value given at command line.  */
  const char *ratesfile_help; /**< @brief Name of the textfile containing the (barriers) rate matrix
  (NOTE: the rate matrix must have been print out with '%10.4g' per entry otherwise treekin will calculate crap help description.  */
  int verbose_flag;	/**< @brief verbose output (default=off).  */
  const char *verbose_help; /**< @brief verbose output help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int absorb_given ;	/**< @brief Whether absorb was given.  */
  unsigned int method_given ;	/**< @brief Whether method was given.  */
  unsigned int t0_given ;	/**< @brief Whether t0 was given.  */
  unsigned int t8_given ;	/**< @brief Whether t8 was given.  */
  unsigned int Temp_given ;	/**< @brief Whether Temp was given.  */
  unsigned int nstates_given ;	/**< @brief Whether nstates was given.  */
  unsigned int p0_given ;	/**< @brief Whether p0 was given.  */
  unsigned int tinc_given ;	/**< @brief Whether tinc was given.  */
  unsigned int degeneracy_given ;	/**< @brief Whether degeneracy was given.  */
  unsigned int exponent_given ;	/**< @brief Whether exponent was given.  */
  unsigned int umatrix_given ;	/**< @brief Whether umatrix was given.  */
  unsigned int mathematicamatrix_given ;	/**< @brief Whether mathematicamatrix was given.  */
  unsigned int bin_given ;	/**< @brief Whether bin was given.  */
  unsigned int fpt_given ;	/**< @brief Whether fpt was given.  */
  unsigned int recover_given ;	/**< @brief Whether recover was given.  */
  unsigned int wrecover_given ;	/**< @brief Whether wrecover was given.  */
  unsigned int info_given ;	/**< @brief Whether info was given.  */
  unsigned int ratesfile_given ;	/**< @brief Whether ratesfile was given.  */
  unsigned int verbose_given ;	/**< @brief Whether verbose was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_method_values[];  /**< @brief Possible values for method. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TREEKIN_CMDLINE_H */
