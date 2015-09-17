/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiteMetadataImageCache : NSObject {
    NSMutableDictionary *_cacheSettings;
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > { 
        struct __compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > { 
            struct CoalescedAsynchronousWriter {} *__first_; 
        } __ptr_; 
    } _cacheSettingsWriter;
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_imageDirectoryURL;
    NSMutableDictionary *_imageTypeToRetainCountMaps;
    NSMutableDictionary *_imagesForKeyStrings;
    NSMutableSet *_missingImageKeyStrings;
    NSMutableSet *_pendingKeyStringRequests;
    BOOL _terminating;
}

@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (getter=isTerminating, nonatomic, readonly) BOOL terminating;

+ (const char *)diskAccessQueueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_cacheSettingsFileURL;
- (void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 type:(int)arg3;
- (id)_fileLocationForKeyString:(id)arg1 type:(int)arg2;
- (id)_fileNameForKeyString:(id)arg1 type:(int)arg2;
- (id)_loadImageFromDiskForKeyString:(id)arg1 type:(int)arg2;
- (void)_removeImagesPassingTest:(id /* block */)arg1;
- (void)_requestImageForKeyString:(id)arg1 type:(int)arg2;
- (BOOL)areSettingsLoaded;
- (void)didFinishLoadingSettings;
- (void)didRemoveImageForKeyString:(id)arg1 type:(int)arg2;
- (void)dispatchDiskAccessBlock:(id /* block */)arg1;
- (id)imageDirectoryURL;
- (id)imageForKeyString:(id)arg1 type:(int)arg2;
- (int)imageStateForKeyString:(id)arg1;
- (id)init;
- (id)initWithImageDirectoryURL:(id)arg1;
- (BOOL)isImageRetainedForKeyString:(id)arg1 type:(int)arg2;
- (BOOL)isTerminating;
- (id)keyStringsToRetainCountsForType:(int)arg1;
- (void)notifyDidFinishLoadingSettings;
- (void)notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 type:(int)arg3;
- (void)purgeUnneededImages;
- (void)releaseImageForKeyString:(id)arg1 type:(int)arg2;
- (void)removeAllImages;
- (void)removeImageFromCacheForKeyString:(id)arg1 type:(int)arg2;
- (void)retainImageForKeyString:(id)arg1 type:(int)arg2;
- (void)saveCacheSettingsSoon;
- (void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 type:(int)arg3;
- (void)savePendingChangesBeforeTermination;
- (void)setImageState:(int)arg1 forKeyString:(id)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;

@end