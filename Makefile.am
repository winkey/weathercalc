pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = weathercalc.pc

SUBDIRS = src \
	include 

weathercalcdocdir = ${prefix}/doc/weathercalc
EXTRA_DIST = $(weathercalcdoc_DATA)

# Copy all the spec files. Of cource, only one is actually used.
dist-hook:
	for specfile in *.spec; do \
		if test -f $$specfile; then \
			cp -p $$specfile $(distdir); \
		fi \
	done



