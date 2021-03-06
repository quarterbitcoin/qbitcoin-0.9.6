include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = qbitcoin-qt
noinst_LIBRARIES = libqbitcoinqt.a
SUBDIRS = $(BUILD_TEST_QT)
DIST_SUBDIRS = test

# qbitcoin qt core #
QT_TS = \
  locale/qbitcoin_ach.ts \
  locale/qbitcoin_af_ZA.ts \
  locale/qbitcoin_ar.ts \
  locale/qbitcoin_be_BY.ts \
  locale/qbitcoin_bg.ts \
  locale/qbitcoin_bs.ts \
  locale/qbitcoin_ca_ES.ts \
  locale/qbitcoin_ca.ts \
  locale/qbitcoin_ca@valencia.ts \
  locale/qbitcoin_cmn.ts \
  locale/qbitcoin_cs.ts \
  locale/qbitcoin_cy.ts \
  locale/qbitcoin_da.ts \
  locale/qbitcoin_de_AT.ts \
  locale/qbitcoin_de.ts \
  locale/qbitcoin_el_GR.ts \
  locale/qbitcoin_en.ts \
  locale/qbitcoin_eo.ts \
  locale/qbitcoin_es_CL.ts \
  locale/qbitcoin_es_DO.ts \
  locale/qbitcoin_es_MX.ts \
  locale/qbitcoin_es.ts \
  locale/qbitcoin_es_UY.ts \
  locale/qbitcoin_et.ts \
  locale/qbitcoin_eu_ES.ts \
  locale/qbitcoin_fa_IR.ts \
  locale/qbitcoin_fa.ts \
  locale/qbitcoin_fi.ts \
  locale/qbitcoin_fr_CA.ts \
  locale/qbitcoin_fr.ts \
  locale/qbitcoin_gl.ts \
  locale/qbitcoin_gu_IN.ts \
  locale/qbitcoin_he.ts \
  locale/qbitcoin_hi_IN.ts \
  locale/qbitcoin_hr.ts \
  locale/qbitcoin_hu.ts \
  locale/qbitcoin_id_ID.ts \
  locale/qbitcoin_it.ts \
  locale/qbitcoin_ja.ts \
  locale/qbitcoin_ka.ts \
  locale/qbitcoin_kk_KZ.ts \
  locale/qbitcoin_ko_KR.ts \
  locale/qbitcoin_ky.ts \
  locale/qbitcoin_la.ts \
  locale/qbitcoin_lt.ts \
  locale/qbitcoin_lv_LV.ts \
  locale/qbitcoin_ms_MY.ts \
  locale/qbitcoin_nb.ts \
  locale/qbitcoin_nl.ts \
  locale/qbitcoin_pam.ts \
  locale/qbitcoin_pl.ts \
  locale/qbitcoin_pt_BR.ts \
  locale/qbitcoin_pt_PT.ts \
  locale/qbitcoin_ro_RO.ts \
  locale/qbitcoin_ru.ts \
  locale/qbitcoin_sah.ts \
  locale/qbitcoin_sk.ts \
  locale/qbitcoin_sl_SI.ts \
  locale/qbitcoin_sq.ts \
  locale/qbitcoin_sr.ts \
  locale/qbitcoin_sv.ts \
  locale/qbitcoin_th_TH.ts \
  locale/qbitcoin_tr.ts \
  locale/qbitcoin_uk.ts \
  locale/qbitcoin_ur_PK.ts \
  locale/qbitcoin_uz@Cyrl.ts \
  locale/qbitcoin_vi.ts \
  locale/qbitcoin_vi_VN.ts \
  locale/qbitcoin_zh_CN.ts \
  locale/qbitcoin_zh_HK.ts \
  locale/qbitcoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_qbitcoinaddressvalidator.cpp \
  moc_qbitcoinamountfield.cpp \
  moc_qbitcoingui.cpp \
  moc_qbitcoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

QBITCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  qbitcoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_qbitcoin.cpp
QT_QRC = qbitcoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

QBITCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  qbitcoinaddressvalidator.h \
  qbitcoinamountfield.h \
  qbitcoingui.h \
  qbitcoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/qbitcoin.ico \
  res/icons/qbitcoin.png \
  res/icons/qbitcoin_testnet.ico \
  res/icons/qbitcoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

QBITCOIN_QT_CPP = \
  qbitcoin.cpp \
  qbitcoinaddressvalidator.cpp \
  qbitcoinamountfield.cpp \
  qbitcoingui.cpp \
  qbitcoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  signverifymessagedialog.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp

if ENABLE_WALLET
QBITCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

QBITCOIN_RC = res/qbitcoin-qt-res.rc

libqbitcoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libqbitcoinqt_a_SOURCES = $(QBITCOIN_QT_CPP) $(QBITCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libqbitcoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libqbitcoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# qbitcoin-qt binary #
qbitcoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
qbitcoin_qt_SOURCES = qbitcoin.cpp
if TARGET_DARWIN
  qbitcoin_qt_SOURCES += $(QBITCOIN_MM)
endif
if TARGET_WINDOWS
  qbitcoin_qt_SOURCES += $(QBITCOIN_RC)
endif
qbitcoin_qt_LDADD = libqbitcoinqt.a $(LIBQBITCOIN_SERVER)
if ENABLE_WALLET
qbitcoin_qt_LDADD += $(LIBQBITCOIN_WALLET)
endif
qbitcoin_qt_LDADD += $(LIBQBITCOIN_CLI) $(LIBQBITCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
qbitcoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

qbitcoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/qbitcoinstrings.cpp

translate: qbitcoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(QBITCOIN_QT_CPP) $(QBITCOIN_QT_H) $(QBITCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/qbitcoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name qbitcoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -i.bak -e '/^\*\*.*Created:/d' $@ && rm $@.bak
	$(SED) -i.bak -e '/^\*\*.*by:/d' $@ && rm $@.bak

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
