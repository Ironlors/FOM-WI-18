---
title: "Notizen zur Lesung"
abstract: "Hier finden sich sämtliche Notizen, welche ich während der Lesung gemacht habe, sowie Lösungen zu den Übungen."
author: Kay Kleinvogel
---

# Quantitative Methoden der Wirtschaftsinformatik
Dieses Notebook dient als Notizbuch für die Vorlesung. Sämtliche Programmierungen (Graphen) werden hier erstellt sowie einige der Notizen.

## Glücksrad
Hier betrachten wir die Wahrscheinlichkeiten bei einem Glücksrad.
Für das Glücksrad gelten folgende Annahmen:

* besteht aus 8 Felder
* es darf 2 mal gedreht werden
* das höhere Ergebniss wird gewertet

## Spezielle diskrete Verteilungen
### Binominalverteilung

#### Übungen
**Aufgabe 9**

Annahmen: 75% Der Schüler mögen Mathe, es werden 10 gewählt.

* a) Wie hoch ist die Wahrscheinlichkeite, dass:
  * 1q. genau 6 Studenten das Fach Mathe mögen
  * 2. mind 2 Studenten das Fach Mathe mögen
  * 3. höchstens 9 Studenten das Fache Mathe nicht mögen
  * 4. mehr als 3 aber weniger als 8 Studenten das Fach Mathe mögen.

Modell: $X \sim  Bin \left(10 ; 0,75\right)$

**1.**
$P\left(x=6\right)=\left(\frac{10}{6}\right)*{0,75}^{x}*{\left(1-0,75\right)}^{10-6}=0,146$

### Poisson Verteilung
Die Poisson Verteilung modelliert seltene Ereignisse (z.B. Naturkatastropen).

Man geht davon aus, dass im Mittel die Rate $\lambda$ ist. ($\lambda$=Anzahl von Autodiebstählen pro Jahr).

**Model:** $x \sim Poi\left(\lambda\right)$

* X beschreibt die Anzahl der Einbrüche
* $\lambda$ = Mittelwert

**Beispiel:**
Es werden im Schnitt 6 Einbrüche gemeldet.

1. Wie hoch ist die Wahrscheinlichkeit, dass genau 4 Einbrüche gemeldet werden?

* $x \sim Poi\left(\lambda\right)$
* $x \sim 0,0446$

2. min. 2 Einbrüche gemeldet werden?

* P(X $\geq$ 2) = 1-P(X $\leq$ 1)
* P(X $\geq$ 2) = 0,9826

3. mehr als 3 aber weniger als 8 Einbrüche gemeldet werden?

* P(3 < X < 8) = P(X $\leq$ 7) - P(X $\leq$ 3)

### Hypergeometrische Verteilung

* N Kugeln (Schwarz und Weiß)
* M schwarze Kugeln
* n Kugeln werden gezogen

Die Zufallsvariable beschreibt die Anzahl der gezogenen schwarzen Kugeln.

So gilt:
$$
P(X=k)=\frac{{M \choose n}*{N-M \choose n-k}}{{N \choose n}}
$$
Bsp.: Lotto

Gesucht ist die Wahrscheinlichkeit für 4 richtige.

* N = 49 (Gesamtmenge)
* M = 6 ("richtige" Kugeln)
* n = 6 (Kugeln werden gezogen)
* k = 4 (wie viele richtige wollen wir haben)

**Lösung:** $P(X=4)=\frac{{6 \choose 6}*{49-6 \choose 6-4}}{{49 \choose 6}}$

### stetige Zugallsvariablen

Eine Zufallsvariable ist stetig, wenn die Werte eine Teilmenge der reelen Achens darstellt. (d.h. Intervall)

Bemerkungen:

1. $P\left(X = x\right) = 0$
2. $P(X \leq x) = P(X < x)$ sowie $P(X \geq x) = P\left(X > x\right)$
3. $E(X)=\int\limits_{-\infty }^{\infty }{x\cdot f\left(x\right)dx}$  (Erwartungswert der Zufallsvariable)

## Normalverteilung
### Transformationssatz
$P\left(X \leq x\right) = \phi \frac{x-\mu}{\sigma}$

***Übung:*** Benzinverbrauch eines Autos.

* der durchschnittliche Verbrauch liegt bei 7,5L pro 100km
* Varianz liegt bei ${\sigma}^{2} = 2,25$

1. Wie groß ist die Chance, dass der Verbraucht höchstens 7,5L/100km ist?
2. Der Verbrauch genau 7,5 L/100Km ist?
3. Der Verbrauch höher als 5L/100Km ist?
4. Der Verbrauch zwischen 3 und 6 L/100Km liegt?

