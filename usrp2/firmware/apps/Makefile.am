#
# Copyright 2007,2008 Free Software Foundation, Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

include $(top_srcdir)/Makefile.common

LDADD = ../lib/libu2fw.a

noinst_PROGRAMS = \
	blink_leds \
	blink_leds2 \
	buf_ram_test \
	can_i_sub \
	echo \
	eth_serdes \
	gen_eth_packets \
	hello \
	ibs_rx_test \
	ibs_tx_test \
	rcv_eth_packets \
	rx_only_v2 \
	read_dbids \
	set_hw_rev \
	test1 \
	test_db_spi \
	test_i2c \
	test_phy_comm \
	test_lsadc \
	test_lsdac \
	test_serdes \
	timer_test \
	tx_only_v2 \
	tx_standalone \
	txrx \
	serdes_txrx \
	sd_gentest \
	sd_bounce


# tx_drop_SOURCES = tx_drop.c app_common.c
# tx_drop_rate_limited_SOURCES = tx_drop_rate_limited.c app_common.c
# tx_drop2_SOURCES = tx_drop2.c app_common.c
rx_only_v2_SOURCES = rx_only_v2.c app_common_v2.c
tx_only_v2_SOURCES = tx_only_v2.c app_common_v2.c
txrx_SOURCES = txrx.c app_common_v2.c
eth_serdes_SOURCES = eth_serdes.c app_passthru_v2.c
serdes_txrx_SOURCES = serdes_txrx.c app_common_v2.c

noinst_HEADERS = \
        app_common_v2.h \
        app_passthru_v2.h