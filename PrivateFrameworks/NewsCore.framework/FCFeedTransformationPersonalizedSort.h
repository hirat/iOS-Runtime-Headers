/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming> {
    NSMapTable * _feedItemScores;
    <FCFeedPersonalizing> * _feedPersonalizer;
    long long  _sortOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMapTable *feedItemScores;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sortOptions;
@property (readonly) Class superclass;

+ (id)transformationWithPersonalizer:(id)arg1;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2;

- (void).cxx_destruct;
- (id)feedItemScores;
- (id)feedPersonalizer;
- (void)setFeedItemScores:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setSortOptions:(long long)arg1;
- (long long)sortOptions;
- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;

@end