**Lösung zu 1.**

$$P \left(X\leq7,5\right) = \Phi \frac{7,5-7,5}{1,5} = \Phi\left(0\right)$$

$\Phi\left(0\right)=0,5$  &rightarrow; Die Chance liegt bei 50%.

**Lösung zu 2.**

Die Chance liegt bei 0%, da es sich hier um stetige Werte handelt und daher die Chance für einen bestimmten Wert bei 0% liegt.

**Lösung zu 3.**

$$P\left(X>5\right) = 1 - P\left(X\leq5\right) = 1-\Phi\frac{5-7,5}{1,5}$$
$$=1-\left(1-\Phi\frac{5}{3}\right)$$
$$={\Phi\frac{5}{3}=0,9525}$$

**Lösung zu 4.**

$$P\left(3\leq X \leq6\right)=P\left(X\leq6\right)-P\left(X\leq3\right)$$
$$=\Phi\frac{-1,5}{1,5} - \Phi\frac{0,5}{1,5}$$
$$=\Phi\left(-1\right)-\Phi\left(-3\right)$$
$$=0,1573$$

####Quantile
$$\alpha = P\left(X\leq q_\alpha\right)$$
$$\alpha = \Phi\left(\frac{q_\alpha-\mu}{\sigma}\right) = \Phi^{-1}\left(\frac{q_\alpha-\mu}{\sigma}\right)$$

***Formel für das Quantil:***
$$q_{\alpha}=\mu+\sigma\cdot\Phi^{-1}\left(\alpha\right)$$

**Beispiel:** 90% der Smarts verbrauchen höchstens wie viele Liter?

$$q_{0,9}=7,5+1,5\cdot\Phi^{-1}(0,9)$$
$$\approx9,422$$
*Lösung:* 90% der Smarts verbauchen höchstens 9,42 $\frac{L}{100 Km}$

#### Zentraler Grenzwertsatz
Sei $X_1,X_2,...,X_n$ eine Folge von i,i,d Zuffallsgößen mit Erwartungswert E(X) und Var(X). Dann gilt für den Mittelwert:
$\overline{X}=\frac{1}{n}\sum\limits_{i=1}^{n}{{x}_{i}}$, dass $\frac{\overline{X}-E\left(\overline{X}\right)}{\sqrt{Var\left(\overline{X}\right)}}\sim N\left(0,1\right)$

Kurz: Wenn der Stichprobenumfang groß genug ist, dann konvergiert alles gegen eine Normalverteilung.

# Kapitel 3: Schätzen

* Um die in Kapitel 2 vorgestellten Modelle der Wahrscheinlichkeitstheorie anwenden zu können, muss zuvor Kenntniss über die in ihnen enthaltenen Parameter vorhanden sein.
* Da die Parameter in der Regel unbekannt sind, muss man sie mit Hilfe von zufällig erhobenen Stichproben schätzen.

## 3.1 Punktschätzer
Sei $\theta$ ein unbekannter Parameter einer Grundgesamtheit (z.B: $\theta=\mu$).

Ein Schätzer $\hat{\theta}$ ist ein Verfahren, welches plausible Werte für den unbekannten Parameter liefert.

Diese können mit bestimmten mathematischen Methoden hergeleitet werden.

* Maximum Likelihood Mehtode
* Momentenmethode
* Kleinste Quadrat Methode

Manchmal sind diese Paramter auch intuitiv erkennbar.

*Bsp.*:

a) Seien $x_1,...,x_n$ Daten aus einer normalverteilten Grundgesamtheit mit EW $\mu$ und Varianz $\sigma^{2}$.

Dann ist Schätzer für den Erwartungswert $\mu$ gegeben durch den Mittelwert.
$$\hat{\mu}=\overline{x}=\frac{1}{n}\sum\limits_{i=1}^{n}{{x}_{i}}$$

Für einen Schätzer der Varianz $\sigma^{2}$ gegeben durch
$$\frac{1}{n-1}\sum\limits_{i=1}^{n}\left({{x}_{i}-\overline{x}}\right)^{2}$$
und für die Standardabweichung $s=\sqrt{s^{2}}$.

