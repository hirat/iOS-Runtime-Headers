/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, NSString;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem {
}

@property(readonly) NSString * currencyCode;
@property(readonly) NSArray * paymentSummaryItems;

+ (int)dataType;

- (id)currencyCode;
- (BOOL)isValidWithError:(id*)arg1;
- (id)paymentSummaryItems;

@end