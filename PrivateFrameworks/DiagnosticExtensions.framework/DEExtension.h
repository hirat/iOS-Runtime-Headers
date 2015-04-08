/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@class DEExtensionHostContext, NSExtension, NSObject<OS_dispatch_group>, NSString;

@interface DEExtension : NSObject {
    NSExtension *__extension;
    BOOL _allowUserAttachmentSelection;
    NSString *_attachmentsName;
    BOOL _canEnableLogging;
    BOOL _canGenerateNewAttachment;
    DEExtensionHostContext *_context;
    NSString *_displayName;
    BOOL _hasBeenLoaded;
    NSString *_identifier;
    BOOL _isLoggingEnabled;
    NSString *_loggingConsent;
    NSString *_ownerBundleID;
    NSObject<OS_dispatch_group> *extendInfoGroup;
}

@property(retain) NSExtension * _extension;
@property BOOL allowUserAttachmentSelection;
@property(retain) NSString * attachmentsName;
@property BOOL canEnableLogging;
@property BOOL canGenerateNewAttachment;
@property(retain) NSString * displayName;
@property BOOL hasBeenLoaded;
@property(retain) NSString * identifier;
@property BOOL isLoggingEnabled;
@property(retain) NSString * loggingConsent;
@property(retain) NSString * ownerBundleID;

- (void).cxx_destruct;
- (id)_extension;
- (void)_performWithHostContext:(id)arg1;
- (BOOL)allowUserAttachmentSelection;
- (void)attachmentListWithHandler:(id)arg1;
- (id)attachmentsName;
- (BOOL)canEnableLogging;
- (BOOL)canGenerateNewAttachment;
- (id)description;
- (void)disableLoggingWithHandler:(id)arg1;
- (id)displayName;
- (void)enableLoggingWithHandler:(id)arg1;
- (void)endUsingExtension;
- (void)getAttachmentsWithParameters:(id)arg1 andHandler:(id)arg2;
- (BOOL)hasBeenLoaded;
- (id)identifier;
- (id)initWithNSExtension:(id)arg1;
- (BOOL)isLoggingEnabled;
- (void)isLoggingEnabledHandler:(id)arg1;
- (void)loadExtendedInfo;
- (id)loggingConsent;
- (id)ownerBundleID;
- (void)setAllowUserAttachmentSelection:(BOOL)arg1;
- (void)setAttachmentsName:(id)arg1;
- (void)setCanEnableLogging:(BOOL)arg1;
- (void)setCanGenerateNewAttachment:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasBeenLoaded:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsLoggingEnabled:(BOOL)arg1;
- (void)setLoggingConsent:(id)arg1;
- (void)setOwnerBundleID:(id)arg1;
- (void)set_extension:(id)arg1;

@end