b) sei A ein interessantes Ereigniss und p die WK dass A eintrifft, dh p = P(A). Daten $x_1,...,x_n$ entstammen aus einer Normalverteilten Grundgesamtheit.
d.h.
$$
\left \{\frac{1 , falls\ A\ eintrifft}{0, sonst}
\right .
$$


Dann ist ein Schätzer für die WK p geg. durch die relative Häufigkeit.
$$\hat{p}=\frac{1}{n}\sum\limits_{i=1}^{n}{{x}_{i}}$$

**Übung:** Student ist pünktlich zur Lesung.

Datenreihe: `[0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0]`

$$\hat{p}=\frac{1}{18}\left(0+0+1+...+1\right)=\frac{1}{18}\cdot6=\frac{1}{3}$$

**Bemerkung:** Die Schätzer beruhen auf zufällig erhobenen Stichproben und sind somit selbst wieder Realisierungen eines Zufallsprozesses. Daher kann man auch hier die Methoden der Wahrscheinlichkeitstheorie anwenden.
Daraus lassen sich Gütekriterien für die Schätzer ableiten, um einen Schätzer bewerten zu können.

### Gütekriterien
#### 1. Erwartungstreue
> "Im Mittel trifft man den wahren unbekannten Wert."

**Rechenregeln**

* E(aX+b) = a*E(X)+b
* E(X+Y) = E(X)+E(Y)

Sei $\theta$ ein unbekannter Parameter und $\hat{\theta}$ ein Schätzer. Dann heißt $\hat{\theta}$ erwartungstreu, falls $E\left(\hat{\theta}\right)=\theta$.

**Beispiel:** die erwartete Körpergröße der FOM-Studenten soll geschätzt werden.
Folgende Schätzverfahren stehen zur Auswahl.

$$\hat{\mu_1}=\overline{x}$$
$$\hat{\mu_2}=\frac{1}{3}x_1+\frac{2}{3}x_n$$
$$\hat{\mu_3}=\frac{1}{2}x_1+\frac{1}{3}x_2$$

Welche Schätzer sind erwartungstreu?
$$E\left(\hat{\mu_2}\right) = E\left( \frac{1}{3}x_1 + \frac{2}{3}x_2 \right)$$
$$\frac{1}{3}E\left(x_1\right) + \frac{2}{3}E\left(X_2\right)=\frac{1}{3}\mu + \frac{2}{3}\mu=\mu$$
$\Rightarrow \hat{\mu_2}$ ist erwartungstreu.

$$E\left(\hat{\mu_3}\right) = E\left( \frac{1}{2}x_1 + \frac{1}{3}x_2 \right)$$
$$\frac{1}{3}E\left(X_1\right) + \frac{2}{3}E\left(X_2\right)=\frac{1}{2}\mu + \frac{2}{3}\mu=\frac{5}{6}\mu$$
$\Rightarrow \hat{\mu_3}$ ist **nicht** erwartungstreu.

#### 2. Konsistenz
> "Umso mehr ich messe, desto genauer wird der Schätzer."

Def: mit wachsenden Stichprobenumfang n wird der Schätzer genauer.
$$\mathop{lim}\limits_{n \rightarrow  \infty }\left (\hat{\theta }
\right )=\theta$$

#### 3. geringe Variabilität
> "Die Streuung sollte weniger werden, wenn wir eine große Stichprobe haben"

Hat man mehere erwartungstreue Schätzer zur Verfügung, so wählt man den mit der kleinsten Varianz.
**Rechenregeln**

* $Var\left(aX+b\right)=a^{2}*Var\left(X\right)$
* $Var\left(X+Y\right)=Var\left(X\right) + Var\left(Y\right)$ ,falls X und Y unabhängig sind

**Bsp.:**
$\hat{\mu_1}=\overline{x}$ , $\hat{\mu_2}=\frac{1}{3}x_1+\frac{2}{3}x_n$

$$Var\left(\hat{\mu_1}\right)=\frac{\sigma^{2}}{n}$$
$$Var\left(\hat{\mu_2}\right)=\frac{5}{9}\sigma^{2}$$
$Var\left(\hat{\mu_1}\right) < Var\left(\hat{\mu_2}\right) \Rightarrow \hat{\mu_1}$ ist der bessere Schätzer.

## 3.2 Konfidenzintervalle
Bereich, welcher plausible Werte für einen unbekannten Parameter angibt zu einer vorgegebenen Irrtumswahrscheinlichkeit bzw. eine bestimmten Konfidenz zwischen 1 bis $\alpha$.

### 1. Konfidenzintervall mit Erwartungswert
#### Fall 1
Seien $x_1,x_2,..x_n$ Daten einer normalverteilten Grundgesamtheit mit Erwartungswert $\mu$ und Varianz $\sigma^{2}$. Dabei gehen wir davon aus, dass die Varianz bekannt ist.

Dann ist ein $\left(1- \alpha\right) \cdot 100\%$ KI für den EW $\mu$ gegeben durch:
$$\left \lbrack\overline{x}-{z}_{1-\frac{\alpha }{2}}\cdot\frac{\sigma }{\sqrt{n}};\overline{x}+{z}_{1-\frac{\alpha }{2}}\cdot\frac{\sigma }{\sqrt{n}}\right \rbrack$$

**Übung**

Datenreihe: [6.7,6.2,5.9,6.3,6.8,7.0,6.7,6.6,6.1,6.8]

* $\hat{\mu} \approx 6.51$
* 95% KI für $\mu \Rightarrow \alpha=0,05$
  * n=10
  * $\sigma^{2}=0,49\Rightarrow \sigma=0,7$

$$\Phi^{-1}\left(0,975\right)=196$$
$$\Rightarrow 95\%\_ KI \left\lbrack6,51 - 1,96 *\frac{0,7}{\sqrt{10}} ; 6,51+1,96*\frac{0,7}{\sqrt{10}}\right\rbrack$$
$$\left \lbrack6,075 ; 6,9438\right]$$

