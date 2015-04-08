/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class <CPLMinglePulledChangesTaskDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {
    NSString *_clientCacheIdentifier;
    unsigned int _countOfNotifiedBatchesInPullQueue;
    BOOL _hasPreparedForMingling;
    NSObject<OS_dispatch_queue> *_lock;
}

@property(retain) <CPLMinglePulledChangesTaskDelegate> * delegate;

+ (BOOL)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(BOOL*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_launch;
- (void)_processNextBatch;
- (void)_taskDidFinishWithError:(id)arg1;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end