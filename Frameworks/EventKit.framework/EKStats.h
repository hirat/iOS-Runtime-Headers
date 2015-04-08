/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSMutableDictionary;

@interface EKStats : NSObject {
    NSMutableDictionary *_distributionOperations;
    int _domain;
    NSMutableDictionary *_scalarOperations;
}

+ (void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;
+ (void)clearDistribution:(id)arg1 domain:(int)arg2;
+ (void)clearScalar:(id)arg1 domain:(int)arg2;
+ (BOOL)enabled;
+ (unsigned long long)getCurrentTime;
+ (double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 sinceStartTime:(unsigned long long)arg3;
+ (double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 timingBlock:(id)arg3;
+ (void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;

- (void)addToScalar:(id)arg1 value:(long long)arg2;
- (void)clearDistribution:(id)arg1;
- (void)clearScalar:(id)arg1;
- (void)commit;
- (void)dealloc;
- (id)initWithDomain:(int)arg1;
- (void)pushToDistribution:(id)arg1 value:(double)arg2;
- (void)setDistribution:(id)arg1 value:(double)arg2;
- (void)setScalar:(id)arg1 value:(long long)arg2;

@end