/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainerID, CKRecordID, CKShareID, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CKRecord : NSObject <NSCopying, NSSecureCoding, PQLBindable> {
    NSMutableSet *_changedKeysSet;
    NSArray *_conflictLoserEtags;
    CKContainerID *_containerID;
    NSDate *_creationDate;
    CKRecordID *_creatorUserRecordID;
    NSString *_etag;
    CKShareID *_fakeShareID;
    BOOL _hasUpdatedShareID;
    BOOL _knownToServer;
    CKRecordID *_lastModifiedUserRecordID;
    NSDate *_modificationDate;
    NSString *_modifiedByDevice;
    NSMutableDictionary *_originalValues;
    int _permission;
    NSDictionary *_pluginFields;
    NSString *_previousProtectionEtag;
    CKShareID *_previousShareID;
    NSData *_protectionData;
    NSString *_protectionEtag;
    CKRecordID *_recordID;
    NSString *_recordType;
    BOOL _serializeProtectionData;
    CKShareID *_shareID;
    NSString *_shareProtectionEtag;
    BOOL _trackChanges;
    NSMutableDictionary *_values;
    BOOL _wasCached;
    NSString *_zoneProtectionEtag;
}

@property(readonly) NSData * brc_containerMetadataPropertiesData;
@property(retain) NSSet * changedKeysSet;
@property(retain) NSArray * conflictLoserEtags;
@property(copy) CKContainerID * containerID;
@property(readonly) BOOL containsAssetValues;
@property(copy) NSDate * creationDate;
@property(copy) CKRecordID * creatorUserRecordID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSString * etag;
@property(retain) CKShareID * fakeShareID;
@property(readonly) BOOL hasEncryptedData;
@property(readonly) BOOL hasModifiedEncryptedData;
@property(readonly) BOOL hasModifiedPropertiesRequiringEncryption;
@property(readonly) BOOL hasPropertiesRequiringEncryption;
@property(readonly) BOOL hasUpdatedShareID;
@property(readonly) unsigned int hash;
@property(getter=isKnownToServer) BOOL knownToServer;
@property(copy) CKRecordID * lastModifiedUserRecordID;
@property(copy) NSDate * modificationDate;
@property(copy) NSString * modifiedByDevice;
@property(retain) NSDictionary * originalValues;
@property int permission;
@property(copy) NSDictionary * pluginFields;
@property(retain) NSString * previousProtectionEtag;
@property(retain) CKShareID * previousShareID;
@property(retain) NSData * protectionData;
@property(retain) NSString * protectionEtag;
@property(copy,readonly) NSString * recordChangeTag;
@property(copy) CKRecordID * recordID;
@property(copy) NSString * recordType;
@property BOOL serializeProtectionData;
@property(retain) CKShareID * shareID;
@property(retain) NSString * shareProtectionEtag;
@property(readonly) Class superclass;
@property BOOL trackChanges;
@property(retain) NSDictionary * values;
@property BOOL wasCached;
@property(retain) NSString * zoneProtectionEtag;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;
+ (id)brc_containerMetadataZoneID;
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)documentContentsRecordForItemID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)_allStrings;
- (BOOL)_checkProperties:(BOOL)arg1 withValueCheckBlock:(id)arg2;
- (BOOL)_deserializeFilename:(id*)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (BOOL)_deserializeValue:(id*)arg1 forKey:(id)arg2 expectClass:(Class)arg3 allowNil:(BOOL)arg4 errorDescription:(id*)arg5;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateRecordName:(id)arg1;
- (void)_validateRecordValue:(id)arg1;
- (id)allKeys;
- (id)allTokens;
- (id)brc_containerMetadataIconNames;
- (id)brc_containerMetadataIconPaths;
- (id)brc_containerMetadataPropertiesData;
- (BOOL)brc_isInterestingRecordForSyncDown;
- (id)brc_oplockMergeEtag;
- (id)brc_updateDroppedReason;
- (id)changedKeys;
- (id)changedKeysSet;
- (id)conflictLoserEtags;
- (id)containerID;
- (BOOL)containsAssetValues;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)creatorUserRecordID;
- (id)debugDescription;
- (id)description;
- (BOOL)deserializeAliasInfo:(id*)arg1 error:(id*)arg2;
- (BOOL)deserializeSharingOptions:(unsigned int*)arg1 error:(id*)arg2;
- (BOOL)deserializeStatInfo:(id*)arg1 itemID:(id)arg2 error:(id*)arg3;
- (BOOL)deserializeVersion:(id*)arg1 fakeStatInfo:(id*)arg2 error:(id*)arg3;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)etag;
- (id)fakeShareID;
- (BOOL)hasEncryptedData;
- (BOOL)hasModifiedEncryptedData;
- (BOOL)hasModifiedPropertiesRequiringEncryption;
- (BOOL)hasPropertiesRequiringEncryption;
- (BOOL)hasUpdatedShareID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (BOOL)isKnownToServer;
- (id)lastModifiedUserRecordID;
- (id)modificationDate;
- (id)modifiedByDevice;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (int)permission;
- (id)pluginFields;
- (id)previousProtectionEtag;
- (id)previousShareID;
- (id)protectionData;
- (id)protectionEtag;
- (id)recordChangeTag;
- (id)recordID;
- (id)recordType;
- (void)resetChangedKeys;
- (id)safari_arrayForKey:(id)arg1;
- (BOOL)safari_boolForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_encryptedDataForKey:(id)arg1;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;
- (void)serializeFilename:(id)arg1 forCreation:(BOOL)arg2;
- (void)serializeFilename:(id)arg1 forCreation:(BOOL)arg2 setExtension:(BOOL)arg3;
- (BOOL)serializeProtectionData;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(BOOL)arg4;
- (void)serializeSystemFields:(id)arg1;
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(BOOL)arg3;
- (void)setChangedKeysSet:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreatorUserRecordID:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFakeShareID:(id)arg1;
- (void)setKnownToServer:(BOOL)arg1;
- (void)setLastModifiedUserRecordID:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOriginalValues:(id)arg1;
- (void)setPermission:(int)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setPreviousShareID:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setSerializeProtectionData:(BOOL)arg1;
- (void)setShareID:(id)arg1;
- (void)setShareProtectionEtag:(id)arg1;
- (void)setTrackChanges:(BOOL)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValues:(id)arg1;
- (void)setWasCached:(BOOL)arg1;
- (void)setZoneProtectionEtag:(id)arg1;
- (id)shareID;
- (id)shareProtectionEtag;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (BOOL)trackChanges;
- (id)valueForKey:(id)arg1;
- (id)values;
- (BOOL)wasCached;
- (id)zoneProtectionEtag;

@end