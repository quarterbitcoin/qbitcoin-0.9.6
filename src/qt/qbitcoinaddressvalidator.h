// Copyright (c) 2011-2014 The Qbitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef QBITCOINADDRESSVALIDATOR_H
#define QBITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class QbitcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit QbitcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Qbitcoin address widget validator, checks for a valid qbitcoin address.
 */
class QbitcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit QbitcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // QBITCOINADDRESSVALIDATOR_H
