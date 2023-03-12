const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_BULBASAUR]  = {{EVO_LEVEL, 16, SPECIES_IVYSAUR}},
    [SPECIES_IVYSAUR]    = {{EVO_LEVEL, 32, SPECIES_VENUSAUR},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_BULBASAUR}},
    [SPECIES_VENUSAUR]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_IVYSAUR}},
    [SPECIES_CHARMANDER] = {{EVO_LEVEL, 16, SPECIES_CHARMELEON}},
    [SPECIES_CHARMELEON] = {{EVO_LEVEL, 36, SPECIES_CHARIZARD},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CHARMANDER}},
    [SPECIES_CHARIZARD]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CHARMELEON}},
    [SPECIES_SQUIRTLE]   = {{EVO_LEVEL, 16, SPECIES_WARTORTLE}},
    [SPECIES_WARTORTLE]  = {{EVO_LEVEL, 36, SPECIES_BLASTOISE}},
    [SPECIES_CATERPIE]   = {{EVO_LEVEL,  7, SPECIES_METAPOD}},
    [SPECIES_METAPOD]    = {{EVO_LEVEL, 10, SPECIES_BUTTERFREE},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CATERPIE}},
    [SPECIES_BUTTERFREE] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_METAPOD}},
    [SPECIES_WEEDLE]     = {{EVO_LEVEL,  7, SPECIES_KAKUNA}},
    [SPECIES_KAKUNA]     = {{EVO_LEVEL, 10, SPECIES_BEEDRILL},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WEEDLE}},
    [SPECIES_BEEDRILL]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_KAKUNA}},
    [SPECIES_PIDGEY]     = {{EVO_LEVEL, 18, SPECIES_PIDGEOTTO}},
    [SPECIES_PIDGEOTTO]  = {{EVO_LEVEL, 36, SPECIES_PIDGEOT},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PIDGEY}},
    [SPECIES_PIDGEOT]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PIDGEOTTO}},
    [SPECIES_RATTATA]    = {{EVO_LEVEL, 20, SPECIES_RATICATE}},
    [SPECIES_RATICATE]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_RATTATA}},
    [SPECIES_SPEAROW]    = {{EVO_LEVEL, 20, SPECIES_FEAROW}},
    [SPECIES_FEAROW]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SPEAROW}},
    [SPECIES_EKANS]      = {{EVO_LEVEL, 22, SPECIES_ARBOK}},
    [SPECIES_ARBOK]      = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_EKANS}},
    [SPECIES_PIKACHU]    = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PICHU}},
    [SPECIES_RAICHU]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PIKACHU}},
    [SPECIES_SANDSHREW]  = {{EVO_LEVEL, 22, SPECIES_SANDSLASH}},
    [SPECIES_SANDSLASH]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SANDSHREW}},
    [SPECIES_NIDORAN_F]  = {{EVO_LEVEL, 16, SPECIES_NIDORINA}},
    [SPECIES_NIDORINA]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NIDORAN_F}},
    [SPECIES_NIDOQUEEN]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NIDORINA}},
    [SPECIES_NIDORAN_M]  = {{EVO_LEVEL, 16, SPECIES_NIDORINO}},
    [SPECIES_NIDORINO]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NIDORAN_M}},
    [SPECIES_NIDOKING]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NIDORINO}},
    [SPECIES_CLEFAIRY]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CLEFFA}},
    [SPECIES_CLEFABLE]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CLEFAIRY}},
    [SPECIES_VULPIX]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_NINETALES]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_VULPIX}},
    [SPECIES_JIGGLYPUFF] = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_IGGLYBUFF}},
    [SPECIES_WIGGLYTUFF] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_JIGGLYPUFF}},
    [SPECIES_ZUBAT]      = {{EVO_LEVEL, 22, SPECIES_GOLBAT}},
    [SPECIES_GOLBAT]     = {{EVO_FRIENDSHIP, 0, SPECIES_CROBAT},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ZUBAT}},
    [SPECIES_CROBAT]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GOLBAT}},
    [SPECIES_ODDISH]     = {{EVO_LEVEL, 21, SPECIES_GLOOM}},
    [SPECIES_GLOOM]      = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ODDISH}},
    [SPECIES_VILEPLUME]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GLOOM}},
    [SPECIES_PARAS]      = {{EVO_LEVEL, 24, SPECIES_PARASECT}},
    [SPECIES_PARASECT]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PARAS}},
    [SPECIES_VENONAT]    = {{EVO_LEVEL, 31, SPECIES_VENOMOTH}},
    [SPECIES_VENOMOTH]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_VENONAT}},
    [SPECIES_DIGLETT]    = {{EVO_LEVEL, 26, SPECIES_DUGTRIO}},
    [SPECIES_DUGTRIO]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_DIGLETT}},
    [SPECIES_MEOWTH]     = {{EVO_LEVEL, 28, SPECIES_PERSIAN}},
    [SPECIES_PERSIAN]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MEOWTH}},
    [SPECIES_PSYDUCK]    = {{EVO_LEVEL, 33, SPECIES_GOLDUCK}},
    [SPECIES_GOLDUCK]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PSYDUCK}},
    [SPECIES_MANKEY]     = {{EVO_LEVEL, 28, SPECIES_PRIMEAPE}},
    [SPECIES_PRIMEAPE]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MANKEY}},
    [SPECIES_GROWLITHE]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_ARCANINE]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GROWLITHE}},
    [SPECIES_POLIWAG]    = {{EVO_LEVEL, 25, SPECIES_POLIWHIRL}},
    [SPECIES_POLIWHIRL]  = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_POLIWAG}},
    [SPECIES_POLIWRATH]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_POLIWHIRL}},
    [SPECIES_POLITOED]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_POLIWHIRL}},
    [SPECIES_ABRA]       = {{EVO_LEVEL, 16, SPECIES_KADABRA}},
    [SPECIES_KADABRA]    = {{EVO_TRADE, 0, SPECIES_ALAKAZAM},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ABRA}},
    [SPECIES_ALAKAZAM]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_KADABRA}},
    [SPECIES_MACHOP]     = {{EVO_LEVEL, 28, SPECIES_MACHOKE}},
    [SPECIES_MACHOKE]    = {{EVO_TRADE, 0, SPECIES_MACHAMP},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MACHOP}},
    [SPECIES_MACHAMP]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MACHOKE}},
    [SPECIES_BELLSPROUT] = {{EVO_LEVEL, 21, SPECIES_WEEPINBELL}},
    [SPECIES_WEEPINBELL] = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}},
    [SPECIES_TENTACOOL]  = {{EVO_LEVEL, 30, SPECIES_TENTACRUEL}},
    [SPECIES_TENTACRUEL] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TENTACOOL}},
    [SPECIES_GEODUDE]    = {{EVO_LEVEL, 25, SPECIES_GRAVELER}},
    [SPECIES_GRAVELER]   = {{EVO_TRADE, 0, SPECIES_GOLEM},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GEODUDE}},
    [SPECIES_PONYTA]     = {{EVO_LEVEL, 40, SPECIES_RAPIDASH}},
    [SPECIES_RAPIDASH]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PONYTA}},
    [SPECIES_SLOWPOKE]   = {{EVO_LEVEL, 37, SPECIES_SLOWBRO},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}},
    [SPECIES_SLOWBRO]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SLOWPOKE}},
    [SPECIES_SLOWKING]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SLOWPOKE}},
    [SPECIES_MAGNEMITE]  = {{EVO_LEVEL, 30, SPECIES_MAGNETON}},
    [SPECIES_MAGNETON]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MAGNEMITE}},
    [SPECIES_DODUO]      = {{EVO_LEVEL, 31, SPECIES_DODRIO}},
    [SPECIES_DODRIO]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_DODUO}},
    [SPECIES_SEEL]       = {{EVO_LEVEL, 34, SPECIES_DEWGONG}},
    [SPECIES_DEWGONG]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SEEL}},
    [SPECIES_GRIMER]     = {{EVO_LEVEL, 38, SPECIES_MUK}},
    [SPECIES_MUK]        = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GRIMER}},
    [SPECIES_SHELLDER]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}},
    [SPECIES_CLOYSTER]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SHELLDER}},
    [SPECIES_GASTLY]     = {{EVO_LEVEL, 25, SPECIES_HAUNTER}},
    [SPECIES_HAUNTER]    = {{EVO_TRADE, 0, SPECIES_GENGAR},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GASTLY}},
    [SPECIES_GENGAR]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_HAUNTER}},
    [SPECIES_ONIX]       = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}},
    [SPECIES_STEELIX]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ONIX}},
    [SPECIES_DROWZEE]    = {{EVO_LEVEL, 26, SPECIES_HYPNO}},
    [SPECIES_HYPNO]      = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_DROWZEE}},
    [SPECIES_KRABBY]     = {{EVO_LEVEL, 28, SPECIES_KINGLER}},
    [SPECIES_KINGLER]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_KRABBY}},
    [SPECIES_VOLTORB]    = {{EVO_LEVEL, 30, SPECIES_ELECTRODE}},
    [SPECIES_ELECTRODE]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_VOLTORB}},
    [SPECIES_EXEGGCUTE]  = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR}},
    [SPECIES_EXEGGUTOR]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_EXEGGCUTE}},
    [SPECIES_CUBONE]     = {{EVO_LEVEL, 28, SPECIES_MAROWAK}},
    [SPECIES_MAROWAK]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CUBONE}},
    [SPECIES_KOFFING]    = {{EVO_LEVEL, 35, SPECIES_WEEZING}},
    [SPECIES_WEEZING]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_KOFFING}},
    [SPECIES_RHYHORN]    = {{EVO_LEVEL, 42, SPECIES_RHYDON}},
    [SPECIES_RHYDON]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_RHYHORN}},
    [SPECIES_CHANSEY]    = {{EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}},
    [SPECIES_BLISSEY]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CHANSEY}},
    [SPECIES_HORSEA]     = {{EVO_LEVEL, 32, SPECIES_SEADRA}},
    [SPECIES_SEADRA]     = {{EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_HORSEA}},
    [SPECIES_GOLDEEN]    = {{EVO_LEVEL, 33, SPECIES_SEAKING}},
    [SPECIES_SEAKING]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GOLDEEN}},
    [SPECIES_STARYU]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_STARMIE]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_STARYU}},
    [SPECIES_SCYTHER]    = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}},
    [SPECIES_SCIZOR]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SCYTHER}},
    [SPECIES_MAGIKARP]   = {{EVO_LEVEL, 20, SPECIES_GYARADOS}},
    [SPECIES_GYARADOS]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MAGIKARP}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                            {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                            {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON}},
    [SPECIES_JOLTEON]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_EEVEE}},
    [SPECIES_VAPOREON]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_EEVEE}},
    [SPECIES_FLAREON]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_EEVEE}},
    [SPECIES_ESPEON]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_EEVEE}},
    [SPECIES_UMBREON]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_EEVEE}},
    [SPECIES_PORYGON]    = {{EVO_TRADE_ITEM, ITEM_UP_GRADE, SPECIES_PORYGON2}},
    [SPECIES_PORYGON2]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PORYGON}},
    [SPECIES_OMANYTE]    = {{EVO_LEVEL, 40, SPECIES_OMASTAR}},
    [SPECIES_OMASTAR]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_OMANYTE}},
    [SPECIES_KABUTO]     = {{EVO_LEVEL, 40, SPECIES_KABUTOPS}},
    [SPECIES_KABUTOPS]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_KABUTO}},
    [SPECIES_DRATINI]    = {{EVO_LEVEL, 30, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]  = {{EVO_LEVEL, 55, SPECIES_DRAGONITE},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_DRATINI}},
    [SPECIES_DRAGONITE]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_DRAGONAIR}},
    [SPECIES_CHIKORITA]  = {{EVO_LEVEL, 16, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]    = {{EVO_LEVEL, 32, SPECIES_MEGANIUM},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CHIKORITA}},
    [SPECIES_MEGANIUM]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_BAYLEEF}},
    [SPECIES_CYNDAQUIL]  = {{EVO_LEVEL, 14, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]    = {{EVO_LEVEL, 36, SPECIES_TYPHLOSION},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CYNDAQUIL}},
    [SPECIES_TYPHLOSION] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_QUILAVA}},
    [SPECIES_TOTODILE]   = {{EVO_LEVEL, 18, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]   = {{EVO_LEVEL, 30, SPECIES_FERALIGATR},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TOTODILE}},
    [SPECIES_FERALIGATR] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CROCONAW}},
    [SPECIES_SENTRET]    = {{EVO_LEVEL, 15, SPECIES_FURRET}},
    [SPECIES_FURRET]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SENTRET}},
    [SPECIES_HOOTHOOT]   = {{EVO_LEVEL, 20, SPECIES_NOCTOWL}},
    [SPECIES_NOCTOWL]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_HOOTHOOT}},
    [SPECIES_LEDYBA]     = {{EVO_LEVEL, 18, SPECIES_LEDIAN}},
    [SPECIES_LEDIAN]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_LEDYBA}},
    [SPECIES_SPINARAK]   = {{EVO_LEVEL, 22, SPECIES_ARIADOS}},
    [SPECIES_ARIADOS]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SPINARAK}},
    [SPECIES_CHINCHOU]   = {{EVO_LEVEL, 27, SPECIES_LANTURN}},
    [SPECIES_LANTURN]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CHINCHOU}},
    [SPECIES_PICHU]      = {{EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}},
    [SPECIES_CLEFFA]     = {{EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}},
    [SPECIES_IGGLYBUFF]  = {{EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}},
    [SPECIES_TOGEPI]     = {{EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}},
    [SPECIES_TOGETIC]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TOGEPI}},
    [SPECIES_NATU]       = {{EVO_LEVEL, 25, SPECIES_XATU}},
    [SPECIES_XATU]       = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NATU}},
    [SPECIES_MAREEP]     = {{EVO_LEVEL, 15, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]    = {{EVO_LEVEL, 30, SPECIES_AMPHAROS},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MAREEP}},
    [SPECIES_AMPHAROS]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_FLAAFFY}},
    [SPECIES_MARILL]     = {{EVO_LEVEL, 18, SPECIES_AZUMARILL},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_AZURILL}},
    [SPECIES_AZUMARILL]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MARILL}},
    [SPECIES_HOPPIP]     = {{EVO_LEVEL, 18, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]   = {{EVO_LEVEL, 27, SPECIES_JUMPLUFF},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_HOPPIP}},
    [SPECIES_JUMPLUFF]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SKIPLOOM}},
    [SPECIES_SUNKERN]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}},
    [SPECIES_SUNFLORA]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SUNKERN}},
    [SPECIES_WOOPER]     = {{EVO_LEVEL, 20, SPECIES_QUAGSIRE}},
    [SPECIES_QUAGSIRE]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WOOPER}},
    [SPECIES_PINECO]     = {{EVO_LEVEL, 31, SPECIES_FORRETRESS}},
    [SPECIES_FORRETRESS] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PINECO}},
    [SPECIES_SNUBBULL]   = {{EVO_LEVEL, 23, SPECIES_GRANBULL}},
    [SPECIES_GRANBULL]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SNUBBULL}},
    [SPECIES_TEDDIURSA]  = {{EVO_LEVEL, 30, SPECIES_URSARING}},
    [SPECIES_URSARING]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TEDDIURSA}},
    [SPECIES_SLUGMA]     = {{EVO_LEVEL, 38, SPECIES_MAGCARGO}},
    [SPECIES_MAGCARGO]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SLUGMA}},
    [SPECIES_SWINUB]     = {{EVO_LEVEL, 33, SPECIES_PILOSWINE}},
    [SPECIES_PILOSWINE]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SWINUB}},
    [SPECIES_REMORAID]   = {{EVO_LEVEL, 25, SPECIES_OCTILLERY}},
    [SPECIES_OCTILLERY]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_REMORAID}},
    [SPECIES_HOUNDOUR]   = {{EVO_LEVEL, 24, SPECIES_HOUNDOOM}},
    [SPECIES_HOUNDOOM]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_HOUNDOUR}},
    [SPECIES_PHANPY]     = {{EVO_LEVEL, 25, SPECIES_DONPHAN}},
    [SPECIES_DONPHAN]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PHANPY}},
    [SPECIES_TYROGUE]    = {{EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                            {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                            {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}},
    [SPECIES_HITMONCHAN] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TYROGUE}},
    [SPECIES_HITMONLEE]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TYROGUE}},
    [SPECIES_HITMONTOP]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TYROGUE}},
    [SPECIES_SMOOCHUM]   = {{EVO_LEVEL, 30, SPECIES_JYNX}},
    [SPECIES_JYNX]       = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SMOOCHUM}},
    [SPECIES_ELEKID]     = {{EVO_LEVEL, 30, SPECIES_ELECTABUZZ}},
    [SPECIES_ELECTABUZZ] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ELEKID}},
    [SPECIES_MAGBY]      = {{EVO_LEVEL, 30, SPECIES_MAGMAR}},
    [SPECIES_MAGMAR]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MAGBY}},
    [SPECIES_LARVITAR]   = {{EVO_LEVEL, 30, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]    = {{EVO_LEVEL, 55, SPECIES_TYRANITAR},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_LARVITAR}},
    [SPECIES_TYRANITAR]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_PUPITAR}},
    [SPECIES_TREECKO]    = {{EVO_LEVEL, 16, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]    = {{EVO_LEVEL, 36, SPECIES_SCEPTILE},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TREECKO}},
    [SPECIES_SCEPTILE]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GROVYLE}},
    [SPECIES_TORCHIC]    = {{EVO_LEVEL, 16, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]  = {{EVO_LEVEL, 36, SPECIES_BLAZIKEN},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TORCHIC}},
    [SPECIES_BLAZIKEN]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_COMBUSKEN}},
    [SPECIES_MUDKIP]     = {{EVO_LEVEL, 16, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]  = {{EVO_LEVEL, 36, SPECIES_SWAMPERT},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MUDKIP}},
    [SPECIES_SWAMPERT]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MARSHTOMP}},
    [SPECIES_POOCHYENA]  = {{EVO_LEVEL, 18, SPECIES_MIGHTYENA}},
    [SPECIES_MIGHTYENA]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_POOCHYENA}},
    [SPECIES_ZIGZAGOON]  = {{EVO_LEVEL, 20, SPECIES_LINOONE}},
    [SPECIES_LINOONE]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ZIGZAGOON}},
    [SPECIES_WURMPLE]    = {{EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON},
                            {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}},
    [SPECIES_SILCOON]    = {{EVO_LEVEL, 10, SPECIES_BEAUTIFLY},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WURMPLE}},
    [SPECIES_BEAUTIFLY]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SILCOON}},
    [SPECIES_CASCOON]    = {{EVO_LEVEL, 10, SPECIES_DUSTOX},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WURMPLE}},
    [SPECIES_DUSTOX]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CASCOON}},
    [SPECIES_LOTAD]      = {{EVO_LEVEL, 14, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_LOTAD}},
    [SPECIES_LUDICOLO]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_LOMBRE}},
    [SPECIES_SEEDOT]     = {{EVO_LEVEL, 14, SPECIES_NUZLEAF}},
    [SPECIES_NUZLEAF]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SEEDOT}},
    [SPECIES_SHIFTRY]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NUZLEAF}},
    [SPECIES_NINCADA]    = {{EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK},
                            {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA}},
    [SPECIES_NINJASK]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NINCADA}},
    [SPECIES_SHEDINJA]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NINCADA}},
    [SPECIES_TAILLOW]    = {{EVO_LEVEL, 22, SPECIES_SWELLOW}},
    [SPECIES_SWELLOW]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TAILLOW}},
    [SPECIES_SHROOMISH]  = {{EVO_LEVEL, 23, SPECIES_BRELOOM}},
    [SPECIES_BRELOOM]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SHROOMISH}},
    [SPECIES_WINGULL]    = {{EVO_LEVEL, 25, SPECIES_PELIPPER}},
    [SPECIES_PELIPPER]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WINGULL}},
    [SPECIES_SURSKIT]    = {{EVO_LEVEL, 22, SPECIES_MASQUERAIN}},
    [SPECIES_MASQUERAIN] = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SURSKIT}},
    [SPECIES_WAILMER]    = {{EVO_LEVEL, 40, SPECIES_WAILORD}},
    [SPECIES_WAILORD]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WAILMER}},
    [SPECIES_SKITTY]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_DELCATTY]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SKITTY}},
    [SPECIES_BALTOY]     = {{EVO_LEVEL, 36, SPECIES_CLAYDOL}},
    [SPECIES_CLAYDOL]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_BALTOY}},
    [SPECIES_BARBOACH]   = {{EVO_LEVEL, 30, SPECIES_WHISCASH}},
    [SPECIES_WHISCASH]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_BARBOACH}},
    [SPECIES_CORPHISH]   = {{EVO_LEVEL, 30, SPECIES_CRAWDAUNT}},
    [SPECIES_CRAWDAUNT]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CORPHISH}},
    [SPECIES_FEEBAS]     = {{EVO_BEAUTY, 170, SPECIES_MILOTIC}},
    [SPECIES_MILOTIC]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_FEEBAS}},
    [SPECIES_CARVANHA]   = {{EVO_LEVEL, 30, SPECIES_SHARPEDO}},
    [SPECIES_SHARPEDO]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CARVANHA}},
    [SPECIES_TRAPINCH]   = {{EVO_LEVEL, 35, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]    = {{EVO_LEVEL, 45, SPECIES_FLYGON},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_TRAPINCH}},
    [SPECIES_FLYGON]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_VIBRAVA}},
    [SPECIES_MAKUHITA]   = {{EVO_LEVEL, 24, SPECIES_HARIYAMA}},
    [SPECIES_HARIYAMA]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MAKUHITA}},
    [SPECIES_ELECTRIKE]  = {{EVO_LEVEL, 26, SPECIES_MANECTRIC}},
    [SPECIES_MANECTRIC]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ELECTRIKE}},
    [SPECIES_NUMEL]      = {{EVO_LEVEL, 33, SPECIES_CAMERUPT}},
    [SPECIES_CAMERUPT]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_NUMEL}},
    [SPECIES_SPHEAL]     = {{EVO_LEVEL, 32, SPECIES_SEALEO}},
    [SPECIES_SEALEO]     = {{EVO_LEVEL, 44, SPECIES_WALREIN},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SPHEAL}},
    [SPECIES_WALREIN]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SEALEO}},
    [SPECIES_CACNEA]     = {{EVO_LEVEL, 32, SPECIES_CACTURNE}},
    [SPECIES_CACTURNE]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CACNEA}},
    [SPECIES_SNORUNT]    = {{EVO_LEVEL, 42, SPECIES_GLALIE}},
    [SPECIES_GLALIE]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SNORUNT}},
    [SPECIES_AZURILL]    = {{EVO_FRIENDSHIP, 0, SPECIES_MARILL}},
    [SPECIES_SPOINK]     = {{EVO_LEVEL, 32, SPECIES_GRUMPIG}},
    [SPECIES_GRUMPIG]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SPOINK}},
    [SPECIES_MEDITITE]   = {{EVO_LEVEL, 37, SPECIES_MEDICHAM}},
    [SPECIES_MEDICHAM]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_MEDITITE}},
    [SPECIES_SWABLU]     = {{EVO_LEVEL, 35, SPECIES_ALTARIA}},
    [SPECIES_ALTARIA]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SWABLU}},
    [SPECIES_WYNAUT]     = {{EVO_LEVEL, 15, SPECIES_WOBBUFFET}},
    [SPECIES_WOBBUFFET]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WYNAUT}},
    [SPECIES_DUSKULL]    = {{EVO_LEVEL, 37, SPECIES_DUSCLOPS}},
    [SPECIES_DUSCLOPS]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_DUSKULL}},
    [SPECIES_SLAKOTH]    = {{EVO_LEVEL, 18, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]   = {{EVO_LEVEL, 36, SPECIES_SLAKING},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SLAKOTH}},
    [SPECIES_SLAKING]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_VIGOROTH}},
    [SPECIES_GULPIN]     = {{EVO_LEVEL, 26, SPECIES_SWALOT}},
    [SPECIES_SWALOT]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_GULPIN}},
    [SPECIES_WHISMUR]    = {{EVO_LEVEL, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]    = {{EVO_LEVEL, 40, SPECIES_EXPLOUD},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_WHISMUR}},
    [SPECIES_EXPLOUD]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_LOUDRED}},
    [SPECIES_CLAMPERL]   = {{EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                            {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}},
    [SPECIES_HUNTAIL]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CLAMPERL}},
    [SPECIES_GOREBYSS]   = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_CLAMPERL}},
    [SPECIES_SHUPPET]    = {{EVO_LEVEL, 37, SPECIES_BANETTE}},
    [SPECIES_BANETTE]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SHUPPET}},
    [SPECIES_ARON]       = {{EVO_LEVEL, 32, SPECIES_LAIRON}},
    [SPECIES_LAIRON]     = {{EVO_LEVEL, 42, SPECIES_AGGRON},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ARON}},
    [SPECIES_AGGRON]     = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_LAIRON}},
    [SPECIES_LILEEP]     = {{EVO_LEVEL, 40, SPECIES_CRADILY}},
    [SPECIES_CRADILY]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_LILEEP}},
    [SPECIES_ANORITH]    = {{EVO_LEVEL, 40, SPECIES_ARMALDO}},
    [SPECIES_ARMALDO]    = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_ANORITH}},
    [SPECIES_RALTS]      = {{EVO_LEVEL, 20, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]     = {{EVO_LEVEL, 30, SPECIES_GARDEVOIR},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_RALTS}},
    [SPECIES_GARDEVOIR]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_KIRLIA}},
    [SPECIES_BAGON]      = {{EVO_LEVEL, 30, SPECIES_SHELGON}},
    [SPECIES_SHELGON]    = {{EVO_LEVEL, 50, SPECIES_SALAMENCE},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_BAGON}},
    [SPECIES_SALAMENCE]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_SHELGON}},
    [SPECIES_BELDUM]     = {{EVO_LEVEL, 20, SPECIES_METANG}},
    [SPECIES_METANG]     = {{EVO_LEVEL, 45, SPECIES_METAGROSS},
                            {EVO_ITEM, ITEM_DEVO_STONE, SPECIES_BELDUM}},
    [SPECIES_METAGROSS]  = {{EVO_ITEM, ITEM_DEVO_STONE, SPECIES_METANG}},
};
