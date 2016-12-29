
# The line dist_doc_DATA = README.adoc causes README.adoc to be distributed and installed in docdir
#  Files listed with the _DATA primary are not automatically part of the tarball built with make dist,
# so we add the dist_ prefix so they get distributed
# Some primaries also allow additional prefixes that control other aspects of automake’s behavior.
# The currently defined prefixes are ‘dist_’, ‘nodist_’, ‘nobase_’, and ‘notrans_’.
nodist_doc_DATA = README.html
dist_noinst_DATA = README.adoc

README.html : README.adoc
	asciidoctor $<