#### Fall 2
Seien $x_1,x_2,..x_n$ Daten einer normalverteilten Grundgesamtheit mit Erwartungswert $\mu$ und Varianz $\sigma^{2}$. Dabei gehen wir davon aus, dass die Varianz bekannt ist.

Dabei sei $\sigma^{2}$ unbekannt und wird geschätzt durch:
$$ s^{2}=\frac{1}{n-1}\sum\limits_{i=1}^{n}\left({{x}_{i}-\overline{x}}\right)^{2}$$
Dann ist $\left(1-\alpha\right)\cdot 100\% KI$ für den EW gegeben durch
$$\left \lbrack\overline{x}-{t}_{n-1 , 1-\tfrac{\alpha }{2}}\cdot\tfrac{s}{\sqrt{n}},\overline{x}+{t}_{n-1 , 1-\tfrac{\alpha }{2}}\cdot\tfrac{s}{\sqrt{n}}\right \rbrack$$
wobei $s=\sqrt{s^{2}}$ und ${t}_{n-1 , 1-\tfrac{\alpha }{2}}$ ist das $a-\frac{\alpha}{2}$ Quantil der t-Verteilung mit (n-1) Freiheitsgrade.

#### Fall 3
Die Daten $x_1,x_2,..x_n$ stammen **nicht** aus einer normalverteilten Grundgesamtheit, aber der Stichprobenumfang n ist groß. ($n\geq50$)

Dann kann mit Hilfe des zentralen Grenzwertsatzes ein approximatives ($1-\alpha$) $\cdot$ 100\% Konfidenzintervall für den EW $\mu$ konstruiert werden:
$$\left \lbrack\overline{x}-{z}_{n-1 , 1-\tfrac{\alpha }{2}}\cdot\tfrac{s}{\sqrt{n}},\overline{x}+{z}_{n-1 , 1-\tfrac{\alpha }{2}}\cdot\tfrac{s}{\sqrt{n}}\right \rbrack$$

**Bemerkungen**

1. übliche Struktur eines Konfidenzintervalls [Schützer $\pm$ Quantil $\cdot$ Stardardfehler des Schätzer]
2. 95% - KI bedeutet nicht, dass das konstruierte Intervall den unbekannten Parameter zu 95% überdeckt, sondern wenn man 100 Intervalle für den Parameter konstruiert, so wird dieser in 95 von 100 Fällen überdeckt.
3. Länge des KI $L= 2\cdot{t}_{n-1 , 1-\tfrac{\alpha }{2}}\cdot\tfrac{s}{\sqrt{n}}$
    1. umso größer die Variabilität, desto größer die Länge
    2. umso größer n, desto kleiner die Länge
    3. umso größer $\alpha$, desto kleiner wir die Länge


##### Konfidenzintervalle für Wahrscheinlichkeiten
Sei A das interessierende Ereigniss und p die Wahrscheinlichkeit, dass A eintrifft, d.h. $p=P\left(A\right)$

Seien $x_1,...,x_n$ Realisierungen von binominalverteilten Zufallsvariablen.
Schätzer für $\hat{p}=\overline{x}$. Dann mit Hilfe des zentralen Grenzwertsatzes für große Stichprobenumfänge eine $\left(1-\alpha\right)\cdot 100\% KI$ gegeben durch:
$$\left \lbrack\hat{p}-{z}_{1-\frac{\alpha }{2}}\cdot\sqrt{\frac{\hat{p}\cdot(1-\hat{p})}{n}};\hat{p}+{z}_{1-\frac{\alpha }{2}}\cdot\sqrt{\frac{\hat{p}\cdot(1-\hat{p})}{n}}\right \rbrack$$
**Bemerkung**: Dieses Konfidenzintervall wird als *Wald-Typ* bezeichnen.

