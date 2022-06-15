#ifndef OBRERO_H
#define OBRERO_H

#include <QObject>

enum class TipoJornada
{
    Matituna,
    Vespertina,
    Nocturna
};

class obrero : public QObject
{
    Q_OBJECT
public:
    explicit obrero(QObject *parent = nullptr);
    obrero(const QString &nombre, int horas, TipoJornada jornada);

    const QString &nombre() const;
    void setNombre(const QString &newNombre);
    int horas() const;
    void setHoras(int newHoras);
    TipoJornada jornada() const;
    void setJornada(TipoJornada newJornada);
    double salarioBruto() const;
    void setSalarioBruto(double newSalarioBruto);
    double salarioNeto() const;
    void setSalarioNeto(double newSalarioNeto);
    double descuento() const;
    void setDescuento(double newDescuento);
    QString toString();

signals:
private:
    QString jornada2String();
    QString m_nombre;
    int m_horas;
    TipoJornada m_jornada;
    double m_salarioBruto;
    double m_salarioNeto;
    double m_descuento;
};

#endif // OBRERO_H
