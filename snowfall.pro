# ******************************************************************************
#  snowfall.pro                                                      Tao project
# ******************************************************************************
# File Description:
#
#    Qt build file for the Snowfall module
#
#
#
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2011 Christophe de Dinechin <christophe@taodyne.com>
# (C) 2011 Taodyne SAS
# ******************************************************************************

MODINSTDIR = snowfall

include(../modules.pri)

OTHER_FILES = snowfall.xl \
    snowfall2.xl \

PICTURES = \
    images/snowflake.png \
    $$NULL

pics.path  = $$MODINSTPATH/images
pics.files = $$PICTURES

CRYPT_XL_SOURCES = snowfall2.xl
include(../crypt_xl.pri)

INSTALLS    += thismod_icon pics
INSTALLS    -= thismod_bin

HEADERS += \

LICENSE_FILES = snowfall.taokey.notsigned
include(../licenses.pri)

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
include(../modules_doc.pri)
