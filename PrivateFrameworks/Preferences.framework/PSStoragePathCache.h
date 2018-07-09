/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStoragePathCache : NSObject {
    NSLock * _dataLock;
    NSObject<OS_dispatch_queue> * _fsQueue;
    struct __FSEventStream { } * _fsStream;
    unsigned long long  _lastEventID;
    NSMutableDictionary * _pathCache;
    NSArray * _rootPaths;
}

@property (retain) NSLock *dataLock;
@property unsigned long long lastEventID;
@property (retain) NSMutableDictionary *pathCache;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_flushCache:(id)arg1;
- (id)cacheInfoForPath:(id)arg1;
- (id)cacheObjectWithKey:(id)arg1 forPath:(id)arg2;
- (void)closeStream;
- (id)dataLock;
- (void)dealloc;
- (void)flushCache;
- (id)init;
- (id)initWithRootPaths:(id)arg1;
- (unsigned long long)lastEventID;
- (void)openStream;
- (void)openStreamWithRootPaths:(id)arg1;
- (id)pathCache;
- (void)postUpdate;
- (void)setCacheInfo:(id)arg1 forPath:(id)arg2;
- (void)setCacheObject:(id)arg1 withKey:(id)arg2 forPath:(id)arg3;
- (void)setDataLock:(id)arg1;
- (void)setLastEventID:(unsigned long long)arg1;
- (void)setPathCache:(id)arg1;

@end