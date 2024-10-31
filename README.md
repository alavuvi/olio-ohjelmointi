# Olio-ohjelmointi ja oliopohjainen suunnittelu -kurssin harjoitustehtävät
Harjoitukset löytyvät omista kansioistaan H1 jne.

## Harjoitus1 (cout, cin, funktio)
Kirjoita C++-sovellus, joka kysyy kaksi kokonaislukua (a ja b) ja tulostaa niiden summan ja osamäärän. Osamäärä tulostetaan kahdella desimaalilla.

### Vaihe1
Muokkaa main-funktiota seutaavasti:
Kysy luvut ja tallenna ne muuttujiin a ja b
käytä cin ja cout olioita

### Vaihe2
Lisää sovellukseen summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään.
jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
kutsu em. funktioita mainissa antamalla niille argumenttina muuttujat a ja b.

### Vaihe3
Lisää sovellukseen toiset summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
jos jakaja on nolla retDiv tulostaa virheilmoituksen ja palauttaa nollan
kutsu em. funktioita mainissa, niin että annat niille argumenttina muuttujat a ja b ja tulosta niiden palauttamat arvot.