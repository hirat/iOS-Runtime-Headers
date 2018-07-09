/* Generated by RuntimeBrowser.
 */

@protocol TSTCellIteratorData <NSObject>

@required

- (TSTCell *)cell;
- (bool)cellHasCommentStorage;
- (bool)cellHasConditionalStyle;
- (bool)cellHasCustomFormat;
- (bool)cellHasFormula;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })cellID;
- (bool)cellIsEmpty;
- (int)cellValueType;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergeRange;

@end