/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)_buildGroupWithCatchUpOperation:(id)arg1;
- (id)_defaultBackgroundGradient;
- (id)_feedTransformationWithOtherArticleIDs:(id)arg1;
- (void)_fetchHeadlinesForArticleIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2;
- (void)_headlinesFromMandatory:(id)arg1 optional:(id)arg2 articleIDs:(id)arg3 completion:(id /* block */)arg4;
- (id)_personalizedFeedTransformationWithLimit:(unsigned long long)arg1 otherArticleIDs:(id)arg2 preselectedArticles:(id)arg3;
- (void)_selectHeadlinesFromMandatory:(id)arg1 optional:(id)arg2 articleMetadataByArticleID:(id)arg3 cursor:(id)arg4 isAllowedToCollapse:(bool)arg5 completion:(id /* block */)arg6;
- (bool)hasSeenAllPreviousArticleIDs:(id)arg1;
- (id)headlinesLogFromHeadlines:(id)arg1 includeScore:(bool)arg2;
- (void)performOperation;

@end