/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloProxy : NSProxy {
    <CLIntersiloProxyDelegateProtocol> * _delegate;
    CLSilo * _delegateSilo;
    CLIntersiloInterface * _proxiedInterface;
}

@property (nonatomic, readonly) <CLIntersiloProxyDelegateProtocol> *delegate;
@property (nonatomic, readonly) CLSilo *delegateSilo;
@property (nonatomic, readonly, copy) CLIntersiloInterface *proxiedInterface;

+ (Class)initiatorRepresentingClass;
+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 withInboundInterface:(id)arg4 andOutboundInterface:(id)arg5;
+ (Class)recipientRepresentingClass;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)delegate;
- (id)delegateSilo;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProxiedInterface:(id)arg1;
- (id)initWithProxiedInterface:(id)arg1 delegateObject:(id)arg2 delegateSilo:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3;
- (id)peer;
- (id)proxiedInterface;
- (void)registerDelegate:(id)arg1 inSilo:(id)arg2;
- (void)setDelegateEntityName:(const char *)arg1;

@end
