/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithEntity:(id)arg1 inScope:(id)arg2;
- (BOOL)isUpdateScoped;
- (void)setUpdateColumnsIntermediate:(id)arg1;
- (id)updateColumnsIntermediate;

@end