***Beispiel:*** Übung 3 Nr. 3

* A= Person lebt unter dem Existenzminimum
* p = P(A)
* n = 50
* $\hat{p}=\frac{1}{50}\cdot30=0,6$
* 95% KI $\Rightarrow \alpha=0,05$

*Lösung:* [0.4642 ; 0.7358]

Betrachtungen:

1. Der Stichprobenumfang ist sehr gering. Daher ist das Intervall sehr groß und bietet kaum Aufschluss über die eigentliche Problematik.
2. Pro: einfache Berechnung
3. Contra: bei kleinen Stichprobenumfang können plausible Werte entstehen die größer als 1 oder kleiner als 0 sind.
4. Abhängigkeit der Länge von $\hat{p}$
    1. schauen für welches $\hat{p}$ minimal / maximal ist

$$f\left(p\right)=p\left(1-p\right)=p-p^{2}$$
$${f\left(p\right)}^{\prime}=1-2p = 0 \Rightarrow p = \frac{1}{2}$$
$${f\left(p\right)}^{\prime\prime}=-2 < 0 \Rightarrow Max\ bei\ \frac{1}{2}$$


# Kapitel 4 Testen

* man möchte Aussagen über eine bestimmte Grundgesamtheit überprüfen
* Diese Vermutung äußert man in FOorm einer Hypothese

###### Testproblem
$H_0$ gegen $H_1$ (Nullhypothese gegen Alternative)

Da die Tests auf zufällig erhobenen Daten basieren, kann es zu Fehlentscheidungen kommen.

--- | $H_0$ stimmt  | $H_1$ stimmt
--|---|--
$H_0$ annehmen  | --- |  Fehler 2. Art
$H_0$ ablehnen  | Fehler 1. Art   |  ---

Da es nicht möglich ist die Wahrscheinlichkeit für beide Fehlerarten gleichzeitig zu minimieren, beschränkt man die Wahrscheinlichkeit für den Fehler 1. Art durch eine vorgegebene
Zahl $\alpha\in\left(0,1\right)$. Jeder Test, der diese Schranke einhält, wird als Signifikanztest zum Nuveau $\alpha$ bezeichnet. Kurz: Alpha-Test.
$$P\left(H_0\ ablehnen | H_0\ stimmt\right) \leq\alpha$$
$\alpha$ wird als als Signifikanzniveau bzw. als Irrtumswahrscheinlichkeit bezeichnet. Meistens wählt man $\alpha=0,05$ oder $\alpha=0,01$.

Sei $\theta$ der interessierende Parameter. Mit $\theta_0$ bezeichnen wir den hypothetischen Wert bzw. den Vergleichswert. Dann entstehen die folgenden Testprobleme.
$$H_0: \theta = \theta_0\ gegen\ H_1: \theta\ne\theta_0$$
$$H_0: \theta \leq \theta_0\ gegen\ H_1: \theta>\theta_0$$
$$H_0: \theta \geq \theta_0\ gegen\ H_1: \theta<\theta_0$$

**Merke**

* Das Gleichheitszeichen muss immer in der Nullhypothese ($H_0$).
* Was man aufzeigen möchte, steht bei einseitige Tests **immer** in der Alternative $H_1$, da diese statistisch gesichert werden kann.

**Übung:** Aufgabenblatt 4 Nr. 3

1. Die Stiftung "Ware im Test" mlchte beweisen, dass das Mindestgewicht von 200g beim Käse zu hoch ist und möchte die Verbraucher anhand einer Stichprobe warnen.
* $\mu$ - erwartetes Käsegewicht
* $\mu_0 = 200[g]$
*
$$H_0: \theta \geq \theta_0\ gegen\ H_1: \theta<\theta_0$$

2. Autohersteller möchte überprüfen, ob ein Bohrungsdurchmesser von 80mm eingehalten wird.
* $\mu$ - erwarteter Bohrungsdurchmesser in mm
* $\mu_0 = 80[mm]$
*
$$H_0: \theta = \theta_0\ gegen\ H_1: \theta\ne\theta_0$$

3. Ein Konkurrent will einen höheren Verbrauch als 1,5 L nachweisen.
* $\mu$ - erwarteter Verbrauch in L
* $\mu_0 = 1,5L$

