// Copyright (c) 2011-2013 The Qbitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef QBITCOINUNITS_H
#define QBITCOINUNITS_H

#include <QAbstractListModel>
#include <QString>

/** Qbitcoin unit definitions. Encapsulates parsing and formatting
   and serves as list model for drop-down selection boxes.
*/
class QbitcoinUnits: public QAbstractListModel
{
    Q_OBJECT

public:
    explicit QbitcoinUnits(QObject *parent);

    /** Qbitcoin units.
      @note Source: https://en.qbitcoin.it/wiki/Units . Please add only sensible ones
     */
    enum Unit
    {
        QBTC,
        mQBTC,
        uQBTC
    };

    //! @name Static API
    //! Unit conversion and formatting
    ///@{

    //! Get list of units, for drop-down box
    static QList<Unit> availableUnits();
    //! Is unit ID valid?
    static bool valid(int unit);
    //! Short name
    static QString name(int unit);
    //! Longer description
    static QString description(int unit);
    //! Number of Satoshis (1e-8) per unit
    static qint64 factor(int unit);
    //! Max amount per unit
    static qint64 maxAmount(int unit);
    //! Number of amount digits (to represent max number of coins)
    static int amountDigits(int unit);
    //! Number of decimals left
    static int decimals(int unit);
    //! Format as string
    static QString format(int unit, qint64 amount, bool plussign=false);
    //! Format as string (with unit)
    static QString formatWithUnit(int unit, qint64 amount, bool plussign=false);
    //! Parse string to coin amount
    static bool parse(int unit, const QString &value, qint64 *val_out);
    ///@}

    //! @name AbstractListModel implementation
    //! List model for unit drop-down selection box.
    ///@{
    enum RoleIndex {
        /** Unit identifier */
        UnitRole = Qt::UserRole
    };
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    ///@}

private:
    QList<QbitcoinUnits::Unit> unitlist;
};
typedef QbitcoinUnits::Unit QbitcoinUnit;

#endif // QBITCOINUNITS_H
