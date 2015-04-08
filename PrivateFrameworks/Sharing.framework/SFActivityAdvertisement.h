/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSData, NSDictionary, NSString, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {
    NSData *_activityPayload;
    NSData *_advertisementPayload;
    SFPeerDevice *_device;
    NSDictionary *_options;
}

@property(copy) NSData * activityPayload;
@property(copy,readonly) NSData * advertisementPayload;
@property(retain,readonly) SFPeerDevice * device;
@property(copy,readonly) NSString * deviceIdentifier;
@property(copy,readonly) NSString * deviceModelIdentifier;
@property(copy,readonly) NSString * deviceName;
@property(copy,readonly) NSDictionary * options;

+ (BOOL)supportsSecureCoding;

- (id)activityPayload;
- (id)advertisementPayload;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)deviceIdentifier;
- (id)deviceModelIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 device:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)setActivityPayload:(id)arg1;

@end