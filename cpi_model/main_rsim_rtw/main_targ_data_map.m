    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 224;
            section.data(224)  = dumData; %prealloc

                    ;% rtP.CombinedSlipWheelCPI_ALPMAX
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.CombinedSlipWheelCPI_ALPMIN
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.CombinedSlipWheelCPI_ASPECT_RAT
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.CombinedSlipWheelCPI_BOTTOM_OFF
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.CombinedSlipWheelCPI_BOTTOM_STI
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.CombinedSlipWheelCPI_BREFF
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.CombinedSlipWheelCPI_CAMMAX
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.CombinedSlipWheelCPI_CAMMIN
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.CombinedSlipWheelCPI_DREFF
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.CombinedSlipWheelCPI_FNOMIN
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.CombinedSlipWheelCPI_FREFF
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.CombinedSlipWheelCPI_FZMAX
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.CombinedSlipWheelCPI_FZMIN
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.CombinedSlipWheelCPI_KPUMAX
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.CombinedSlipWheelCPI_KPUMIN
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.CombinedSlipWheelCPI_LATERAL_ST
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.CombinedSlipWheelCPI_LONGITUDIN
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.CombinedSlipWheelCPI_LONGVL
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.CombinedSlipWheelCPI_NOMPRES
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.CombinedSlipWheelCPI_PCFX1
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.CombinedSlipWheelCPI_PCFX2
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.CombinedSlipWheelCPI_PCFX3
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.CombinedSlipWheelCPI_PCFY1
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.CombinedSlipWheelCPI_PCFY2
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.CombinedSlipWheelCPI_PCFY3
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.CombinedSlipWheelCPI_PCX1
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.CombinedSlipWheelCPI_PCY1
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.CombinedSlipWheelCPI_PDX1
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.CombinedSlipWheelCPI_PDX2
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.CombinedSlipWheelCPI_PDX3
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.CombinedSlipWheelCPI_PDXP1
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.CombinedSlipWheelCPI_PDXP2
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.CombinedSlipWheelCPI_PDXP3
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.CombinedSlipWheelCPI_PDY1
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.CombinedSlipWheelCPI_PDY2
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.CombinedSlipWheelCPI_PDY3
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.CombinedSlipWheelCPI_PDYP1
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.CombinedSlipWheelCPI_PDYP2
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.CombinedSlipWheelCPI_PDYP3
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.CombinedSlipWheelCPI_PDYP4
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.CombinedSlipWheelCPI_PECP1
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.CombinedSlipWheelCPI_PECP2
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.CombinedSlipWheelCPI_PEX1
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.CombinedSlipWheelCPI_PEX2
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.CombinedSlipWheelCPI_PEX3
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.CombinedSlipWheelCPI_PEX4
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.CombinedSlipWheelCPI_PEY1
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.CombinedSlipWheelCPI_PEY2
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.CombinedSlipWheelCPI_PEY3
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.CombinedSlipWheelCPI_PEY4
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.CombinedSlipWheelCPI_PEY5
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.CombinedSlipWheelCPI_PFZ1
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.CombinedSlipWheelCPI_PHX1
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.CombinedSlipWheelCPI_PHX2
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.CombinedSlipWheelCPI_PHY1
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.CombinedSlipWheelCPI_PHY2
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP.CombinedSlipWheelCPI_PHYP1
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.CombinedSlipWheelCPI_PHYP2
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.CombinedSlipWheelCPI_PHYP3
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.CombinedSlipWheelCPI_PHYP4
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.CombinedSlipWheelCPI_PKX1
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.CombinedSlipWheelCPI_PKX2
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.CombinedSlipWheelCPI_PKX3
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.CombinedSlipWheelCPI_PKY1
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP.CombinedSlipWheelCPI_PKY2
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.CombinedSlipWheelCPI_PKY3
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.CombinedSlipWheelCPI_PKY4
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.CombinedSlipWheelCPI_PKY5
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.CombinedSlipWheelCPI_PKY6
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.CombinedSlipWheelCPI_PKY7
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtP.CombinedSlipWheelCPI_PKYP1
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtP.CombinedSlipWheelCPI_PPMX1
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtP.CombinedSlipWheelCPI_PPX1
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtP.CombinedSlipWheelCPI_PPX2
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtP.CombinedSlipWheelCPI_PPX3
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtP.CombinedSlipWheelCPI_PPX4
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtP.CombinedSlipWheelCPI_PPY1
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtP.CombinedSlipWheelCPI_PPY2
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtP.CombinedSlipWheelCPI_PPY3
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtP.CombinedSlipWheelCPI_PPY4
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

                    ;% rtP.CombinedSlipWheelCPI_PPY5
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 80;

                    ;% rtP.CombinedSlipWheelCPI_PPZ1
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 81;

                    ;% rtP.CombinedSlipWheelCPI_PPZ2
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 82;

                    ;% rtP.CombinedSlipWheelCPI_PRESMAX
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 83;

                    ;% rtP.CombinedSlipWheelCPI_PRESMIN
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 84;

                    ;% rtP.CombinedSlipWheelCPI_PVX1
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 85;

                    ;% rtP.CombinedSlipWheelCPI_PVX2
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 86;

                    ;% rtP.CombinedSlipWheelCPI_PVY1
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 87;

                    ;% rtP.CombinedSlipWheelCPI_PVY2
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 88;

                    ;% rtP.CombinedSlipWheelCPI_PVY3
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 89;

                    ;% rtP.CombinedSlipWheelCPI_PVY4
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 90;

                    ;% rtP.CombinedSlipWheelCPI_QBRP1
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 91;

                    ;% rtP.CombinedSlipWheelCPI_QBZ1
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 92;

                    ;% rtP.CombinedSlipWheelCPI_QBZ10
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 93;

                    ;% rtP.CombinedSlipWheelCPI_QBZ2
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 94;

                    ;% rtP.CombinedSlipWheelCPI_QBZ3
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 95;

                    ;% rtP.CombinedSlipWheelCPI_QBZ4
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 96;

                    ;% rtP.CombinedSlipWheelCPI_QBZ5
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 97;

                    ;% rtP.CombinedSlipWheelCPI_QBZ6
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 98;

                    ;% rtP.CombinedSlipWheelCPI_QBZ9
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 99;

                    ;% rtP.CombinedSlipWheelCPI_QCRP1
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 100;

                    ;% rtP.CombinedSlipWheelCPI_QCRP2
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 101;

                    ;% rtP.CombinedSlipWheelCPI_QCZ1
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 102;

                    ;% rtP.CombinedSlipWheelCPI_QDRP1
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 103;

                    ;% rtP.CombinedSlipWheelCPI_QDRP2
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 104;

                    ;% rtP.CombinedSlipWheelCPI_QDTP1
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 105;

                    ;% rtP.CombinedSlipWheelCPI_QDZ1
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 106;

                    ;% rtP.CombinedSlipWheelCPI_QDZ10
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 107;

                    ;% rtP.CombinedSlipWheelCPI_QDZ11
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 108;

                    ;% rtP.CombinedSlipWheelCPI_QDZ2
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 109;

                    ;% rtP.CombinedSlipWheelCPI_QDZ3
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 110;

                    ;% rtP.CombinedSlipWheelCPI_QDZ4
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 111;

                    ;% rtP.CombinedSlipWheelCPI_QDZ6
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 112;

                    ;% rtP.CombinedSlipWheelCPI_QDZ7
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 113;

                    ;% rtP.CombinedSlipWheelCPI_QDZ8
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 114;

                    ;% rtP.CombinedSlipWheelCPI_QDZ9
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 115;

                    ;% rtP.CombinedSlipWheelCPI_QEZ1
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 116;

                    ;% rtP.CombinedSlipWheelCPI_QEZ2
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 117;

                    ;% rtP.CombinedSlipWheelCPI_QEZ3
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 118;

                    ;% rtP.CombinedSlipWheelCPI_QEZ4
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 119;

                    ;% rtP.CombinedSlipWheelCPI_QEZ5
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 120;

                    ;% rtP.CombinedSlipWheelCPI_QHZ1
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 121;

                    ;% rtP.CombinedSlipWheelCPI_QHZ2
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 122;

                    ;% rtP.CombinedSlipWheelCPI_QHZ3
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 123;

                    ;% rtP.CombinedSlipWheelCPI_QHZ4
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 124;

                    ;% rtP.CombinedSlipWheelCPI_QSX1
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 125;

                    ;% rtP.CombinedSlipWheelCPI_QSX10
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 126;

                    ;% rtP.CombinedSlipWheelCPI_QSX11
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 127;

                    ;% rtP.CombinedSlipWheelCPI_QSX12
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 128;

                    ;% rtP.CombinedSlipWheelCPI_QSX13
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 129;

                    ;% rtP.CombinedSlipWheelCPI_QSX14
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 130;

                    ;% rtP.CombinedSlipWheelCPI_QSX2
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 131;

                    ;% rtP.CombinedSlipWheelCPI_QSX3
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 132;

                    ;% rtP.CombinedSlipWheelCPI_QSX4
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 133;

                    ;% rtP.CombinedSlipWheelCPI_QSX5
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 134;

                    ;% rtP.CombinedSlipWheelCPI_QSX6
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 135;

                    ;% rtP.CombinedSlipWheelCPI_QSX7
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 136;

                    ;% rtP.CombinedSlipWheelCPI_QSX8
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 137;

                    ;% rtP.CombinedSlipWheelCPI_QSX9
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 138;

                    ;% rtP.CombinedSlipWheelCPI_QSY1
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 139;

                    ;% rtP.CombinedSlipWheelCPI_QSY2
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 140;

                    ;% rtP.CombinedSlipWheelCPI_QSY3
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 141;

                    ;% rtP.CombinedSlipWheelCPI_QSY4
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 142;

                    ;% rtP.CombinedSlipWheelCPI_QSY5
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 143;

                    ;% rtP.CombinedSlipWheelCPI_QSY6
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 144;

                    ;% rtP.CombinedSlipWheelCPI_QSY7
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 145;

                    ;% rtP.CombinedSlipWheelCPI_QSY8
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 146;

                    ;% rtP.CombinedSlipWheelCPI_Q_CAM1
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 147;

                    ;% rtP.CombinedSlipWheelCPI_Q_CAM2
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 148;

                    ;% rtP.CombinedSlipWheelCPI_Q_CAM3
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 149;

                    ;% rtP.CombinedSlipWheelCPI_Q_FCX
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 150;

                    ;% rtP.CombinedSlipWheelCPI_Q_FCY
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 151;

                    ;% rtP.CombinedSlipWheelCPI_Q_FCY2
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 152;

                    ;% rtP.CombinedSlipWheelCPI_Q_FYS1
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 153;

                    ;% rtP.CombinedSlipWheelCPI_Q_FYS2
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 154;

                    ;% rtP.CombinedSlipWheelCPI_Q_FYS3
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 155;

                    ;% rtP.CombinedSlipWheelCPI_Q_FZ1
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 156;

                    ;% rtP.CombinedSlipWheelCPI_Q_FZ2
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 157;

                    ;% rtP.CombinedSlipWheelCPI_Q_FZ3
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 158;

                    ;% rtP.CombinedSlipWheelCPI_Q_RA1
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 159;

                    ;% rtP.CombinedSlipWheelCPI_Q_RA2
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 160;

                    ;% rtP.CombinedSlipWheelCPI_Q_RB1
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 161;

                    ;% rtP.CombinedSlipWheelCPI_Q_RB2
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 162;

                    ;% rtP.CombinedSlipWheelCPI_Q_RE0
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 163;

                    ;% rtP.CombinedSlipWheelCPI_Q_V1
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 164;

                    ;% rtP.CombinedSlipWheelCPI_Q_V2
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 165;

                    ;% rtP.CombinedSlipWheelCPI_RBX1
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 166;

                    ;% rtP.CombinedSlipWheelCPI_RBX2
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 167;

                    ;% rtP.CombinedSlipWheelCPI_RBX3
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 168;

                    ;% rtP.CombinedSlipWheelCPI_RBY1
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 169;

                    ;% rtP.CombinedSlipWheelCPI_RBY2
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 170;

                    ;% rtP.CombinedSlipWheelCPI_RBY3
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 171;

                    ;% rtP.CombinedSlipWheelCPI_RBY4
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 172;

                    ;% rtP.CombinedSlipWheelCPI_RCX1
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 173;

                    ;% rtP.CombinedSlipWheelCPI_RCY1
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 174;

                    ;% rtP.CombinedSlipWheelCPI_REX1
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 175;

                    ;% rtP.CombinedSlipWheelCPI_REX2
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 176;

                    ;% rtP.CombinedSlipWheelCPI_REY1
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 177;

                    ;% rtP.CombinedSlipWheelCPI_REY2
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 178;

                    ;% rtP.CombinedSlipWheelCPI_RHX1
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 179;

                    ;% rtP.CombinedSlipWheelCPI_RHY1
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 180;

                    ;% rtP.CombinedSlipWheelCPI_RHY2
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 181;

                    ;% rtP.CombinedSlipWheelCPI_RIM_RADIUS
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 182;

                    ;% rtP.CombinedSlipWheelCPI_RVY1
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 183;

                    ;% rtP.CombinedSlipWheelCPI_RVY2
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 184;

                    ;% rtP.CombinedSlipWheelCPI_RVY3
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 185;

                    ;% rtP.CombinedSlipWheelCPI_RVY4
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 186;

                    ;% rtP.CombinedSlipWheelCPI_RVY5
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 187;

                    ;% rtP.CombinedSlipWheelCPI_RVY6
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 188;

                    ;% rtP.CombinedSlipWheelCPI_SSZ1
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 189;

                    ;% rtP.CombinedSlipWheelCPI_SSZ2
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 190;

                    ;% rtP.CombinedSlipWheelCPI_SSZ3
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 191;

                    ;% rtP.CombinedSlipWheelCPI_SSZ4
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 192;

                    ;% rtP.CombinedSlipWheelCPI_UNLOADED_R
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 193;

                    ;% rtP.CombinedSlipWheelCPI_VERTICAL_S
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 194;

                    ;% rtP.CombinedSlipWheelCPI_VXLOW
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 195;

                    ;% rtP.CombinedSlipWheelCPI_WIDTH
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 196;

                    ;% rtP.CombinedSlipWheelCPI_turnslip
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 197;

                    ;% rtP.MagicTireConstInput_vdynMF
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 198;

                    ;% rtP.FlipTire_Gain
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 477;

                    ;% rtP.FlipTire1_Gain
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 478;

                    ;% rtP.RadialDeflctConstant_Value
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 479;

                    ;% rtP.Gain_Gain
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 480;

                    ;% rtP.Integrator_IC
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 481;

                    ;% rtP.Integrator_IC_e
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 482;

                    ;% rtP.vertType_Value
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 483;

                    ;% rtP.Saturation1_UpperSat
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 484;

                    ;% rtP.Saturation1_LowerSat
                    section.data(208).logicalSrcIdx = 207;
                    section.data(208).dtTransOffset = 485;

                    ;% rtP.Saturation_UpperSat
                    section.data(209).logicalSrcIdx = 208;
                    section.data(209).dtTransOffset = 486;

                    ;% rtP.Saturation_LowerSat
                    section.data(210).logicalSrcIdx = 209;
                    section.data(210).dtTransOffset = 487;

                    ;% rtP.Saturation1_UpperSat_d
                    section.data(211).logicalSrcIdx = 210;
                    section.data(211).dtTransOffset = 488;

                    ;% rtP.Saturation1_LowerSat_l
                    section.data(212).logicalSrcIdx = 211;
                    section.data(212).dtTransOffset = 489;

                    ;% rtP.Saturation_UpperSat_f
                    section.data(213).logicalSrcIdx = 212;
                    section.data(213).dtTransOffset = 490;

                    ;% rtP.Saturation_LowerSat_f
                    section.data(214).logicalSrcIdx = 213;
                    section.data(214).dtTransOffset = 491;

                    ;% rtP.Integrator_IC_j
                    section.data(215).logicalSrcIdx = 214;
                    section.data(215).dtTransOffset = 492;

                    ;% rtP.Saturation1_UpperSat_n
                    section.data(216).logicalSrcIdx = 215;
                    section.data(216).dtTransOffset = 493;

                    ;% rtP.Saturation1_LowerSat_c
                    section.data(217).logicalSrcIdx = 216;
                    section.data(217).dtTransOffset = 494;

                    ;% rtP.Saturation_UpperSat_k
                    section.data(218).logicalSrcIdx = 217;
                    section.data(218).dtTransOffset = 495;

                    ;% rtP.Saturation_LowerSat_d
                    section.data(219).logicalSrcIdx = 218;
                    section.data(219).dtTransOffset = 496;

                    ;% rtP.Integrator_IC_i
                    section.data(220).logicalSrcIdx = 219;
                    section.data(220).dtTransOffset = 497;

                    ;% rtP.Saturation1_UpperSat_b
                    section.data(221).logicalSrcIdx = 220;
                    section.data(221).dtTransOffset = 498;

                    ;% rtP.Saturation1_LowerSat_h
                    section.data(222).logicalSrcIdx = 221;
                    section.data(222).dtTransOffset = 499;

                    ;% rtP.Saturation_UpperSat_fp
                    section.data(223).logicalSrcIdx = 222;
                    section.data(223).dtTransOffset = 500;

                    ;% rtP.Saturation_LowerSat_h
                    section.data(224).logicalSrcIdx = 223;
                    section.data(224).dtTransOffset = 501;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 60;
            section.data(60)  = dumData; %prealloc

                    ;% rtB.FlipTire
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.FlipTire1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.Gain
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.Sum2
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.Integrator
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.Integrator_f
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.Sum1
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.Product
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.Add
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.Product2
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.Add1
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.Abs
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.Add_a
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.Saturation1
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.Product3
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.Saturation
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.Product1
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.Product2_p
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.Add1_e
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.Abs_c
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.Add_i
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.Saturation1_l
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtB.Product3_e
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtB.Saturation_f
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtB.Product1_l
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtB.Product2_pg
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtB.Add1_k
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtB.Abs_f
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtB.Integrator_e
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtB.Add_f
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtB.Saturation1_lc
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtB.Product3_c
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtB.Saturation_d
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtB.Product1_f
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtB.Product2_n
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtB.Add1_ke
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtB.Abs_k
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtB.Integrator_k
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtB.Add_k
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtB.Saturation1_i
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtB.Product3_p
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtB.Saturation_fn
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtB.Product1_a
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtB.TmpSignalConversionAtSFunctionI
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtB.Fx
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 70;

                    ;% rtB.Fy
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 71;

                    ;% rtB.FzTire
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 72;

                    ;% rtB.Mx
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 73;

                    ;% rtB.My
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 74;

                    ;% rtB.Mz
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 75;

                    ;% rtB.Re
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 76;

                    ;% rtB.Kappa
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 77;

                    ;% rtB.Alpha
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 78;

                    ;% rtB.sig_x
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 79;

                    ;% rtB.sig_y
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 80;

                    ;% rtB.a
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 81;

                    ;% rtB.b
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 82;

                    ;% rtB.RL
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 83;

                    ;% rtB.RadialDeflct
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 84;

                    ;% rtB.Tw
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 85;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 0;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%

            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 956885486;
    targMap.checksum1 = 171209259;
    targMap.checksum2 = 3135820511;
    targMap.checksum3 = 64097032;

