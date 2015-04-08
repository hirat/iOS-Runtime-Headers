/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSString, PLAdditionalAssetAttributes, PLCloudMaster, PLManagedAsset;

@interface PLCloudResource : PLManagedObject {
}

@property(retain,readonly) PLManagedAsset * asset;
@property(retain) PLAdditionalAssetAttributes * assetAttributes;
@property(retain) NSString * assetUuid;
@property(retain) PLCloudMaster * cloudMaster;
@property(retain) NSString * filePath;
@property long long fileSize;
@property(retain) NSString * fingerprint;
@property int height;
@property BOOL isAvailable;
@property BOOL isFlattened;
@property BOOL isLocallyAvailable;
@property(retain) NSDate * lastOnDemandDownloadDate;
@property(retain) NSDate * prunedAt;
@property int type;
@property(retain) NSString * uniformTypeIdentifier;
@property int width;

+ (id)allCloudResourcesInManagedObjectContext:(id)arg1;
+ (long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (void)countNonLocalOriginalResourcesInLibrary:(id)arg1 outCount:(unsigned int*)arg2 photoCount:(unsigned int*)arg3 videoCount:(unsigned int*)arg4;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(BOOL)arg4;
+ (void)markResource:(id)arg1 asLocallyAvailable:(BOOL)arg2 inPhotoLibrary:(id)arg3;

- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;
- (void)applyPropertiesFromCloudResource:(id)arg1;
- (id)asset;
- (id)cplResourceWithItemIdentifier:(id)arg1 includeFile:(BOOL)arg2;
- (id)description;

@end