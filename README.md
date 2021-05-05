# cxxplgr
**cxxplgr** is a text processor for texts in polytonic Greek.\
**CAUTION: this is a work in progress.**

## cxxplgrconv
```
$ echo ">anthr^opos" | cxxplgrconv
ἄνθρωπος
```

## cxxplgrcoll
```
$ cat alpha.txt | cxxplgrconv | cxxplgrcoll
Πάντες
ἄνθρωποι
τοῦ
εἰδέναι
ὀρέγονται
φύσει
σημεῖον
δ'
...
```