$$H_0: \theta \leq \theta_0\ gegen\ H_1: \theta>\theta_0$$

###### Ablauf eines $\alpha$-Tests

1. Was für Daten liegen vor?
    1. Wie lautet der interessierte Parameter / Vergleichswert
2. Formulierung des Testproblems ($H_0\ und\ H_1$)
3. Aufstellung einer Prüfgröße, welche den Unterschied zwischen $H_0\ und\ H_1$ wiederspigelt
4. Die Prüfhypothese besitzt unter $H_0$ eine bestimmte Wahrscheinlichkeitsverteilung mit deren Hilfe sich sogenannte kritische Werte bestimmen lassen (Quantile)
5. Berechnung des Wertes der Prüfgröße (Wert der Teststatistik) und des kritischen Wertes, sowie den Vergleich der beiden $\Rightarrow$ Testentscheidung.
6. Interpretation des Ergebnisses (Antwortsatz)

##### Testen von Erwartungswerten
**1. Fall:**  Seien $x_1,x_2,..x_n$ Daten einer normalverteilten Grundgesamtheit mit Erwartungswert $\mu$ und Varianz $\sigma^{2}$. Dabei gehen wir davon aus, dass die Varianz bekannt ist.

Der interessierende Parameter ist der Erwartungswert $\mu$ und $\mu_0$ als Vergleichswert.

Prüfgröße: t = $\frac{\sqrt{n}\left(\overline{x}-\mu_0\right)}{\sigma}$

Kritischer Wert: Quantile von N(0,1)

$H_0$ wird abgelehnt, falls

* $H_0: \theta = \theta_0\ gegen\ H_1: \theta\ne\theta_0$, dann |t| > $z_{1-\frac{\alpha}{2}}$
* $H_0: \theta \leq \theta_0\ gegen\ H_1: \theta>\theta_0$, dann |t| > $z_{1-\alpha}$ |  \|t\| > $z_{1-\alpha}$
* $H_0: \theta \geq \theta_0\ gegen\ H_1: \theta<\theta_0$, dann |t| > $z_{1-\alpha}$ |  \|t\| > $-z_{1-\alpha}$

Wobei $z_{1-\frac{\alpha}{2}}$ = $\Phi^{-1}\left(1-\frac{\alpha}{2}\right)$ bzw. $z_{1-\alpha}$ = $\Phi^{-1}\left(1-\alpha\right)$


**Übung:** Seite 4 Nr. 2

* $\mu$ erwarteter Benzinverbrauch in L/100Km
* $\mu_0 = 6\ \frac{L}{100km}$
* $H_0: \theta \leq \theta_0\ gegen\ H_1: \theta>\theta_0$
* n = 10
* $\overline{x}=6,51$
* $\sigma^{2}=0,49\Rightarrow \sigma=0,7$

Prüfgröße: $t=\frac{{\sqrt{10}\left(6,51-6\right)}}{0,7}=2,3039$

Kritischer Wert: $z_{1-\alpha}=z_{0,95}=1,645$

Überprüfung: t = 2,304 > $z_{0,95} \Rightarrow H_0$ wird abgelehnt.

Interpretation: Es konnte statistisch gesichert werden, dass der Benzinverbrauch über 6 $\frac{L}{100Km}$ ist.

**2. Fall:**
Seien $x_1,x_2,..x_n$ Daten einer normalverteilten Grundgesamtheit mit Erwartungswert $\mu$ und unbekannter Varianz $\sigma^{2}$.

Prüfgröße: t = $\frac{\sqrt{n}\left(\overline{x}-\mu_0\right)}{s}$

Dies ist keine Realisierung einer Standardverteilung, sondern einer T-Verteilung mit (n-1)$\cdot$Freiheitsgraden. Deshalb sind die kritischen Werte auch die Quanitile der T-Verteilung mit (n-1)$\cdot$Freiheitsgraden.

* $H_0: \theta = \theta_0\ gegen\ H_1: \theta\ne\theta_0$, dann |t| > $t_{n-1,1-\frac{\alpha}{2}}$
* $H_0: \theta \leq \theta_0\ gegen\ H_1: \theta>\theta_0$, dann |t| > $t_{n-1,1-\alpha}$
* $H_0: \theta \geq \theta_0\ gegen\ H_1: \theta<\theta_0$, dann |t| > $-t_{n-1,1-\alpha}$


### Hier habe ich leider was verpasst. Das muss noch von anderen eingefügt werden (Lesung vom 15.04.2019)

