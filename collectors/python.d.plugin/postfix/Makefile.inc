# SPDX-License-Identifier: GPL-3.0-or-later

# THIS IS NOT A COMPLETE Makefile
# IT IS INCLUDED BY ITS PARENT'S Makefile.am
# IT IS REQUIRED TO REFERENCE ALL FILES RELATIVE TO THE PARENT

# install these files
dist_python_DATA       += postfix/postfix.chart.py
dist_python_DATA       += postfix/postfix_j.chart.py
dist_python_DATA       += postfix/postfix_log.chart.py
dist_pythonconfig_DATA += postfix/postfix.conf
dist_pythonconfig_DATA += postfix/postfix_j.conf
dist_pythonconfig_DATA += postfix/postfix_log.conf

# do not install these files, but include them in the distribution
dist_noinst_DATA       += postfix/README.md postfix/Makefile.inc

