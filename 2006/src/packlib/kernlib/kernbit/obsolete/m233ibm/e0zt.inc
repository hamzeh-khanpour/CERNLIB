*
* $Id: e0zt.inc,v 1.1.1.1 1996/02/15 17:47:40 mclareni Exp $
*
* $Log: e0zt.inc,v $
* Revision 1.1.1.1  1996/02/15 17:47:40  mclareni
* Kernlib
*
*
*
* e0zt.inc
*
          MACRO
&L        E0ZT
          SPACE
&L        DS        0C                  BYTE ALIGNMENT ONLY
          SPACE
*         THIS TRANSLATE TABLE CONVERTS CERN EBCDIC TO EBCDIC WITH
*         ONLY THOSE CHARACTERS WHICH ARE AVAILABLE ON A TN
*         PRINT TRAIN.  OTHER CHARACTERS ARE CONVERTED TO C'.'.
          SPACE
          DC        X'4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B'
          DC        X'4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B'
          DC        X'4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B'
          DC        X'4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B'
          DC        X'404B4B4B4B4B4B4B4B4B4A4B4C4D4E4F'
          DC        X'504B4B4B4B4B4B4B4B4B5A5B5C5D5E5F'
          DC        X'60614B4B4B4B4B4B4B4B4B6B6C6D6E6F'
          DC        X'4B4B4B4B4B4B4B4B4B4B7A7B7C7D7E7F'
          DC        X'4B8182838485868788894B8B8C8D8E8F'
          DC        X'4B9192939495969798994B9B9C9D9E9F'
          DC        X'A0A1A2A3A4A5A6A7A8A94BABACADAEAF'
          DC        X'B0B1B2B3B4B5B6B7B8B94BBBBCBDBEBF'
          DC        X'4BC1C2C3C4C5C6C7C8C94B4B4B4B4B4B'
          DC        X'4BD1D2D3D4D5D6D7D8D94B4B4B4B4B4B'
          DC        X'E04BE2E3E4E5E6E7E8E94B4B4B4B4B4B'
          DC        X'F0F1F2F3F4F5F6F7F8F94B4B4B4B4B4B'
          SPACE
          MEND