#### Aufgabenblatt 4 Nr. 4
```python
target = 50
data = [49,46.5,50.2,47,45.5,48,48.3,47.5,48.7,48.5,46.6,52,47.4,48.3,45.5,46,51.7,51.2,49.9,48.7]

stats,p_value = scipy.stats.normaltest(data)
prit("stats: "+str(stats)) #stats: 0.8959059083213032
print("p_value: "+str(p_value)) #p_value: 0.6389347425460986
```
Da $H_0$ nicht abgelehnt werden kann (p>0,05) kann man die $H_0$ annehmen.
$\Rightarrow$ Die Daten sind normalverteilt
##### Test ob Pflanzen den optimalen Wassergehalt aufweisen
$\mu$ = erwarteter Wassergehalt der Pflanzen<br>
$\mu_0$ = 50g pro KG<br>
Testproblem:
$H_0: \theta = \theta_0\ gegen\ H_1: \theta\ne\theta_0$
```python
stats,p_value = scipy.stats.ttest_1samp(data,target)
print("stats: "+str(stats)) #stats: -3.875119337325857
print("p_value: "+str(p_value)) #p_value: 0.0010191046911934428
```
Da `p = 0.0010191046911934428` kleiner as $\alpha$ ist, so wird $H_0$ abgelehnt. Somit konnte statistisch gesichert werden, dass Pflanzen nicht den optimalen Wassergehalt aufweisen.

### Testen von Wahrscheinlichkeiten
Sei A das interessierende Ereigniss und p die Wahrscheinlichkeit, dass A eintrifft, d.h. $p = p\left(A\right)$.

Daten: ${x}_{1}=\left \{\frac{1,\ falls\ A\ eintrifft}{0,\ sonst}\right .$ enstammen aus einer Binominalverteilten Grundgesamtheit.

Prüfgröße: $t=\sum\limits_{i=0}^{n}{{x}_{i}}$
Krit. Wert: Quantile der Binominalverteilung

```python
p = scipy.stats.binom_test(18, n=40, p=0.35, alternative='greater')
print(p) #0.12385218601628106
```
Da $p>0.05$ wird $H_0$ angenommen.
Daher ist statistische bewiesen, dass die Kampagne nichts gebracht haben.

# Kapitel 5 Zusammenhangsanalyse
**Ziel:** Die Untersuchung ob zwischen 2 Größen ein Zusammenhang besteht.

Je nach Datentyp gibt es verschiedene Verfahren:
- Kategorische (nominale) Daten --> Kontigenzanalyse
- metrische Daten --> Korrelationsanalyse

## 5.1 Kontigenzanalyse
Die gemeinse Verteilung der kategorischen Merkmale wird in einer Kreuztabelle dargestellt.

Beispiel: Wahl des Verkehrsmittel und Geschlecht
- | ÖPNV  | Auto  | Fahrrad | Randhäufigkeit
        --|---|---|--- | --
Weiblich  | 40  | 20  | 15 | 75
Männlich  | 10  | 30  |  5 | 45
Randhäufigkeit| 50 | 50 | 20 | 120

Allgemein:
-  | $x_1$  | ...  | $x_k$  | -
--|---|---|--- | --
$y_1$  | $n_{11}$   | ...  | $n_{1k}$ | $n_{1.}$
...    | ...  | ...  | ... | ...
$y_m$  |$n_{m1}$   | ...  | $n_{mk}$ | $n_{m.}$
|  - | $n_{.1}$   | ...  | $n_{.k}$  | n

##### Berechnung der erwarteteten Häufigkeit:
Unter der Vorraussetzung der Unabhängigkeit gilt:
$$e_{ij}=\frac{n_{i.}\cdot n_{.j}}{n}$$

**Beispiel:**
- | ÖPNV  | Auto  | Fahrrad | Randhäufigkeit
        --|---|---|--- | --
Weiblich  | $31.25=\frac{50\cdot 75}{120}$ | $31.25=\frac{50\cdot 75}{120}$  | $12.5=\frac{20\cdot 75}{120}$  | 75
Männlich  | $18.75=\frac{50\cdot 45}{120}$ | $18.75=\frac{50\cdot 45}{120}$  | $7.5=\frac{20\cdot 45}{120}$ | 45
Randhäufigkeit| 50 | 50 | 20 | 120

Nun kann der erwartete Wert mit dem beobachteten Wert verglichen werden. Je höher die Differenz der beiden ist desto höher der Zusammenhang zwischen den beiden Eigenschaften und damit deren Abhängigkeit.

Ein Maß für diese Abweichung ist der ***Chi-Quadrat Koeffizient***.
$$\chi^{2}=\sum\limits_{i=1}^{k}{\sum\limits_{j=1}^{m}{\frac{\left ({n}_{ij}-{e}_{ij}
\right )^{2}}{{e}_{ij}}}}$$
$$=\sum{\tfrac{\left(beobachteter\ -\ erw.\ HK\right)^{2}}{erw.\ HK}}$$

Problematisch ist, dass dieser Wert nach oben offen ist. Daher muss $\chi^{2}$ noch normiert werden.
Daher gibt es den Kontigenzkoeffizienten $c$, welcher normiert ist.
$$c=\sqrt{\frac{\chi^{2}}{\chi^{2}+n}}$$
modifizierter Kontigenzkoeffizienten: $c^{*}=\sqrt{\frac{m^{*}}{m^{*}-1}}\cdot c$
Wobei $m^{*}=min\left(m,k\right)$
* m = Anzahl der Zeilen
* k = Anzahl der Spalten

**Beispiel:**
$$c=\sqrt{\frac{18.67}{18.67+120}}=0.367$$
$$m^{2}=2$$
$$c^{*}=\sqrt{\frac{2}{2-1}}\cdot 0.367 \approx 0.519 \Rightarrow\ mäßiger\ Zusammenhang$$
Für $c^{*}$ gelten folgende Richtlinien:
* $c^{*} < 0.3 \rightarrow$ kein Zusammenhang
* $0.3 \leq c^{2} \leq 0.6 \rightarrow$ mäßiger Zusammenhang
* $c^{*} > 0.6 \rightarrow$ starker Zusammenhang

##### Chi-Quadrat Unabhängigkeitstest
X ist eine Zufallsvariable, welche die Werte $x_1^{*}$ bis $x_k^{*}$ annimmt.
Y ist eine Zufallsvariable, welche die Werte $y_1^{*}$ bis $y_m^{*}$ annimmt.

$H_0 :$ X und Y sind unabhängig vs. $H_1 :$ X und Y sind abhängig

* Prüfgröße: $t=\chi^{2}$
* kritischer Wert: $\chi_{(m-1)\cdot(k-1),1-\alpha}^{2}$
* $H_0$ wird abgelehnt, falls $t > \chi_{(m-1)\cdot(k-1),1-\alpha}^{2}$ oder $p<\alpha$

**Beispiel:**

X ist eine ZV, welche das Geschlecht bezeichnet wobei:
* $x_1^{*}\ =\ männlich$
* $x_2^{*}\ =\ weiblich$

Y ist eine ZV, welche das bevorzugte Verkehrmittel beschreibt wobei:
* $y_1^{*}\ =\ ÖPNV$
* $y_1^{*}\ =\ Auto$
* $y_1^{*}\ =\ Fahrrad$

$\Rightarrow\ k=2,\ m=3$

Prüfgröße: $t=18.67$

Krit. Wert: $\alpha = 0,05\ ,\ m=3\ ,\ k=2$

$$\chi_{(3-1)\cdot(2-1),1-0.95}^{2}=\chi_{2,1-0.95}^{2}$$
$$=5,991$$
Daher konnte statistisch gesichert werden, dass es einen Zusammenhang zwischen Geschlecht und Wahl des Verkehrsmittels beteht.

## 5.2 Korrelationsanalyse
Untersucht ob es einen linearen Zusammenhang zwischen 2 metrischen Größen (quantitative Daten) ein linearer Zusammenhang besteht.

Unter der **Kovarianz** von 2 metrischen Merkmalen X und Y versteht man.

$$s_{xy}=\frac{1}{n}\cdot\sum\limits_{i=1}^{n}{\left ({x}_{i}-\overline{x}
\right )\cdot\left ({y}_{i}-\overline{y}
\right )}$$
Dieser Wert gibt die Stärke des linearen Zusammenhangs an. Er ist allerdings schwer zu interpretieren.

Daher nutzt man den **Korrelationskoeffizienten**.
Unter dem Korrelationskoeffizienten von 2 Merkmalen versteht man:
$$
{r}_{xy}=\frac{\sum\limits_{i=1}^{n}{\left ({x}_{i}-\overline{x}
\right )}\cdot \left ({y}_{i}-\overline{y}
\right )}{\sqrt{\sum\limits_{i=1}^{n}{{\left ({x}_{i}-\overline{x}
\right )}^{2}}}\cdot \sqrt{\sum\limits_{i=1}^{n}{{\left ({y}_{i}-\overline{y}
\right )}^{2}}}}
$$
